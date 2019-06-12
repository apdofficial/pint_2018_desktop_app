#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QtMqtt/QMqttClient>
#include "chart.h"
#include <QtCharts/QChartView>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonQuit_clicked();
    void on_buttonSubscribe_clicked();

    void on_lineEditTopic_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QMqttClient *m_client;
    Chart *chart;
    QChartView *chartView;

};

#endif // MAINWINDOW_H
