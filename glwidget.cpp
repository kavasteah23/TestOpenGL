#include "glwidget.h"
#include <GL/glut.h>

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
    //StartTimer = true;
    connect(&timer,SIGNAL(timeout()),this,SLOT(updateGL()));
    //timer.start(16);
}
void GLWidget::initializeGL(){
    glClearColor(.2, .2, .2, 1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
}

void GLWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0.6,0);
    glRotatef(0.5,1,1,1);
    glutSolidCube(0.6);
}

void GLWidget::resizeGL(int width, int height){
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45,(float)width/height,0.01,100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,5, 0,0,0, 0,1,0);
}
void GLWidget::startAnimation(int state){
    if (state==Qt::Unchecked)
        timer.stop();
    else timer.start(16);
}
