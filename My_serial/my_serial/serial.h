#ifndef SERIAL_H
#define SERIAL_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
class Serial : public QWidget
{
    Q_OBJECT
public:
    explicit Serial(QWidget *parent = nullptr);
    QList<QSerialPortInfo>  Get_Serial_Port();

signals:

};

#endif // SERIAL_H
