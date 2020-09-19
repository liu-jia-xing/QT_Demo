#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QSerialPort>
#include <QTextBrowser>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QList<QSerialPortInfo>  Get_Serial_Port();
    void refresh_text(QTextEdit *text,QByteArray temp);
private slots:
    void on_get_port_clicked();
    void Read_data();
    void on_open_button_clicked();
    void on_send_button_clicked();
    void on_clear_recieve_buf_clicked();
    void on_r_hex_stateChanged(int arg1);
    void on_clear_send_text_clicked();
    void on_s_hex_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QSerialPort *myserial;
};
#endif // MAINWINDOW_H
