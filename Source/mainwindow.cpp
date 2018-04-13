#include <Include/mainwindow.h>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->startBox, SIGNAL(stateChanged(int)), ui->widget, SLOT(startAnimation(int)));
    //RenderSettings * renderSetts = new RenderSettings;
    //QObject::connect(renderSetts,SIGNAL())
    //QObject::connect(renderSetts,SIGNAL(sendEnableDepthTest(int)),ui->widget,SLOT(enableDepthTest));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSettings_triggered()
{
    connect (&renderSetts,SIGNAL(stateDTChanged(int)),ui->widget,SLOT(enableDepthTest(int)));
    connect (&renderSetts,SIGNAL(stateMSAAChanged(int)),ui->widget,SLOT(enableMSAA(int)));
    connect (&renderSetts,SIGNAL(stateGLightChanged(int)),ui->widget,SLOT(enableGLight(int)));
    connect (&renderSetts,SIGNAL(stateLightChanged(int)),ui->widget,SLOT(enableLight(int)));
    connect (&renderSetts,SIGNAL(stateColMatChanged(int)),ui->widget,SLOT(enableColorMat(int)));
    renderSetts.setModal(true);
    renderSetts.exec();
}

