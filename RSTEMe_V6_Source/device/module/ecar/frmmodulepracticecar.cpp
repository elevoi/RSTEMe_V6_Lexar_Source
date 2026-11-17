#include "frmmodulepracticecar.h"
#include "ui_frmmodulepracticecar.h"
#include <QMessageBox>
#include <QtMath>
#include <QMenu>
#include "device/module/ecar/ecarfilepractice.h"
#include <QScrollBar>


FrmModulePracticeCar::FrmModulePracticeCar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmModulePracticeCar)
{
    ui->setupUi(this);
    auto _move = this->geometry();
    auto _x = (1280-_move.size().width())/2;
    auto _y = (800-_move.size().height())/2;
    _move.setX(_x);
    _move.setY(_y+5);
    this->setGeometry(_move);
    this->initTable();
    this->getSizeWindow();
    //init Display
    this->initDisplay();

    //timer
    m_timerPoll = new QTimer(this);
    QObject::connect(m_timerPoll,&QTimer::timeout,this,&FrmModulePracticeCar::on_timerPoll);
    m_timerPoll->start(1);
}

FrmModulePracticeCar::~FrmModulePracticeCar()
{
    if(m_emodule){
    QObject::disconnect(m_emodule,&EModule::newData,this,&FrmModulePracticeCar::on_newData);
    m_emodule->deleteLater();
    m_emodule = nullptr;
    }
    delete ui;
}

void FrmModulePracticeCar::initDisplay()
{
    //widcar
    if(!m_widCar_01){
        m_widCar_01 = new WidModuleCar(ui->frame_car01);
        auto _rect = m_widCar_01->geometry();
        _rect.setRect(2,2,_rect.width(),_rect.height());
        m_widCar_01->setGeometry(_rect);
        m_widCar_01->setWindowTitle(this->windowTitle());
        m_widCar_01->setWindowIcon(this->windowIcon());
        m_widCar_01->show();

    }
    if(!m_widCar_02){
        m_widCar_02 = new WidModuleCar(ui->frame_car02);
        auto _rect = m_widCar_02->geometry();
        _rect.setRect(2,2,_rect.width(),_rect.height());
        m_widCar_02->setGeometry(_rect);
        m_widCar_02->setWindowTitle(this->windowTitle());
        m_widCar_02->setWindowIcon(this->windowIcon());
        m_widCar_02->show();
    }
    //practice
    m_ecarPractice = new ECarPractice();
    //chart
    this->initChart();
    //table
    this->refreshToolTable();
    //


    ui->lineEdit_playTime->setText(QString::number(m_practiceType.timeOut));
    this->setAxisType(m_practiceType.axisType);
    m_zeroData.distance = ui->checkBox_zeroDistance->checkState();
    m_zeroData.force = ui->checkBox_zeroForce->checkState();
    m_zeroData.axis = ui->checkBox_zeroAxis->checkState();
}

void FrmModulePracticeCar::addDevice(EDevice *dev)
{
    m_edevice = dev;
    this->setWindowTitle(dev->deviceInfo().name() + "(@" + dev->deviceInfo().serialHex() + ")");
    auto _devInfo = m_edevice->deviceInfo();
    _devInfo.setSampleTime(m_practiceParameter.sampleTime);
    _devInfo.setRegNumber(m_practiceParameter.maxRegRTU);
    m_edevice->setDeviceInfo(_devInfo);
   // ui->label_Name->setText(dev->deviceInfo().name());
    m_emodule = new EModule(this,m_edevice);
    m_emodule->start();
    QObject::connect(m_emodule,&EModule::newData,this,&FrmModulePracticeCar::on_newData);
    if(m_widCar_01)m_widCar_01->setModule(m_emodule);
    if(m_widCar_02)m_widCar_02->setModule(m_emodule);
    //
    m_ecarUnit1 = m_parameter.car(ECarDataUnit::CAR_NUM_01);
    m_ecarUnit2 = m_parameter.car(ECarDataUnit::CAR_NUM_02);
    QObject::connect(m_ecarPractice,&ECarPractice::replySetPlay,this,&FrmModulePracticeCar::on_setPlay);
    this->initSensorType();

}


void FrmModulePracticeCar::initSensorType()
{
if(!m_ecarUnit1)return;
if(!m_ecarUnit2)return;
//init sensor
m_practiceType.sensorList.clear();
m_practiceType.cbxList.clear();
m_practiceType.lineColors.clear();
//car1-distance
//////////////////////////////////////////////////////////////////////////car1
///
QString _lname = "01-";
this->updateSensorList(_lname,m_ecarUnit1->distanceUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.distance,ui->checkBox_Car1_lineDistance,Qt::red);
this->updateSensorList(_lname,m_ecarUnit1->speedUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.speed,ui->checkBox_Car1_lineSpeed,Qt::darkGreen);
this->updateSensorList(_lname,m_ecarUnit1->accelerationUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.acceleration,ui->checkBox_Car1_lineAcceleration,Qt::blue);
this->updateSensorList(_lname,m_ecarUnit1->forceUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.force,ui->checkBox_Car1_lineForce,Qt::darkRed);
this->updateSensorList(_lname,m_ecarUnit1->axisXUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.axisX,ui->checkBox_Car1_lineAxisX,Qt::black);
this->updateSensorList(_lname,m_ecarUnit1->axisYUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.axisY,ui->checkBox_Car1_lineAxisY,Qt::green);
this->updateSensorList(_lname,m_ecarUnit1->axisZUnit().symbol,m_ecarPractice->practiceUnit().car01_splines.axisZ,ui->checkBox_Car1_lineAxisZ,Qt::darkBlue);
_lname = "02-";
this->updateSensorList(_lname,m_ecarUnit2->distanceUnit().symbol,       m_ecarPractice->practiceUnit().car02_splines.distance,     ui->checkBox_Car2_lineDistance,Qt::cyan);
this->updateSensorList(_lname,m_ecarUnit2->speedUnit().symbol,          m_ecarPractice->practiceUnit().car02_splines.speed,        ui->checkBox_Car2_lineSpeed,Qt::darkMagenta);
this->updateSensorList(_lname,m_ecarUnit2->accelerationUnit().symbol,   m_ecarPractice->practiceUnit().car02_splines.acceleration, ui->checkBox_Car2_lineAcceleration,Qt::yellow);
this->updateSensorList(_lname,m_ecarUnit2->forceUnit().symbol,          m_ecarPractice->practiceUnit().car02_splines.force,        ui->checkBox_Car2_lineForce,Qt::darkCyan);
this->updateSensorList(_lname,m_ecarUnit2->axisXUnit().symbol,          m_ecarPractice->practiceUnit().car02_splines.axisX,        ui->checkBox_Car2_lineAxisX,Qt::darkGray);
this->updateSensorList(_lname,m_ecarUnit2->axisYUnit().symbol,          m_ecarPractice->practiceUnit().car02_splines.axisY,        ui->checkBox_Car2_lineAxisY,Qt::magenta);
this->updateSensorList(_lname,m_ecarUnit2->axisZUnit().symbol,          m_ecarPractice->practiceUnit().car02_splines.axisZ,        ui->checkBox_Car2_lineAxisZ,Qt::darkYellow);
}

