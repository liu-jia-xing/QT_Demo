/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextBrowser *recieve_edit;
    QGroupBox *groupBox_2;
    QPushButton *open_button;
    QCheckBox *r_hex;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *port;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baudrate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *databit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *stopbit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *checkbit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *flowcontrol;
    QGroupBox *groupBox_3;
    QTextEdit *send_edit;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_2;
    QCheckBox *s_hex;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 497);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 591, 351));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        recieve_edit = new QTextBrowser(groupBox);
        recieve_edit->setObjectName(QStringLiteral("recieve_edit"));
        recieve_edit->setGeometry(QRect(10, 20, 571, 321));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(628, 10, 151, 351));
        open_button = new QPushButton(groupBox_2);
        open_button->setObjectName(QStringLiteral("open_button"));
        open_button->setGeometry(QRect(11, 285, 75, 23));
        r_hex = new QCheckBox(groupBox_2);
        r_hex->setObjectName(QStringLiteral("r_hex"));
        r_hex->setGeometry(QRect(11, 314, 41, 16));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 21, 131, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        port = new QComboBox(widget);
        port->setObjectName(QStringLiteral("port"));

        horizontalLayout->addWidget(port);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudrate = new QComboBox(widget);
        baudrate->setObjectName(QStringLiteral("baudrate"));

        horizontalLayout_2->addWidget(baudrate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        databit = new QComboBox(widget);
        databit->setObjectName(QStringLiteral("databit"));

        horizontalLayout_3->addWidget(databit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        stopbit = new QComboBox(widget);
        stopbit->setObjectName(QStringLiteral("stopbit"));

        horizontalLayout_4->addWidget(stopbit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        checkbit = new QComboBox(widget);
        checkbit->setObjectName(QStringLiteral("checkbit"));

        horizontalLayout_5->addWidget(checkbit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        flowcontrol = new QComboBox(widget);
        flowcontrol->setObjectName(QStringLiteral("flowcontrol"));

        horizontalLayout_6->addWidget(flowcontrol);


        verticalLayout->addLayout(horizontalLayout_6);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 370, 591, 81));
        send_edit = new QTextEdit(groupBox_3);
        send_edit->setObjectName(QStringLiteral("send_edit"));
        send_edit->setGeometry(QRect(10, 20, 571, 51));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(630, 370, 151, 81));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 20, 75, 23));
        s_hex = new QCheckBox(groupBox_4);
        s_hex->setObjectName(QStringLiteral("s_hex"));
        s_hex->setGeometry(QRect(10, 50, 71, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 790, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\345\214\272", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\247\345\210\266\345\214\272", Q_NULLPTR));
        open_button->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        r_hex->setText(QApplication::translate("MainWindow", "HEX", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\265\201\346\216\247", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        s_hex->setText(QApplication::translate("MainWindow", "HEX", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
