#include <Include/mainwindow.h>
#include <QApplication>
#include <GL/glut.h>

int main(int argc, char *argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE | GLUT_MULTISAMPLE);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
