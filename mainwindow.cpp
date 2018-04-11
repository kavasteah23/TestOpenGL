#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->startBox, SIGNAL(stateChanged(int)), ui->widget, SLOT(startAnimation(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
