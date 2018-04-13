#ifndef RENDERSETTINGS_H
#define RENDERSETTINGS_H

#include <QDialog>

namespace Ui {
class RenderSettings;
}

class RenderSettings : public QDialog
{
    Q_OBJECT

public:
    explicit RenderSettings(QWidget *parent = 0);
    ~RenderSettings();

private:
    Ui::RenderSettings *ui;
public slots:

private slots:
    void on_DepthTestBox_stateChanged(int arg1);
    void on_MSAABox_stateChanged(int arg1);

    void on_globLightBox_stateChanged(int arg1);

    void on_lightBox_stateChanged(int arg1);

    void on_colMaterialBox_stateChanged(int arg1);

signals:
    void stateDTChanged(int);
    void stateMSAAChanged(int);
    void stateGLightChanged(int);
    void stateLightChanged(int);
    void stateColMatChanged(int);
};

#endif // RENDERSETTINGS_H