void FrmModulePracticeCar::updateSensorList(QString name, QString unit, QLineSeries *line, QCheckBox *cbx,QColor cl)
{
    auto *_sen = new SensorTypeDef();
    _sen->axisY = new QValueAxis();
    _sen->line = line;
    _sen->line->setName(name+_sen->line->name()+unit);
    QPalette _p = cbx->palette();
    _p.setColor(QPalette::WindowText,cl);
    cbx->setPalette(_p);
    _sen->line->setColor(cl);
    _sen->enable = cbx->checkState();
    //this->showLine(_sen);
    QObject::connect(cbx,&QCheckBox::stateChanged,this,[this,_sen,cbx](){
        _sen->enable = cbx->checkState();
        if(_sen->enable)this->updateLine(_sen);
        else this->removeChart(_sen);
        //this->showLine(_sen);
        this->resizeAllAxis();
    });
    m_practiceType.sensorList.append(_sen);
    m_practiceType.cbxList.append(cbx);
    m_practiceType.lineColors.append(cl);
}

void FrmModulePracticeCar::setAxisType(AxisType var)
{
    m_practiceType.axisType = var;
    if(!ui->toolButton_toolMultiY->isEnabled())ui->toolButton_toolMultiY->setEnabled(true);
    if(!ui->toolButton_toolSingleY->isEnabled())ui->toolButton_toolSingleY->setEnabled(true);
    switch(var){
    case ATP_single:
        ui->toolButton_toolSingleY->setEnabled(false);
        break;
    case ATP_multiple:
        ui->toolButton_toolMultiY->setEnabled(false);
        break;
    };
}

void FrmModulePracticeCar::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    // Your code here.
    int del_h = this->size().height() - m_widowSizeBase.window.height();
    int del_w = this->size().width() - m_widowSizeBase.window.width();
    this->updateSizeWindow(del_w,del_h);
}



void FrmModulePracticeCar::on_newData(int)
{
    this->setValue();
}

void FrmModulePracticeCar::on_timerPoll()
{
    this->processPlay();
}

void FrmModulePracticeCar::on_setCondition(EConditionUnit::ConditionType cond)
{
    QPlainTextEdit *plain;
    EConditionUnit::ConditionUnit_TypeDef _prc1,_prc2;
if(cond==EConditionUnit::CDT_START){
    if(m_ecarUnit1)_prc1 = m_ecarUnit1->conditionStart();
    if(m_ecarUnit2)_prc2 = m_ecarUnit2->conditionStart();
    plain = ui->plainTextEdit_conditionStart;
    }
   else {
    if(m_ecarUnit1)_prc1 = m_ecarUnit1->conditionStop();
    if(m_ecarUnit2)_prc2 = m_ecarUnit2->conditionStop();
    plain = ui->plainTextEdit_conditionStop;
    }
//check condition car1
ECarDataUnit _ecar;
bool _have = false;
plain->clear();
auto _text1 = plain->toPlainText();
_text1.append("_____________XE-01_____________");
if(_prc1.time.compare!=EConditionUnit::COND_None){
    _text1.append("\nThời gian "+EConditionUnit::getCompareText(_prc1.time.compare)+" "+QString::number(_prc1.time.value)+" "+m_ecarUnit1->timeUnit().symbol);_have = true;}
if(_prc1.distance.compare!=EConditionUnit::COND_None){
    _text1.append("\nQuãng đường "+EConditionUnit::getCompareText(_prc1.distance.compare)+" "+QString::number(_prc1.distance.value)+" "+m_ecarUnit1->distanceUnit().symbol);_have = true;}
if(_prc1.speed.compare!=EConditionUnit::COND_None){
    _text1.append("\nVận tốc "+EConditionUnit::getCompareText(_prc1.speed.compare)+" "+QString::number(_prc1.speed.value)+" "+m_ecarUnit1->speedUnit().symbol);_have = true;}
if(_prc1.acceleration.compare!=EConditionUnit::COND_None){
    _text1.append("\nGia tốc "+EConditionUnit::getCompareText(_prc1.acceleration.compare)+" "+QString::number(_prc1.acceleration.value)+" "+m_ecarUnit1->accelerationUnit().symbol);_have = true;}
if(_prc1.force.compare!=EConditionUnit::COND_None){
    _text1.append("\nLực "+EConditionUnit::getCompareText(_prc1.force.compare)+" "+QString::number(_prc1.force.value)+" "+m_ecarUnit1->forceUnit().symbol);_have = true;}
if(_prc1.axisX.compare!=EConditionUnit::COND_None){
    _text1.append("\nTrục X "+EConditionUnit::getCompareText(_prc1.axisX.compare)+" "+QString::number(_prc1.axisX.value)+" "+m_ecarUnit1->axisXUnit().symbol);_have = true;}
if(_prc1.axisY.compare!=EConditionUnit::COND_None){
    _text1.append("\nTrục Y "+EConditionUnit::getCompareText(_prc1.axisY.compare)+" "+QString::number(_prc1.axisY.value)+" "+m_ecarUnit1->axisYUnit().symbol);_have = true;}
if(_prc1.axisZ.compare!=EConditionUnit::COND_None){
    _text1.append("\nTrục Z "+EConditionUnit::getCompareText(_prc1.axisZ.compare)+" "+QString::number(_prc1.axisZ.value)+" "+m_ecarUnit1->axisZUnit().symbol);_have = true;}
if(!_have)_text1.clear();
auto _text2 = plain->toPlainText();
_have = false;
_text2.append("\n_____________XE-02_____________");
if(_prc2.time.compare!=EConditionUnit::COND_None){
    _text2.append("\nThời gian "+EConditionUnit::getCompareText(_prc2.time.compare)+" "+QString::number(_prc2.time.value)+" "+m_ecarUnit2->timeUnit().symbol);_have = true;}
if(_prc2.distance.compare!=EConditionUnit::COND_None){
    _text2.append("\nQuãng đường "+EConditionUnit::getCompareText(_prc2.distance.compare)+" "+QString::number(_prc2.distance.value)+" "+m_ecarUnit2->distanceUnit().symbol);_have = true;}
if(_prc2.speed.compare!=EConditionUnit::COND_None){
    _text2.append("\nVận tốc "+EConditionUnit::getCompareText(_prc2.speed.compare)+" "+QString::number(_prc2.speed.value)+" "+m_ecarUnit2->speedUnit().symbol);_have = true;}
if(_prc2.acceleration.compare!=EConditionUnit::COND_None){
    _text2.append("\nGia tốc "+EConditionUnit::getCompareText(_prc2.acceleration.compare)+" "+QString::number(_prc2.acceleration.value)+" "+m_ecarUnit2->accelerationUnit().symbol);_have = true;}
if(_prc2.force.compare!=EConditionUnit::COND_None){
    _text2.append("\nLực "+EConditionUnit::getCompareText(_prc2.force.compare)+" "+QString::number(_prc2.force.value)+" "+m_ecarUnit2->forceUnit().symbol);_have = true;}
if(_prc2.axisX.compare!=EConditionUnit::COND_None){
    _text2.append("\nTrục X "+EConditionUnit::getCompareText(_prc2.axisX.compare)+" "+QString::number(_prc2.axisX.value)+" "+m_ecarUnit2->axisXUnit().symbol);_have = true;}
if(_prc2.axisY.compare!=EConditionUnit::COND_None){
    _text2.append("\nTrục Y "+EConditionUnit::getCompareText(_prc2.axisY.compare)+" "+QString::number(_prc2.axisY.value)+" "+m_ecarUnit2->axisYUnit().symbol);_have = true;}
if(_prc2.axisZ.compare!=EConditionUnit::COND_None){
    _text2.append("\nTrục Z "+EConditionUnit::getCompareText(_prc2.axisZ.compare)+" "+QString::number(_prc2.axisZ.value)+" "+m_ecarUnit2->axisZUnit().symbol);_have = true;}
if(!_have)_text2.clear();
plain->appendPlainText(_text1);
plain->appendPlainText(_text2);
}


