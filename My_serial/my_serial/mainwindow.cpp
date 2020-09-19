#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serial.h"
#include <QDebug>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myserial = new QSerialPort(this);   //分配内存
    connect(myserial,SIGNAL(readyRead()),this,SLOT(Read_data()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/***************************************
* func      :on_get_port_clicked
* describe  :获取可用端口号
* para      :none
* return    :none
* **************************************/
void MainWindow::on_get_port_clicked()
{
    if(ui->open_button->text() == QString("关闭"))
    {
        return;
    }
    ui->port->clear();
    QList<QSerialPortInfo>  port;
    port = this->Get_Serial_Port();             //获取可用端口
    for(int i = 0; i < port.size(); i++)
    {
        ui->port->addItem(port.at(i).portName());        //显示在控件中
    }
}

/***************************************
* func      :on_open_button_clicked
* describe  :打开端口号
* para      :none
* return    :none
* **************************************/
void MainWindow::on_open_button_clicked()
{
     QSerialPort::BaudRate  buadrate;
     QSerialPort::DataBits  databits;
     QSerialPort::Parity    parity;
     QSerialPort::StopBits  stopbit;
     switch( ui->baudrate->currentText().toInt())               //设置波特率
     {
     case 4800:
         buadrate = QSerialPort::Baud4800;
         break;
     case 9600:
         buadrate = QSerialPort::Baud9600;
         break;
     case 38400:
         buadrate = QSerialPort::Baud38400;
         break;
     case 115200:
         buadrate = QSerialPort::Baud115200;
         break;
     default:
         break;
     }
     switch(ui->databit->currentText().toInt())
     {
      case 6:
         databits = QSerialPort::Data6;
         break;
     case 7:
         databits = QSerialPort::Data7;
         break;
     case 8:
         databits = QSerialPort::Data8;
         break;
     default:
         break;
     }
     if(ui->databit->currentText()== "1")
     {
        stopbit = QSerialPort::OneStop;
     }else if(ui->databit->currentText()== "2")
     {
        stopbit = QSerialPort::TwoStop;
     }
     if(ui->checkbit->currentText() == "NONE")
     {
         parity = QSerialPort::NoParity;
     }else if(ui->checkbit->currentText() == "EVEN")
     {
         parity = QSerialPort::EvenParity;
     }else if(ui->checkbit->currentText() == "ODD")
     {
         parity = QSerialPort::OddParity;
     }else if(ui->checkbit->currentText() == "SPACE")
     {
         parity = QSerialPort::SpaceParity;
     }else if(ui->checkbit->currentText() == "MARK")
     {
         parity = QSerialPort::MarkParity;
     }
     if(ui->open_button->text() == QString("打开"))
     {
         /*设置串口属性*/
      myserial->setPortName(ui->port->currentText());
      myserial->setParity(parity);
      myserial->setBaudRate(buadrate);
      myserial->setDataBits(databits);
      myserial->setStopBits(stopbit);
        /*串口打开情况下按键显示关闭*/
      ui->open_button->setText("关闭");
      if(myserial->open(QIODevice::ReadWrite)==false)   //打开串口
      {
          QMessageBox::warning(NULL , "提示", "串口打开失败！");
          return;
      }
      ui->port->setEnabled(false);                      //串口打开情况下,控件使用
      ui->baudrate->setEnabled(false);
      ui->databit->setEnabled(false);
      ui->checkbit->setEnabled(false);
      ui->stopbit->setEnabled(false);
     }
     else
     {
         myserial->close();                             //关闭串口
         ui->open_button->setText("打开");
         ui->port->setEnabled(true);
         ui->baudrate->setEnabled(true);
         ui->databit->setEnabled(true);
         ui->checkbit->setEnabled(true);
         ui->stopbit->setEnabled(true);
     }
}

/***************************************
* func      :Get_Serial_Port
* describe  :获取可用端口号
* para      :none
* return    :QList<QSerialPortInfo>,所有获取的串口信息
* **************************************/
QList<QSerialPortInfo>  MainWindow::Get_Serial_Port()
{
    QList<QSerialPortInfo> ports;
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        qDebug()<<info.portName();
        ports.append(info);
    }
    return ports;
}
/***************************************
* func      :Read_data
* describe  :读取串口接收的数据
* para      :none
* return    :none
* **************************************/
void MainWindow::Read_data()
{
    QByteArray recieve_data = myserial->readAll();

    if(ui->r_hex->isChecked())
    {
        recieve_data = recieve_data.toHex().toUpper() ;
        refresh_text(ui->recieve_edit,recieve_data);

    }
        else
        ui->recieve_edit->insertPlainText(QString(recieve_data));
}
/***************************************
* func      :on_send_button_clicked
* describe  :发送串口数据
* para      :none
* return    :none
* **************************************/
void MainWindow::on_send_button_clicked()
{
    QByteArray data_buf = ui->send_edit->toPlainText().toUtf8();
    if(ui->s_hex->isChecked())
    {
        if(data_buf.isEmpty())
            return;
            int cnt = data_buf.size();  //要发送的数据长度
            char *data = data_buf.data();
            //检查是否有非法字节
            for(int i = 0; i < cnt ; i++)
            {
                if(data[i]>='0' && (data[i]<='9'))
                    continue;
                else if(data[i]>='a' && (data[i]<='f'))
                    continue;
                else if(data[i]>='A' && (data[i]<='F'))
                    continue;
                else if(data[i] == ' ')     //输入为空格
                    continue;
                else
                {
                    QMessageBox::warning(NULL , "提示", "输入非16进制字符！");
                    return;
                }
            }
        data_buf = data_buf.fromHex(data_buf);
    }
    myserial->write(data_buf);
}

void MainWindow::on_clear_recieve_buf_clicked()
{
    ui->recieve_edit->clear();
}

/*将串口数据以HEX形式显示出来，并用空格隔开*/
void MainWindow::refresh_text(QTextEdit *text,QByteArray temp)
{
    QString data;
    int cnt = temp.size();
    for(int i = 0; i < cnt ; i +=2)
    {
        data = temp.mid(i,2);                               //一个字节数据之间显示一个空格
        data += " ";
        text->insertPlainText(data);
    }
}

void MainWindow::on_r_hex_stateChanged(int arg1)
{
    QByteArray data_buf;
    data_buf = ui->recieve_edit->toPlainText().toUtf8();
    ui->recieve_edit->clear();
    //char *data = data_buf.data();
    if(arg1 == 2)   //HEX选中
    {
        data_buf = data_buf.toHex().toUpper() ;
        refresh_text(ui->recieve_edit,data_buf);
    }else if(arg1 == 0)
    {
        ui->recieve_edit->setText(QString(data_buf.fromHex(data_buf)));
    }
}

void MainWindow::on_clear_send_text_clicked()
{
    ui->send_edit->clear();
}

void MainWindow::on_s_hex_stateChanged(int arg1)
{
    QByteArray data_buf;
    data_buf = ui->send_edit->toPlainText().toUtf8();
    ui->send_edit->clear();
    if(arg1 == 2)   //HEX选中
    {
        data_buf = data_buf.toHex().toUpper() ;
        refresh_text(ui->send_edit,data_buf);
    }else if(arg1 == 0)
    {
        ui->send_edit->setText(QString(data_buf.fromHex(data_buf)));
    }
}
