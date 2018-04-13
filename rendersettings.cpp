#include "rendersettings.h"
#include "ui_rendersettings.h"
#include <Include/glwidget.h>
RenderSettings::RenderSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenderSettings)
{
    ui->setupUi(this);
    //connect(ui->DepthTestBox, SIGNAL(stateChanged(int)), , SLOT(startAnimation(int)));
    //connect(ui->DepthTestBox,SIGNAL(stateChanged(int)),this,SLOT(sendEnableDepthTest(int)));

}

RenderSettings::~RenderSettings()
{
    delete ui;
}


void RenderSettings::on_DepthTestBox_stateChanged(int arg1)
{
    emit stateDTChanged(arg1);
}

void RenderSettings::on_MSAABox_stateChanged(int arg1)
{
    emit stateMSAAChanged(arg1);
}

void RenderSettings::on_globLightBox_stateChanged(int arg1)
{
    emit stateGLightChanged(arg1);
}