void FrmModulePracticeCar::initChart()
{
    if(m_chart){m_chart->deleteLater();m_chart = nullptr;}
    if(m_echartView){m_echartView->deleteLater();m_echartView = nullptr;}
    if(m_axisX){m_axisX->deleteLater();m_axisX=nullptr;}
    m_axisX = new QValueAxis();
    m_chart = new QChart();
    m_echartView = new EChartView(m_chart,ui->graphicsViewChart);
    m_echartView->resize(ui->graphicsViewChart->size());
    m_echartView->chart()->legend()->setAlignment(Qt::AlignTop);
         this->updateTrackLine(EChartView::ETL_CROSSHAIR);
    m_chart->addAxis(m_axisX, Qt::AlignBottom);
    //m_chart->setAnimationOptions(QChart::NoAnimation);
    //m_chartView->setRenderHint(QPainter::Antialiasing);
    m_echartView->show();
}

void FrmModulePracticeCar::updateChart()
{
    foreach (auto var, m_practiceType.sensorList) {
        if(var->enable)this->updateLine(var);
    }
}


void FrmModulePracticeCar::updateLine(SensorTypeDef* sen)
{
    auto series = sen->line;
    QString _name = series->name();
    series->setPointsVisible(true);
    QObject::connect(series,&QLineSeries::clicked,this,[this,series](QPointF p){
        this->setSelectTable(series,p);
    });

    if((AxisType)m_practiceType.axisType==AxisType::ATP_multiple){
        auto _ind = m_chart->axes(Qt::Vertical).indexOf(sen->axisY);
        if(_ind<0)m_chart->addAxis(sen->axisY, Qt::AlignLeft);
        m_chart->addSeries(dynamic_cast<QLineSeries*>(series));
        if(m_axisX)series->attachAxis(m_axisX);
        series->attachAxis(sen->axisY);
        auto _brush = sen->axisY->titleBrush();
        _brush.setColor(series->color());
        sen->axisY->setTitleBrush(_brush);
        sen->axisY->setTitleFont(m_chart->font());
        sen->axisY->setTitleText(_name);
        sen->axisY->setRange(-0.01,0.01);
        }
        else{
            if(!m_axisY)m_axisY=new QValueAxis(this);
            m_axisY->setTitleText("Giá trị đo");
            auto _ind = m_chart->axes(Qt::Vertical).indexOf(m_axisY);
            if(_ind<0)m_chart->addAxis(m_axisY, Qt::AlignLeft);
            m_chart->addSeries(dynamic_cast<QLineSeries*>(series));
            if(m_axisX)series->attachAxis(m_axisX);
            series->attachAxis(m_axisY);
            m_axisY->setTitleFont(m_chart->font());
            m_axisY->setRange(-0.01,0.01);
        }
    m_echartView->updateSeries(series);
    //Table
    m_listSeries.append(series);
    this->appendTableColumn(series);
    this->updataTableSeries(series);
}

void FrmModulePracticeCar::removeChart(SensorTypeDef *sen)
{
    if(!m_chart)return;
    foreach (auto axis, m_chart->axes(Qt::Vertical)) {
        if(axis==sen->axisY){
            m_chart->removeAxis(sen->axisY);
        }
    }
    foreach (auto var, m_chart->series()) {
        auto series = sen->line;
        if(var==series){
            m_chart->removeSeries(series);
            m_echartView->removeSeries(series);
            this->removeList(series);
        }
    }
}

void FrmModulePracticeCar::removeList(QLineSeries *series)
{
    int i = m_listSeries.indexOf(series);
    if(i<0)return;
    this->removeTableColumn(i+1);
    m_listSeries.removeAt(i);
}

void FrmModulePracticeCar::updateTrackLine(EChartView::ETrackLine track)
{
    if(!m_echartView)return;
        //resetbutton
        if(!ui->toolButton_toolCrosshair->isEnabled())ui->toolButton_toolCrosshair->setEnabled(true);
        if(!ui->toolButton_toolCallout->isEnabled())ui->toolButton_toolCallout->setEnabled(true);
        switch(track){
        case EChartView::ETrackLine::ETL_CROSSHAIR:ui->toolButton_toolCrosshair->setEnabled(false);
            break;
        case EChartView::ETrackLine::ETL_CALLOUT:ui->toolButton_toolCallout->setEnabled(false);
            break;
        case EChartView::ETrackLine::ETL_y_ax:
            break;
        }
        m_echartView->setTrackLine(track);
}

void FrmModulePracticeCar::getMinMaxAxis()
{
    foreach (auto sen, m_practiceType.sensorList) {
        if(sen->line){
            sen->max=-99999999;
            sen->min=99999999;
            foreach (auto var, sen->line->points()) {
                if(sen->max<var.y())sen->max=var.y();
                if(sen->min>var.y())sen->min=var.y();
            }
        }
    }
}

void FrmModulePracticeCar::getMinMaxAxis(SensorTypeDef *sen)
{
    sen->max=-99999999;
    sen->min=99999999;
    foreach (auto var, sen->line->points()) {
        if(sen->max<var.y())sen->max=var.y();
        if(sen->min>var.y())sen->min=var.y();
    }
}

void FrmModulePracticeCar::resizeAxisXY()
{
    if(!m_chart)return;
    if(!m_axisX)return;
    foreach (auto var, m_practiceType.sensorList) {
        if((var->line)&&(var->enable)){
            this->getMinMaxAxis(var);
            auto _p = var->line->at(var->line->count()-1);
            //multy
            switch(m_practiceType.axisType){
            case ATP_single:
                if(!m_axisY)break;
                if(m_axisY->max()<var->max)m_axisY->setMax(var->max*1.1);
                if(m_axisY->min()>var->min)m_axisY->setMin(var->min*1.1);
                break;
            case ATP_multiple:
                if(!var->axisY)break;
                if(var->axisY->max()<var->max)var->axisY->setMax(var->max*1.1);
                if(var->axisY->min()>var->min)var->axisY->setMin(var->min*1.1);
                break;
            };
            if(m_axisX->max()<_p.x())m_axisX->setMax(m_axisX->max()+1);
        }
    }
}

void FrmModulePracticeCar::resizeAxis(SensorTypeDef *sen)
{
    foreach (auto var, sen->line->points()) {
        switch(m_practiceType.axisType){
        case ATP_single:
            if(!m_axisY)return;
            if(m_axisY->max()<var.y())m_axisY->setMax(var.y()*1.1);
            if(m_axisY->min()>var.y())m_axisY->setMin(var.y()*1.1);
            break;
        case ATP_multiple:
            if(!sen->axisY)return;
            if(sen->axisY->max()<var.y())sen->axisY->setMax(var.y()*1.1);
            if(sen->axisY->min()>var.y())sen->axisY->setMin(var.y()*1.1);
            break;
        };
        if(m_axisX){
            if(m_axisX->max()<var.x())m_axisX->setMax(var.x());
        }
    }
}

