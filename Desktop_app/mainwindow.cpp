#include "mainwindow.h"
#include "chart.h"
#include "ui_mainwindow.h"
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>
#include <QtCharts/QChartView>
#include <unistd.h>
#include <QSystemTrayIcon>
#include "qstyle.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_client = new QMqttClient(this);

    m_client->setHostname("io.adafruit.com");
    m_client->setPort(1883);
    m_client->setUsername("taniagrama");
    m_client->setPassword("8d020d25903348a6989421722f0a3620");

    chart = new Chart;
    chart->setTitle("Heartbeat rate");
    chart->legend()->hide();
    chart->setAnimationOptions(QChart::AllAnimations);

    chartView= new QChartView(chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    ui->gridLayout_2->addWidget(chartView,0,0);

    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message) {
        if(message.toDouble()<120){
            MainWindow::chart->handleUpdate(message.toDouble());
        } 
        if(message.toInt()==303){
            QMessageBox Msgbox;
            Msgbox.setText("Patient needs help!");
            Msgbox.exec();
        }
    });

    m_client->connectToHost();
    usleep(300000);
}

MainWindow::~MainWindow()
{
    delete ui;
    qApp->quit();
}

void MainWindow::on_buttonQuit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_buttonSubscribe_clicked()
{

    const QString topic = "taniagrama/feeds/patient";
    auto subscription = m_client->subscribe(topic, quint8(0));
    if (!subscription) {
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not subscribe."));
        return;
    }
}

void MainWindow::on_lineEditTopic_textChanged(const QString &arg1)
{

}
