#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
class MainWindow : public QMainWindow,public Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0,Qt::WindowFlags flags = 0);
    ~MainWindow();
private slots:
    void on_capture_button_clicked();
    void on_calibration_button_clicked();
};

#endif // MAINWINDOW_H