void FrmModulePracticeCar::resizeAllAxis()
{
    if(!m_chart)return;
    if(!m_axisX)return;
    if(m_axisY)m_axisY->setRange(0,0.01);
    foreach (auto sen, m_practiceType.sensorList) {
        if((sen->line)&&(sen->enable)){
            switch(m_practiceType.axisType){
            case ATP_single:
                if(!m_axisY)return;
                if(m_axisY->max()<sen->max)m_axisY->setMax(sen->max*1.1);
                if(m_axisY->min()>sen->min)m_axisY->setMin(sen->min*1.1);
                break;
            case ATP_multiple:
                if(!sen->axisY)return;
                if(sen->axisY->max()<sen->max)sen->axisY->setMax(sen->max*1.1);
                if(sen->axisY->min()>sen->min)sen->axisY->setMin(sen->min*1.1);
                break;
            };
        }
    }
}

void FrmModulePracticeCar::clearChart()
{
    ui->lineEdit_playTime->setStyleSheet("QLineEdit{\
                                         color: rgb(3, 87, 123);\
                                         background-color: rgb(255, 255, 255);\
                                         border: none;\
                                         border-style: outset;\
                                         border-width: 0px;\
                                         border-radius: 10px;\
                                         }");
    ui->lineEdit_playTime->setText(QString::number(m_practiceType.timeOut));
    m_practiceType.numberOf = 0;
    if(!m_chart)return;
    foreach (auto var, m_practiceType.sensorList) {
        this->removeChart(var);
    }
    if(m_axisY){
        auto _ind = m_chart->axes(Qt::Vertical).indexOf(m_axisY);
        if(_ind>=0)m_chart->removeAxis(m_axisY);
    }
    foreach (auto var, m_chart->axes(Qt::Vertical)) {
        m_chart->removeAxis(var);
    }
    m_chart->removeAllSeries();
    this->initChart();
    m_axisX->setRange(0,0.1);

}

void FrmModulePracticeCar::setSelectPoint(QLineSeries *series, QPointF p)
{
qDebug()<<series->name()<<"X:"<<p.x()<<"  "<<"Y:"<<p.y();
}
void FrmModulePracticeCar::updateSizeWindow(int del_w, int del_h)
{
    auto _w = m_widowSizeBase;
    ui->frame_header->setGeometry(_w.frameHeader.x(),_w.frameHeader.y(),_w.frameHeader.width()+del_w,_w.frameHeader.height());
    ui->frame_car01->setGeometry(_w.frameCar01.x(),_w.frameCar01.y(),_w.frameCar01.width(),_w.frameCar01.height()+del_h);
    ui->frame_car02->setGeometry(_w.frameCar02.x()+del_w,_w.frameCar02.y(),_w.frameCar02.width()+del_w,_w.frameCar02.height()+del_h);
    ui->frame_chart->setGeometry(_w.frameChart.x(),_w.frameChart.y(),_w.frameChart.width()+del_w,_w.frameChart.height()+del_h);
    ui->frame_toolTrack->setGeometry(_w.frameTrack.x(),_w.frameTrack.y(),_w.frameTrack.width(),_w.frameTrack.height()+del_h);
    ui->graphicsViewChart->resize(m_widowSizeBase.graphicView.width()+del_w,m_widowSizeBase.graphicView.height()+del_h);
    ui->frame_play->setGeometry(_w.framePlay.x()+del_w,_w.framePlay.y()+del_h,_w.framePlay.width(),_w.framePlay.height());
    ui->frame_toolSetup->setGeometry(_w.frameSetup.x(),_w.frameSetup.y()+del_h,_w.frameSetup.width()+del_w,_w.frameSetup.height());
    ui->frame_practiceTime->setGeometry(_w.framePracticeTime.x()+del_w,_w.framePracticeTime.y(),_w.framePracticeTime.width(),_w.framePracticeTime.height());
    ui->frame_practiceCondition->setGeometry(_w.frameCondition.x(),_w.frameCondition.y()+del_h,_w.frameCondition.width()+del_w,_w.frameCondition.height());
    ui->plainTextEdit_info->setGeometry(_w.plantextInfo.x(),_w.plantextInfo.y(),_w.plantextInfo.width()+del_w,_w.plantextInfo.height());

    m_containerTable->setGeometry(m_widowSizeBase.dataWidget.x()+del_w,m_widowSizeBase.dataWidget.y(),m_widowSizeBase.dataWidget.width(),m_widowSizeBase.dataWidget.height()+del_h);
    ui->tableWidget_dataEvaluate->setGeometry(m_widowSizeBase.dataEvaluate.x()+del_w,m_widowSizeBase.dataEvaluate.y()+del_h,m_widowSizeBase.dataEvaluate.width(),m_widowSizeBase.dataEvaluate.height());
    //chart
    if(m_echartView)m_echartView->resize(ui->graphicsViewChart->size());
}
void FrmModulePracticeCar::getSizeWindow()
{
    m_widowSizeBase.window = this->size();
    m_widowSizeBase.graphicView = ui->graphicsViewChart->geometry();
    m_widowSizeBase.frameChart = ui->frame_chart->geometry();
    m_widowSizeBase.frameHeader = ui->frame_header->geometry();
    m_widowSizeBase.frameCar01 = ui->frame_car01->geometry();
    m_widowSizeBase.frameCar02 = ui->frame_car02->geometry();
    m_widowSizeBase.frameTrack = ui->frame_toolTrack->geometry();
    m_widowSizeBase.framePlay = ui->frame_play->geometry();
    m_widowSizeBase.frameSetup = ui->frame_toolSetup->geometry();
    m_widowSizeBase.framePracticeTime = ui->frame_practiceTime->geometry();
    m_widowSizeBase.frameCondition = ui->frame_practiceCondition->geometry();
    m_widowSizeBase.plantextInfo = ui->plainTextEdit_info->geometry();

    if(m_containerTable)m_widowSizeBase.dataWidget = m_containerTable->geometry();
    m_widowSizeBase.dataEvaluate = ui->tableWidget_dataEvaluate->geometry();
}

