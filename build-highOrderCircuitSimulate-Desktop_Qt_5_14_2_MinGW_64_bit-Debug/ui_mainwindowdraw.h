/********************************************************************************
** Form generated from reading UI file 'mainwindowdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWDRAW_H
#define UI_MAINWINDOWDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowDraw
{
public:
    QAction *action_S;
    QAction *action_P;
    QAction *action_X;
    QAction *action_T;
    QAction *action_U;
    QAction *action_H;
    QAction *action_A;
    QWidget *centralwidget;
    QCustomPlot *customPlot;
    QLabel *label_4;
    QLineEdit *lineEditAverage;
    QGroupBox *groupBox;
    QLineEdit *lineEdity1;
    QLineEdit *lineEditx1;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditx2;
    QLineEdit *lineEdity2;
    QPushButton *pushButtonOkRange;
    QPushButton *pushButtonAutoRange;
    QGroupBox *groupBox_2;
    QRadioButton *radioButtonXY;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QPushButton *pushButtonScreenshot;
    QGroupBox *groupBox_3;
    QCheckBox *checkBoxShowBorderLegend;
    QPushButton *pushButtonPosLegend;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_3;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_T;
    QMenu *menu_H;

    void setupUi(QMainWindow *MainWindowDraw)
    {
        if (MainWindowDraw->objectName().isEmpty())
            MainWindowDraw->setObjectName(QString::fromUtf8("MainWindowDraw"));
        MainWindowDraw->resize(644, 476);
        action_S = new QAction(MainWindowDraw);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        action_P = new QAction(MainWindowDraw);
        action_P->setObjectName(QString::fromUtf8("action_P"));
        action_X = new QAction(MainWindowDraw);
        action_X->setObjectName(QString::fromUtf8("action_X"));
        action_T = new QAction(MainWindowDraw);
        action_T->setObjectName(QString::fromUtf8("action_T"));
        action_T->setCheckable(true);
        action_U = new QAction(MainWindowDraw);
        action_U->setObjectName(QString::fromUtf8("action_U"));
        action_U->setCheckable(true);
        action_H = new QAction(MainWindowDraw);
        action_H->setObjectName(QString::fromUtf8("action_H"));
        action_A = new QAction(MainWindowDraw);
        action_A->setObjectName(QString::fromUtf8("action_A"));
        centralwidget = new QWidget(MainWindowDraw);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(20, 100, 491, 341));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 330, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        label_4->setFont(font);
        lineEditAverage = new QLineEdit(centralwidget);
        lineEditAverage->setObjectName(QString::fromUtf8("lineEditAverage"));
        lineEditAverage->setGeometry(QRect(520, 350, 111, 20));
        QFont font1;
        font1.setPointSize(6);
        lineEditAverage->setFont(font1);
        lineEditAverage->setReadOnly(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 10, 331, 81));
        lineEdity1 = new QLineEdit(groupBox);
        lineEdity1->setObjectName(QString::fromUtf8("lineEdity1"));
        lineEdity1->setGeometry(QRect(90, 50, 31, 21));
        QFont font2;
        font2.setPointSize(7);
        lineEdity1->setFont(font2);
        lineEditx1 = new QLineEdit(groupBox);
        lineEditx1->setObjectName(QString::fromUtf8("lineEditx1"));
        lineEditx1->setGeometry(QRect(90, 20, 31, 21));
        lineEditx1->setFont(font2);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 71, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 71, 16));
        lineEditx2 = new QLineEdit(groupBox);
        lineEditx2->setObjectName(QString::fromUtf8("lineEditx2"));
        lineEditx2->setGeometry(QRect(150, 20, 31, 21));
        lineEditx2->setFont(font2);
        lineEdity2 = new QLineEdit(groupBox);
        lineEdity2->setObjectName(QString::fromUtf8("lineEdity2"));
        lineEdity2->setGeometry(QRect(150, 50, 31, 21));
        lineEdity2->setFont(font2);
        pushButtonOkRange = new QPushButton(groupBox);
        pushButtonOkRange->setObjectName(QString::fromUtf8("pushButtonOkRange"));
        pushButtonOkRange->setGeometry(QRect(190, 30, 31, 41));
        pushButtonAutoRange = new QPushButton(groupBox);
        pushButtonAutoRange->setObjectName(QString::fromUtf8("pushButtonAutoRange"));
        pushButtonAutoRange->setGeometry(QRect(230, 40, 91, 21));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 10, 111, 81));
        radioButtonXY = new QRadioButton(groupBox_2);
        radioButtonXY->setObjectName(QString::fromUtf8("radioButtonXY"));
        radioButtonXY->setGeometry(QRect(10, 60, 61, 16));
        radioButtonXY->setChecked(true);
        radioButtonX = new QRadioButton(groupBox_2);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));
        radioButtonX->setGeometry(QRect(10, 20, 51, 16));
        radioButtonY = new QRadioButton(groupBox_2);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));
        radioButtonY->setGeometry(QRect(10, 40, 51, 16));
        pushButtonScreenshot = new QPushButton(centralwidget);
        pushButtonScreenshot->setObjectName(QString::fromUtf8("pushButtonScreenshot"));
        pushButtonScreenshot->setGeometry(QRect(520, 390, 111, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        pushButtonScreenshot->setFont(font3);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 10, 121, 81));
        checkBoxShowBorderLegend = new QCheckBox(groupBox_3);
        checkBoxShowBorderLegend->setObjectName(QString::fromUtf8("checkBoxShowBorderLegend"));
        checkBoxShowBorderLegend->setGeometry(QRect(10, 20, 131, 19));
        checkBoxShowBorderLegend->setChecked(true);
        pushButtonPosLegend = new QPushButton(groupBox_3);
        pushButtonPosLegend->setObjectName(QString::fromUtf8("pushButtonPosLegend"));
        pushButtonPosLegend->setGeometry(QRect(10, 50, 93, 28));
        QFont font4;
        font4.setPointSize(9);
        pushButtonPosLegend->setFont(font4);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(520, 130, 111, 141));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 110, 81, 19));
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 50, 81, 19));
        checkBox_1 = new QCheckBox(groupBox_4);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(10, 20, 81, 19));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 80, 81, 19));
        MainWindowDraw->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDraw);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 644, 23));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_T = new QMenu(menubar);
        menu_T->setObjectName(QString::fromUtf8("menu_T"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        MainWindowDraw->setMenuBar(menubar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_T->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(action_S);
        menu_F->addAction(action_P);
        menu_F->addAction(action_X);
        menu_T->addAction(action_T);
        menu_T->addAction(action_U);
        menu_H->addAction(action_H);
        menu_H->addAction(action_A);

        retranslateUi(MainWindowDraw);

        QMetaObject::connectSlotsByName(MainWindowDraw);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDraw)
    {
        MainWindowDraw->setWindowTitle(QCoreApplication::translate("MainWindowDraw", "\347\244\272\346\263\242\345\231\250", nullptr));
        action_S->setText(QCoreApplication::translate("MainWindowDraw", "\344\277\235\345\255\230\345\235\220\346\240\207(&S)", nullptr));
        action_P->setText(QCoreApplication::translate("MainWindowDraw", "\346\211\223\345\215\260(&P)", nullptr));
        action_X->setText(QCoreApplication::translate("MainWindowDraw", "\351\200\200\345\207\272(&X)", nullptr));
        action_T->setText(QCoreApplication::translate("MainWindowDraw", "\344\273\273\345\212\241\350\260\203\345\272\246\344\273\277\347\234\237\350\275\257\344\273\266(&T)", nullptr));
        action_U->setText(QCoreApplication::translate("MainWindowDraw", "\344\270\262\345\217\243\346\216\245\346\224\266\350\275\257\344\273\266(&U)", nullptr));
        action_H->setText(QCoreApplication::translate("MainWindowDraw", "\346\237\245\347\234\213\345\270\256\345\212\251(&H)", nullptr));
        action_A->setText(QCoreApplication::translate("MainWindowDraw", "\345\205\263\344\272\216\350\275\257\344\273\266(&A)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindowDraw", "\347\272\265\345\235\220\346\240\207\345\235\207\345\200\274", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindowDraw", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256:", nullptr));
        lineEdity1->setText(QCoreApplication::translate("MainWindowDraw", "-0.1", nullptr));
        lineEditx1->setText(QCoreApplication::translate("MainWindowDraw", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindowDraw", "x\350\275\264\350\214\203\345\233\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindowDraw", "y\350\275\264\350\214\203\345\233\264\357\274\232", nullptr));
        lineEditx2->setText(QCoreApplication::translate("MainWindowDraw", "1.1", nullptr));
        lineEdity2->setText(QCoreApplication::translate("MainWindowDraw", "1", nullptr));
        pushButtonOkRange->setText(QCoreApplication::translate("MainWindowDraw", "OK", nullptr));
        pushButtonAutoRange->setText(QCoreApplication::translate("MainWindowDraw", "\350\207\252\351\200\202\345\272\224\350\260\203\346\225\264", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindowDraw", "\351\274\240\346\240\207\346\273\232\350\275\256\347\274\251\346\224\276\345\212\237\350\203\275", nullptr));
        radioButtonXY->setText(QCoreApplication::translate("MainWindowDraw", "\347\274\251\346\224\276XY", nullptr));
        radioButtonX->setText(QCoreApplication::translate("MainWindowDraw", "\347\274\251\346\224\276X", nullptr));
        radioButtonY->setText(QCoreApplication::translate("MainWindowDraw", "\347\274\251\346\224\276Y", nullptr));
        pushButtonScreenshot->setText(QCoreApplication::translate("MainWindowDraw", "\344\270\200\351\224\256 \346\210\252\345\233\276\n"
"\345\210\260\345\211\252\345\210\207\346\235\277", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindowDraw", "\345\233\276\344\276\213\346\216\247\345\210\266", nullptr));
        checkBoxShowBorderLegend->setText(QCoreApplication::translate("MainWindowDraw", "\346\230\276\347\244\272\345\233\276\344\276\213\350\276\271\346\241\206", nullptr));
        pushButtonPosLegend->setText(QCoreApplication::translate("MainWindowDraw", "\345\233\276\344\276\213\344\275\215\347\275\256\345\210\207\346\215\242", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindowDraw", "\351\200\232\351\201\223\345\274\200\345\205\263", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindowDraw", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindowDraw", "CheckBox", nullptr));
        checkBox_1->setText(QCoreApplication::translate("MainWindowDraw", "CheckBox", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindowDraw", "CheckBox", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindowDraw", "\346\226\207\344\273\266(&F)", nullptr));
        menu_T->setTitle(QCoreApplication::translate("MainWindowDraw", "\345\267\245\345\205\267(&T)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindowDraw", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDraw: public Ui_MainWindowDraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWDRAW_H
