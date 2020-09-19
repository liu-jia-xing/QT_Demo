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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextEdit *recieve_edit;
    QGroupBox *groupBox_2;
    QCheckBox *r_hex;
    QPushButton *clear_recieve_buf;
    QWidget *layoutWidget;
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
    QHBoxLayout *horizontalLayout_7;
    QPushButton *open_button;
    QPushButton *get_port;
    QGroupBox *groupBox_3;
    QTextEdit *send_edit;
    QGroupBox *groupBox_4;
    QPushButton *send_button;
    QCheckBox *s_hex;
    QPushButton *clear_send_text;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(823, 496);
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
        recieve_edit = new QTextEdit(groupBox);
        recieve_edit->setObjectName(QStringLiteral("recieve_edit"));
        recieve_edit->setGeometry(QRect(10, 20, 571, 321));
        recieve_edit->setReadOnly(true);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(628, 10, 181, 351));
        r_hex = new QCheckBox(groupBox_2);
        r_hex->setObjectName(QStringLiteral("r_hex"));
        r_hex->setGeometry(QRect(13, 319, 41, 16));
        clear_recieve_buf = new QPushButton(groupBox_2);
        clear_recieve_buf->setObjectName(QStringLiteral("clear_recieve_buf"));
        clear_recieve_buf->setGeometry(QRect(74, 320, 71, 23));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 22, 160, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        port = new QComboBox(layoutWidget);
        port->setObjectName(QStringLiteral("port"));

        horizontalLayout->addWidget(port);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudrate = new QComboBox(layoutWidget);
        baudrate->setObjectName(QStringLiteral("baudrate"));

        horizontalLayout_2->addWidget(baudrate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        databit = new QComboBox(layoutWidget);
        databit->setObjectName(QStringLiteral("databit"));

        horizontalLayout_3->addWidget(databit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        stopbit = new QComboBox(layoutWidget);
        stopbit->setObjectName(QStringLiteral("stopbit"));

        horizontalLayout_4->addWidget(stopbit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        checkbit = new QComboBox(layoutWidget);
        checkbit->setObjectName(QStringLiteral("checkbit"));

        horizontalLayout_5->addWidget(checkbit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        open_button = new QPushButton(layoutWidget);
        open_button->setObjectName(QStringLiteral("open_button"));

        horizontalLayout_7->addWidget(open_button);

        get_port = new QPushButton(layoutWidget);
        get_port->setObjectName(QStringLiteral("get_port"));

        horizontalLayout_7->addWidget(get_port);


        verticalLayout->addLayout(horizontalLayout_7);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 370, 591, 81));
        send_edit = new QTextEdit(groupBox_3);
        send_edit->setObjectName(QStringLiteral("send_edit"));
        send_edit->setGeometry(QRect(10, 20, 571, 51));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(630, 370, 181, 81));
        send_button = new QPushButton(groupBox_4);
        send_button->setObjectName(QStringLiteral("send_button"));
        send_button->setGeometry(QRect(10, 20, 61, 23));
        s_hex = new QCheckBox(groupBox_4);
        s_hex->setObjectName(QStringLiteral("s_hex"));
        s_hex->setGeometry(QRect(10, 50, 71, 16));
        clear_send_text = new QPushButton(groupBox_4);
        clear_send_text->setObjectName(QStringLiteral("clear_send_text"));
        clear_send_text->setGeometry(QRect(80, 20, 61, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 823, 22));
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
        r_hex->setText(QApplication::translate("MainWindow", "HEX", Q_NULLPTR));
        clear_recieve_buf->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baudrate->clear();
        baudrate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        databit->clear();
        databit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        stopbit->clear();
        stopbit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        checkbit->clear();
        checkbit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NONE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ODD", Q_NULLPTR)
         << QApplication::translate("MainWindow", "EVEN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "MARK", Q_NULLPTR)
        );
        open_button->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        get_port->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        send_button->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        s_hex->setText(QApplication::translate("MainWindow", "HEX", Q_NULLPTR));
        clear_send_text->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