void FrmModulePracticeCar::setValue()
{
    //value
    if(!m_emodule)return;
    m_parameter.setRequest(m_emodule->requestUnit());
    if(m_widCar_01)m_widCar_01->updateCar(m_ecarUnit1,ECarDataUnit::CAR_NUM_01);
    if(m_widCar_02)m_widCar_02->updateCar(m_ecarUnit2,ECarDataUnit::CAR_NUM_02);
    if(m_ecarPractice)m_ecarPractice->updateCar(m_ecarUnit1,m_ecarUnit2);
    //resize axis-Y
    if(m_playStatus == PlayTypeDef::PTD_PLAY)this->resizeAxisXY();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////Table

void FrmModulePracticeCar::refreshToolTable()
{
    //tableWidget
   // this->getSizeWindow();
    if(m_toolTableType.widgetTableBlink){
        m_containerTable->show();
        ui->tableWidget_dataEvaluate->show();
        ui->graphicsViewChart->resize(m_widowSizeBase.dataWidget.x() - ui->graphicsViewChart->geometry().x()-1,ui->graphicsViewChart->size().height());
        }
        else {
        m_containerTable->hide();
        ui->tableWidget_dataEvaluate->hide();
        //ui->graphicsViewChart->resize(ui->frame_car02->geometry().x() - ui->graphicsViewChart->geometry().x(),ui->graphicsViewChart->size().height());
        ui->graphicsViewChart->resize(m_widowSizeBase.dataWidget.width()+m_widowSizeBase.dataWidget.x()-ui->graphicsViewChart->geometry().x(),ui->graphicsViewChart->geometry().height());
        }
    ui->tableWidget_dataEvaluate->setGeometry(m_containerTable->geometry().x(),m_containerTable->geometry().y()+m_containerTable->geometry().height(),m_containerTable->geometry().width(),m_widowSizeBase.dataEvaluate.height());
    this->getSizeWindow();
    //chart
    if(m_echartView)m_echartView->resize(ui->graphicsViewChart->size());
}

void FrmModulePracticeCar::initTable()
{
    ui->tableWidget_DataTable->setColumnWidth(0,100);
    ui->tableWidget_dataEvaluate->setColumnWidth(0,100);
    m_containerTable = new EContainer(ui->frame_chart, QPoint(ui->tableWidget_DataTable->geometry().x(),ui->tableWidget_DataTable->geometry().y()), ui->tableWidget_DataTable);
    m_containerTable->setModeEnable(EContainer::RESIZEL);
    m_containerTable->setMoveEnable(false);
    QObject::connect(m_containerTable,&EContainer::newGeometry,this,[this](){
       this->refreshToolTable();
    });
    QObject::connect(ui->tableWidget_DataTable->horizontalScrollBar(),SIGNAL(valueChanged(int)),ui->tableWidget_dataEvaluate->horizontalScrollBar(),SLOT(setValue(int)));
    QObject::connect(ui->tableWidget_dataEvaluate->horizontalScrollBar(),SIGNAL(valueChanged(int)),ui->tableWidget_DataTable->horizontalScrollBar(),SLOT(setValue(int)));

}

void FrmModulePracticeCar::updateTable()
{
    if(!m_ecarPractice)return;
    //ECarPractice::ECAR_PracticeUnit pracUnit = m_ecarPractice->practiceUnit();
    for(int i=0;i<m_listSeries.count();i++){
        this->updataTableSeries(m_listSeries.at(i));
        this->updateEvaluate(m_listSeries.at(i),i);
    }
}

void FrmModulePracticeCar::updataTableSeries(QLineSeries *series)
{
    if(!series)return;
    auto point = series->points();
    if(point.count()<1)return;
    int _column = m_listSeries.indexOf(series);
    if(_column<0)return;
    for(int i=0;i<point.count();i++){
        auto p = point.at(i);
        //update table
          m_tableItem = new QTableWidgetItem(QString::number(p.y()));
          m_tableItem->setBackground(series->pen().color());
          m_tableItem->setForeground(QColor(Qt::white));
          this->setTableRow(i,_column+1,m_tableItem);
          m_tableItem = new QTableWidgetItem(QString::number(p.x()));
          this->setTableRow(i,0,m_tableItem);
    }
}

void FrmModulePracticeCar::appendTableColumn(QLineSeries *series)
{
    m_tableItem = new QTableWidgetItem(series->name());
    m_tableItem->setBackground(series->pen().color());
    m_tableItem->setForeground(QColor(Qt::white));
    m_tableItem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget_DataTable->setColumnCount(ui->tableWidget_DataTable->columnCount()+1);
    ui->tableWidget_DataTable->setHorizontalHeaderItem(ui->tableWidget_DataTable->columnCount()-1,m_tableItem);
    int _w = QFontMetrics(ui->tableWidget_DataTable->horizontalHeader()->fontMetrics()).horizontalAdvance(m_tableItem->text());
    ui->tableWidget_DataTable->setColumnWidth(ui->tableWidget_DataTable->columnCount()-1,_w+10);
    //data Evaluate
    m_tableItem = new QTableWidgetItem(series->name());
    m_tableItem->setBackground(series->pen().color());
    m_tableItem->setForeground(QColor(Qt::white));
    m_tableItem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget_dataEvaluate->setColumnCount(ui->tableWidget_dataEvaluate->columnCount()+1);
    ui->tableWidget_dataEvaluate->setHorizontalHeaderItem(ui->tableWidget_dataEvaluate->columnCount()-1,m_tableItem);
    ui->tableWidget_dataEvaluate->setColumnWidth(ui->tableWidget_dataEvaluate->columnCount()-1,_w+10);
}

void FrmModulePracticeCar::removeTableColumn(int column)
{
    if(column<ui->tableWidget_dataEvaluate->columnCount())ui->tableWidget_dataEvaluate->removeColumn(column);
    if(column<ui->tableWidget_DataTable->columnCount())ui->tableWidget_DataTable->removeColumn(column);
}

void FrmModulePracticeCar::setTableRow(int row, int column, QTableWidgetItem *item)
{
    if(column>=ui->tableWidget_DataTable->columnCount())return;
    if(row >= ui->tableWidget_DataTable->rowCount())ui->tableWidget_DataTable->setRowCount(row+1);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget_DataTable->setItem(row,column,item);
}

void FrmModulePracticeCar::setSelectTable(QLineSeries *series, QPointF p)
{
    int index = 0;
if(series->count()>1){
    for(int i=1;i<series->count();i++){
        if((p.x()>series->at(i-1).x())&&((p.x()<series->at(i).x()))){
                qreal _lo = p.x()-series->at(i-1).x();
                qreal _hi = series->at(i).x()-p.x();
                if(_lo<_hi)index = i-1;
                    else index = i;
            }
        }
    }
//select row on tableWidget
int _column = m_listSeries.indexOf(series);
if(_column<0)return;
auto _item = ui->tableWidget_DataTable->item(index,_column+1);
if(!_item)return;
_item->setSelected(true);
ui->tableWidget_DataTable->setCurrentItem(_item);
}

void FrmModulePracticeCar::removeTableRow()
{
    ui->tableWidget_DataTable->setRowCount(0);
}

void FrmModulePracticeCar::updateEvaluate(QLineSeries *sen,int index)
{
    double _max=-99999999,_min=99999999,_avr=0,_sum=0,_var=0,_std=0,_sqr=0;
    if(!sen)return;
    auto _points = sen->points();
    if(_points.count()<1)return;
    for(int i=0;i<_points.count();i++){
        auto _val = _points.at(i).y();
        if(_val>_max)_max=_val;
        if(_val<_min)_min=_val;
        _sum += _val;
    }
    _avr = _sum/QVariant(_points.count()).toDouble();
    foreach (auto p,_points) {
        _sqr += pow((p.y()-_avr),2);
        }
    _var = _sqr/QVariant(_points.count()).toDouble();
    _std = pow(_var,0.5);

    if(index>=ui->tableWidget_dataEvaluate->columnCount()-1)return;

    //number of samples
    this->setEvaluateTableRow(0,index+1,QString::number(_points.count(),'f',0));
    //maximum
    this->setEvaluateTableRow(1,index+1,QString::number(_max));
    //minimum
    this->setEvaluateTableRow(2,index+1,QString::number(_min));
    //average
    this->setEvaluateTableRow(3,index+1,QString::number(_avr,'f',3));
    //variance
    this->setEvaluateTableRow(4,index+1,QString::number(_var,'f',5));
    //standard deviation
    this->setEvaluateTableRow(5,index+1,QString::number(_std,'f',5));

}

void FrmModulePracticeCar::setEvaluateTableRow(int row, int column, QString val)
{
    auto _it = ui->tableWidget_dataEvaluate->item(row,column);
    if(_it){
        _it->setText(val);
        }
         else {
            m_tableItem = new QTableWidgetItem(val);
            m_tableItem->setTextAlignment(Qt::AlignHCenter);
            ui->tableWidget_dataEvaluate->setItem(row,column,m_tableItem);
    }
}

void FrmModulePracticeCar::setPlay(PlayTypeDef play)
{
    switch(play){
    case PTD_PAUSE:
        this->processPause();
        break;
    case PTD_PLAY:
        this->processSetup();
        break;
    case PTD_CLEAR:
        this->processClear();
        m_playStatus = PTD_CLEAR;
        break;
    }
}
void FrmModulePracticeCar::on_setPlay(bool play,EConditionUnit::ConditionData cond,QString error)
{
    if(m_playStatus!=PlayTypeDef::PTD_PLAY)return;
    if(play){
        if(m_prcPlay==PRC_COND_START){
            m_prcPlay=ProcessPlay_TypeDef::PRC_COND_STOP;
            ECarDataUnit _ecar;
            ui->plainTextEdit_info->appendPlainText("Gặp điều kiện \"" + error +EConditionUnit::getCompareText(cond.compare)+" "+ QString::number(cond.value)+"\".");
        }
    }
    else {
        if(m_prcPlay==PRC_COND_STOP){
            this->processPause();
            ECarDataUnit _ecar;
            ui->plainTextEdit_info->appendPlainText("Gặp điều kiện \"" + error +EConditionUnit::getCompareText(cond.compare)+" "+ QString::number(cond.value)+"\".");
        }
    }
}
bool FrmModulePracticeCar::checkPracticePara()
{
    if(!this->getTimePractice())return false;
    return true;
}

bool FrmModulePracticeCar::checkCarConnect()
{
if(m_ecarUnit1->connect())return true;
if(m_ecarUnit2->connect())return true;
QMessageBox  msg;
msg.setStandardButtons(QMessageBox::Ok);
msg.setWindowTitle(this->windowTitle());
msg.setParent(nullptr);
msg.setIcon(QMessageBox::Warning);
msg.setWindowIcon(this->windowIcon());
msg.setText("Có lỗi xảy ra!\n  - \"Không có xe nào kết nối.");
msg.exec();
return false;
}

bool FrmModulePracticeCar::checkNoConditionStart()
{
int _car1=0,_car2=0;
EConditionUnit::ConditionUnit_TypeDef _cond1,_cond2;
if(m_ecarUnit1){
    _cond1=m_ecarUnit1->conditionStart();
    _car1 = (int)_cond1.time.compare+(int)_cond1.distance.compare+(int)_cond1.speed.compare+(int)_cond1.acceleration.compare+(int)_cond1.force.compare+(int)_cond1.axisX.compare+(int)_cond1.axisY.compare+(int)_cond1.axisZ.compare;
    if(!m_ecarUnit1->connect())_car1=0;
}
if(m_ecarUnit2){
    _cond2=m_ecarUnit2->conditionStart();
    _car2 = (int)_cond2.time.compare+(int)_cond2.distance.compare+(int)_cond2.speed.compare+(int)_cond2.acceleration.compare+(int)_cond2.force.compare+(int)_cond2.axisX.compare+(int)_cond2.axisY.compare+(int)_cond2.axisZ.compare;
    if(!m_ecarUnit2->connect())_car2=0;
}
if((_car1+_car2)>0)return false;
return true;
}

void FrmModulePracticeCar::setControl(uint8_t cmd_car1,uint8_t cmd_car2, uint32_t value_car1, uint32_t value_car2)
{
if(!m_emodule)return;
QVector<uint16_t> _values;
_values.append((value_car1>>16)&0xFFFF);
_values.append(value_car1&0xFFFF);
_values.append((value_car2>>16)&0xFFFF);
_values.append(value_car2&0xFFFF);
_values.append(((uint16_t)cmd_car1<<8)|cmd_car2);
m_emodule->setRequestWrite(EMod203Parameter::CONTROL_HI_1,_values);
}




void FrmModulePracticeCar::newFileCondition()
{
    m_fileCondition = this->getFileCondition();
    if(m_ecarFile.saveAsFileCondition(m_fileCondition)){
        m_listFileCondition.append(m_fileCondition);
        ui->comboBox_fileCondition->addItem(m_fileCondition.name);
        ui->comboBox_fileCondition->setCurrentIndex(ui->comboBox_fileCondition->count()-1);
    }
}
ECarFileCondition::FDataCondition_TypeDef FrmModulePracticeCar::getFileCondition()
{
    ECarFileCondition::FDataCondition_TypeDef _cond;
    _cond.name = ui->comboBox_fileCondition->currentText();
    if(_cond.name=="")_cond.name= "không tên";
    _cond.path = m_fileCondition.path;
    _cond.zero.distance = ui->checkBox_zeroDistance->checkState();
    _cond.zero.force = ui->checkBox_zeroForce->checkState();
    _cond.zero.axis = ui->checkBox_zeroAxis->checkState();
    if(m_ecarUnit1){
        _cond.car1.conditionStart = m_ecarUnit1->conditionStart();
        _cond.car1.conditionStop = m_ecarUnit1->conditionStop();
    }
    if(m_ecarUnit2){
        _cond.car2.conditionStart = m_ecarUnit2->conditionStart();
        _cond.car2.conditionStop = m_ecarUnit2->conditionStop();
    }
    return _cond;
}

void FrmModulePracticeCar::updateFileCondition(ECarFileCondition::FDataCondition_TypeDef cond)
{
    if(m_ecarUnit1){
        m_ecarUnit1->setConditionStart(cond.car1.conditionStart);
        m_ecarUnit1->setConditionStop(cond.car1.conditionStop);
    }
    if(m_ecarUnit2){
        m_ecarUnit2->setConditionStart(cond.car2.conditionStart);
        m_ecarUnit2->setConditionStop(cond.car2.conditionStop);
    }
    this->on_setCondition(EConditionUnit::CDT_START);
    this->on_setCondition(EConditionUnit::CDT_STOP);
    m_fileCondition = cond;
}
void FrmModulePracticeCar::openFileCondition()
{
    bool ok=false;
    m_fileCondition = m_ecarFile.openFileCondition(&ok);
    if(ok){
       m_listFileCondition.append(m_fileCondition);
       ui->comboBox_fileCondition->addItem(m_fileCondition.name);
       ui->comboBox_fileCondition->setCurrentIndex(ui->comboBox_fileCondition->count()-1);
       this->updateFileCondition(m_fileCondition);
    }
}

void FrmModulePracticeCar::saveFileCondition()
{
    m_fileCondition = this->getFileCondition();
    m_ecarFile.saveFileCondition(m_fileCondition);
}

void FrmModulePracticeCar::openFilePractice()
{
bool ok=false;
auto _data = m_ecarFile.openFilePractice(&ok);
if(!ok){
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setIcon(QMessageBox::Warning);
    msg.setWindowIcon(this->windowIcon());
    msg.setText("Có lỗi xảy ra!\n  - Tệp dữ liệu bị lỗi!");
    msg.exec();
    return ;
}
this->setPlay(PlayTypeDef::PTD_CLEAR);
m_practiceType.axisType = (AxisType)_data.axisType;
this->setAxisType(m_practiceType.axisType);
m_practiceType.timeOut = _data.timeOut;
for(int i=0;i<_data.splines.count();i++){
    auto _sp = _data.splines.at(i);
    if(i<m_practiceType.sensorList.count()){
        m_practiceType.sensorList.at(i)->enable = _sp.enable;
        if(i<m_practiceType.cbxList.count())m_practiceType.cbxList.at(i)->setChecked(_sp.enable);
        m_practiceType.sensorList.at(i)->line->replace(_sp.points);
        }
    }
this->getMinMaxAxis();
this->updateChart();
if(m_axisX)m_axisX->setRange(_data.axisX_min,_data.axisX_max);
if(m_axisY)m_axisY->setRange(_data.axisY_min,_data.axisY_max);
this->resizeAllAxis();
}

void FrmModulePracticeCar::saveFilePractice()
{
ECarFilePractice::FDataPractice_TypeDef _data;
_data.splines.clear();
for(int i=0;i<m_practiceType.sensorList.count();i++){
    auto _sen = m_practiceType.sensorList.at(i);
    ECarFilePractice::FSpline_TypeDef _spline;
    _spline.enable = _sen->enable;
    _spline.axis_max = _sen->axisY->max();
    _spline.axis_min = _sen->axisY->min();
    _spline.points = _sen->line->points();
    _data.splines.append(_spline);
}
_data.axisType = (int)m_practiceType.axisType;
if(m_axisX){
    _data.axisX_min = m_axisX->min();
    _data.axisX_max = m_axisX->max();
    }
if(m_axisY){
    _data.axisY_min = m_axisY->min();
    _data.axisY_max = m_axisY->max();
    }
_data.timeOut = m_practiceType.timeOut;
m_ecarFile.saveFilePractice(_data);
}

void FrmModulePracticeCar::lowPassFilter(double *output, double input, double dt, double rc)
{
    double _output = *output;
    // Return RC low-pass filter output samples, given input samples,
    // time interval dt, and time constant RC
    /*
     function lowpass(real[1..n] x, real dt, real RC)
        var real[1..n] y
        var real α := dt / (RC + dt)
        y[1] := α * x[1]
        for i from 2 to n
            y[i] := α * x[i] + (1-α) * y[i-1]
        return y
     */
    double _alpha = dt/(rc+dt);
    _output = _output  - (_alpha*(_output-input));
    *output = _output;
}

bool FrmModulePracticeCar::checkZero()
{
    static int _timeTick=0;
    _timeTick++;
    switch(m_prcZero){
    case ZERO_IDLE:
        _timeTick=0;
        m_prcZero = ZERO_DISTANCE;
        break;
    case ZERO_DISTANCE:
        if(!m_zeroData.distance){
            _timeTick=0;
            m_prcZero = ZERO_FORCE;
            break;
        }
        if(_timeTick>100){
            this->setControl(ECarDataUnit::CTRL_ZERO_DISTANCE,ECarDataUnit::CTRL_ZERO_DISTANCE,0,0);
            ui->plainTextEdit_info->appendPlainText("Thiết lập lại (zero) khoảng cách.");
            _timeTick=0;
            m_prcZero = ZERO_FORCE;
        }
        break;
    case ZERO_FORCE:
        if(!m_zeroData.force){
            _timeTick=0;
            m_prcZero = ZERO_AXIS;
            break;
        }
        if(_timeTick>100){
            this->setControl(ECarDataUnit::CTRL_ZERO_FORCE,ECarDataUnit::CTRL_ZERO_FORCE,0,0);
            ui->plainTextEdit_info->appendPlainText("Thiết lập lại (zero) cảm biến lực.");
            _timeTick=0;
            m_prcZero = ZERO_AXIS;
        }
        break;
    case ZERO_AXIS:
        _timeTick=0;
        m_prcZero = ZERO_FINISH;
        break;
    case ZERO_FINISH:
        if(_timeTick>300){
            m_prcZero = ZERO_IDLE;
            return true;
        }
        break;
    }

return false;
}

bool FrmModulePracticeCar::processSetup()
{
if(!this->checkPracticePara())return false;
if(!this->checkCarConnect())return false;
ui->toolButton_toolPlay->hide();
ui->toolButton_toolPause->show();
ui->toolButton_toolClear->setEnabled(false);
m_practiceType.numberOf++;
this->processClear();
this->updateChart();
if(m_axisX){
    m_axisX->setRange(0,m_practiceType.timeOut);
}
ui->lineEdit_playTime->setStyleSheet("QLineEdit{\
                                     color: rgb(170, 0, 0);\
                                     background-color: rgb(255, 255, 255);\
                                     border: none;\
                                     border-style: outset;\
                                     border-width: 0px;\
                                     border-radius: 10px;\
                                     }");
m_practiceType.timeTick = 0;    //practice time
m_prcPlay=PRC_IDLE;
m_playStatus = PTD_PLAY;
return true;
}

bool FrmModulePracticeCar::processPlay()
{
if(m_playStatus != PlayTypeDef::PTD_PLAY)return true;
m_practiceType.timeTick += 0.001;
if(m_practiceType.timeOut>m_practiceType.timeTick)this->updateClock(m_practiceType.timeOut - m_practiceType.timeTick);
if(m_practiceType.timeTick>m_practiceType.timeOut){
    ui->plainTextEdit_info->appendPlainText("Hết thời gian thực hành!");
    this->processPause();
}
switch(m_prcPlay){
    case PRC_IDLE:
        m_prcZero = ZERO_IDLE;
        m_prcPlay = PRC_ZERO;
        ui->plainTextEdit_info->clear();
        break;
    case PRC_ZERO:
        if(this->checkZero())m_prcPlay = PRC_SETUP;
        break;
    case PRC_SETUP:
        if(checkNoConditionStart()){
            ui->plainTextEdit_info->appendPlainText("Không có điều kiện bắt đầu.");
            ui->plainTextEdit_info->appendPlainText("Kiểm tra điều kiện kết thúc...");
            if(m_ecarPractice)m_ecarPractice->setNoCondition(m_practiceType.timeOut);
            m_prcPlay = PRC_COND_STOP;

        }else{
            ui->plainTextEdit_info->appendPlainText("Kiểm tra điều kiện bắt đầu...");
            m_prcPlay = PRC_COND_START;
            if(m_ecarPractice)m_ecarPractice->setUpdateTimeLine(true);
        }
        break;
    case PRC_COND_START:
        break;
    case PRC_COND_STOP:
        break;
    case PRC_COND_FINISH:
        return false;
}

return true;
}

void FrmModulePracticeCar::processPause()
{
    if(m_ecarPractice)m_ecarPractice->setUpdateTimeLine(false);
    ui->plainTextEdit_info->appendPlainText("Kết thúc thực hành.");
    m_prcPlay = PRC_IDLE;
    ui->lineEdit_playTime->setStyleSheet("QLineEdit{\
                                         color: rgb(3, 87, 123);\
                                         background-color: rgb(255, 255, 255);\
                                         border: none;\
                                         border-style: outset;\
                                         border-width: 0px;\
                                         border-radius: 10px;\
                                         }");
    ui->lineEdit_playTime->setText(QString::number(m_practiceType.timeOut));
    ui->toolButton_toolPause->hide();
    ui->toolButton_toolPlay->show();
    ui->toolButton_toolClear->setEnabled(true);
    m_playStatus = PTD_PAUSE;
    //focus char
    if(m_chart){
        qreal _xMax = 0;
        if(m_ecarPractice)_xMax = m_ecarPractice->time();
        if(m_axisX)m_axisX->setMax(_xMax);

        //get min_max for chart
        this->getMinMaxAxis();
    }
    //Update Table
    updateTable();

}

void FrmModulePracticeCar::processClear()
{
    if(m_ecarPractice)m_ecarPractice->clear();
    m_practiceType.numberOf=0;
    this->clearChart();
    //table
    this->removeTableRow();
}

bool FrmModulePracticeCar::getTimePractice()
{
    bool ok=false;
    double val = QString(ui->lineEdit_playTime->text()).toDouble(&ok);
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setIcon(QMessageBox::Warning);
    msg.setWindowIcon(this->windowIcon());
    msg.setText("Có lỗi xảy ra!\n  - \"Thời gian thực hành\" phải là một số thực không âm.");
    if(!ok||val<0){
        ui->lineEdit_playTime->setText(QString::number(10));
        msg.exec();
        return false;
    }
    m_practiceType.timeOut = val;
    return true;
}
void FrmModulePracticeCar::updateClock(qreal val)
{
    int _h,_m,_s,_lo;
    _s = (int)val;
    _h = _s/3600;
    _m = (_s%3600)/60;
    _lo = (val-(qreal)_s)*10;
    _s = _s - (_h*3600) - (_m*60);
    QString str="";
    str += QString("%1").arg(_h, 2, 10, QLatin1Char( '0' ))+":";
    str += QString("%1").arg(_m, 2, 10, QLatin1Char( '0' ))+":";
    str += QString("%1").arg(_s, 2, 10, QLatin1Char( '0' ))+".";
    str += QString("%1").arg(_lo, 1, 10, QLatin1Char( '0' ));
    ui->lineEdit_playTime->setText(str);
}
void FrmModulePracticeCar::updateClockWise(qreal val)
{
    int _h,_m,_s;
    _s = (int)val;
    _h = _s/3600;
    _m = (_s%3600)/60;
    _s = _s - (_h*3600) - (_m*60);
    QString str="";
    str += QString("%1").arg(_h, 2, 10, QLatin1Char( '0' ))+":";
    str += QString("%1").arg(_m, 2, 10, QLatin1Char( '0' ))+":";
    str += QString("%1").arg(_s, 2, 10, QLatin1Char( '0' ));
    ui->lineEdit_playTime->setText(str);
}

void FrmModulePracticeCar::on_toolButton_toolPlay_clicked()
{
this->setPlay(PlayTypeDef::PTD_PLAY);
}


void FrmModulePracticeCar::on_toolButton_toolPause_clicked()
{
    this->setPlay(PlayTypeDef::PTD_PAUSE);
}


void FrmModulePracticeCar::on_toolButton_toolClear_clicked()
{
    this->setPlay(PlayTypeDef::PTD_CLEAR);
}


void FrmModulePracticeCar::on_lineEdit_playTime_editingFinished()
{
    this->getTimePractice();
}




void FrmModulePracticeCar::on_toolButton_toolHideSeries_clicked()
{
    QMenu *m_menuHideSeries = new QMenu(this);
    foreach (auto var, m_practiceType.sensorList) {
        if(!var->enable)continue;
        auto _action = new QAction(var->line->name(), this);
        _action->setCheckable(true);
        _action->setChecked(var->line->isVisible());
        QObject::connect(_action,&QAction::triggered,this,[_action,var](){
                if(_action->isChecked()){
                    var->line->show();
                    var->axisY->show();
                }
                else {
                    var->line->hide();
                    var->axisY->hide();
                }
            });
        m_menuHideSeries->addAction(_action);
    }
    m_menuHideSeries->popup(ui->toolButton_toolHideSeries->mapToGlobal(QPoint(ui->toolButton_toolHideSeries->width(),0)));
}


void FrmModulePracticeCar::on_toolButton_toolCrosshair_clicked()
{
    this->updateTrackLine(EChartView::ETL_CROSSHAIR);
}


void FrmModulePracticeCar::on_toolButton_toolCallout_clicked()
{
    this->updateTrackLine(EChartView::ETL_CALLOUT);
}


void FrmModulePracticeCar::on_toolButton_toolMultiY_clicked()
{
    this->setAxisType(AxisType::ATP_multiple);
}


void FrmModulePracticeCar::on_toolButton_toolSingleY_clicked()
{
    this->setAxisType(AxisType::ATP_single);
}


void FrmModulePracticeCar::on_toolButton_conditionStart_clicked()
{
    if(m_frmCondition){
        m_frmCondition->deleteLater();
        m_frmCondition = nullptr;
    }
    m_frmCondition = new FrmModuleCarCondition();
    m_frmCondition->setWindowTitle(QString("Cài đặt điều kiện"));
    m_frmCondition->setWindowIcon(this->windowIcon());
    m_frmCondition->setCar(m_ecarUnit1,m_ecarUnit2,EConditionUnit::CDT_START);
    QObject::connect(m_frmCondition,&FrmModuleCarCondition::replySetCondition,this,&FrmModulePracticeCar::on_setCondition);
    m_frmCondition->show();
}


void FrmModulePracticeCar::on_toolButton_conditionStop_clicked()
{
    if(m_frmCondition){
        m_frmCondition->deleteLater();
        m_frmCondition = nullptr;
    }
    m_frmCondition = new FrmModuleCarCondition();
    m_frmCondition->setWindowTitle(QString("Cài đặt điều kiện"));
    m_frmCondition->setWindowIcon(this->windowIcon());
    m_frmCondition->setCar(m_ecarUnit1,m_ecarUnit2,EConditionUnit::CDT_STOP);
    QObject::connect(m_frmCondition,&FrmModuleCarCondition::replySetCondition,this,&FrmModulePracticeCar::on_setCondition);
    m_frmCondition->show();
}


void FrmModulePracticeCar::on_checkBox_zeroDistance_toggled(bool checked)
{
    m_zeroData.distance = checked;
}


void FrmModulePracticeCar::on_checkBox_zeroForce_toggled(bool checked)
{
    m_zeroData.force = checked;
}


void FrmModulePracticeCar::on_checkBox_zeroAxis_toggled(bool checked)
{
    m_zeroData.axis = checked;
}


void FrmModulePracticeCar::on_toolButton_openFileCondition_clicked()
{
this->openFileCondition();
}


void FrmModulePracticeCar::on_toolButton_exportFileNew_clicked()
{
    this->newFileCondition();
}


void FrmModulePracticeCar::on_comboBox_fileCondition_currentIndexChanged(int index)
{
    if(index<this->m_listFileCondition.count())this->updateFileCondition(m_listFileCondition.at(index));
}


void FrmModulePracticeCar::on_spinBox_linePen_valueChanged(int arg1)
{
    if(m_ecarPractice)m_ecarPractice->setPen(arg1);
}


void FrmModulePracticeCar::on_spinBox_sampleTimeSpeed_valueChanged(int arg1)
{
    if(m_ecarUnit1)m_ecarUnit1->setSpeedSampleTime(arg1);
    if(m_ecarUnit2)m_ecarUnit2->setSpeedSampleTime(arg1);
}


void FrmModulePracticeCar::on_toolButton_saveFileCondition_clicked()
{
    this->saveFileCondition();
}

void FrmModulePracticeCar::on_toolButton_openFile_clicked()
{
    this->openFilePractice();
}


void FrmModulePracticeCar::on_toolButton_saveFile_clicked()
{
    this->saveFilePractice();
}


void FrmModulePracticeCar::on_toolButton_toolTable_clicked()
{
    m_toolTableType.widgetTableBlink = !m_toolTableType.widgetTableBlink;
    this->refreshToolTable();
}


void FrmModulePracticeCar::on_checkBox_Car1_lineSpeed_clicked()
{

}

