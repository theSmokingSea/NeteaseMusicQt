//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_MAINFRM_H
#define DEVPROJECTSHUB_MAINFRM_H

#include <QMainWindow>

#include "NeteaseGuiGlobal.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainFrm;
}
QT_END_NAMESPACE

class NeteaseGuiExport MainFrm : public QMainWindow {
    Q_OBJECT

public:
    explicit MainFrm(QWidget* parent = nullptr);

    ~MainFrm() override;

private:
    Ui::MainFrm* ui;
};

#endif // DEVPROJECTSHUB_MAINFRM_H
