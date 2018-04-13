#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>
#include <QGLWidget>
#include <GL/glut.h>
#include <QTimer>

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
private:
    QTimer timer;
public slots:
    void startAnimation(int state);
    void enableDepthTest(int state);
    void enableMSAA(int state);
    void enableGLight(int state);
    void enableLight(int state);
    void enableColorMat(int state);
};

#endif // GLWIDGET_H
