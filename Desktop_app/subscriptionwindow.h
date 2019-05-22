#ifndef SUBSCRIPTIONWINDOW_H
#define SUBSCRIPTIONWINDOW_H

#include <QWidget>
#include <QtMqtt/QMqttMessage>
#include <QtMqtt/QMqttSubscription>

namespace Ui {
class SubscriptionWindow;
}

class SubscriptionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SubscriptionWindow(QMqttSubscription *sub, QWidget *parent = nullptr);
    ~SubscriptionWindow();

public slots:
    void updateMessage(const QMqttMessage &msg);
    void updateStatus(QMqttSubscription::SubscriptionState state);
private:
    Ui::SubscriptionWindow *ui;
    QMqttSubscription *m_sub;
};

#endif // SUBSCRIPTIONWINDOW_H
