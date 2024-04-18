/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDelet;
    QAction *actionRotateLeft90;
    QAction *actionAddNode;
    QAction *actionSetParameter;
    QAction *actionDeletLine;
    QAction *actionDeletNode;
    QAction *actionEditNode;
    QAction *actionOpenWindow;
    QWidget *centralwidget;
    QFrame *line;
    QLabel *labelBase;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButtonHindNet;
    QFrame *line_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1013, 760);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionDelet = new QAction(MainWindow);
        actionDelet->setObjectName(QString::fromUtf8("actionDelet"));
        actionRotateLeft90 = new QAction(MainWindow);
        actionRotateLeft90->setObjectName(QString::fromUtf8("actionRotateLeft90"));
        actionAddNode = new QAction(MainWindow);
        actionAddNode->setObjectName(QString::fromUtf8("actionAddNode"));
        actionSetParameter = new QAction(MainWindow);
        actionSetParameter->setObjectName(QString::fromUtf8("actionSetParameter"));
        actionDeletLine = new QAction(MainWindow);
        actionDeletLine->setObjectName(QString::fromUtf8("actionDeletLine"));
        actionDeletNode = new QAction(MainWindow);
        actionDeletNode->setObjectName(QString::fromUtf8("actionDeletNode"));
        actionEditNode = new QAction(MainWindow);
        actionEditNode->setObjectName(QString::fromUtf8("actionEditNode"));
        actionOpenWindow = new QAction(MainWindow);
        actionOpenWindow->setObjectName(QString::fromUtf8("actionOpenWindow"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(230, 10, 16, 735));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        labelBase = new QLabel(centralwidget);
        labelBase->setObjectName(QString::fromUtf8("labelBase"));
        labelBase->setGeometry(QRect(80, 6, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labelBase->setFont(font);
        labelBase->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(520, 2, 181, 31));
        label_3->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 706, 101, 41));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButtonHindNet = new QPushButton(centralwidget);
        pushButtonHindNet->setObjectName(QString::fromUtf8("pushButtonHindNet"));
        pushButtonHindNet->setGeometry(QRect(910, 6, 93, 28));
        QFont font2;
        font2.setPointSize(9);
        pushButtonHindNet->setFont(font2);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(110, 40, 16, 705));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1013, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\224\265\350\267\257\344\273\277\347\234\237\350\275\257\344\273\266", nullptr));
        actionDelet->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\205\203\344\273\266", nullptr));
        actionRotateLeft90->setText(QCoreApplication::translate("MainWindow", "\351\200\206\346\227\266\351\222\210\346\227\213\350\275\25490\345\272\246", nullptr));
        actionAddNode->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\212\202\347\202\271", nullptr));
        actionSetParameter->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", nullptr));
        actionDeletLine->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\347\233\264\347\272\277", nullptr));
        actionDeletNode->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
        actionEditNode->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\212\202\347\202\271", nullptr));
        actionOpenWindow->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\347\252\227\345\217\243", nullptr));
        labelBase->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\267\257\345\205\203\344\273\266", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\267\257\345\205\203\344\273\266\350\277\236\346\216\245\345\214\272\345\237\237", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        pushButtonHindNet->setText(QCoreApplication::translate("MainWindow", "\351\232\220\350\227\217\347\275\221\346\240\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
