/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_4;
    QLabel *label_8;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(980, 645);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 30, 161, 41));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 30, 131, 41));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, -10, 111, 61));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 90, 131, 121));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, -10, 111, 61));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(380, 30, 161, 41));
        tableWidget = new QTableWidget(Dialog);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 16)
            tableWidget->setRowCount(16);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(11, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(12, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(13, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(14, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(15, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(15, 1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(15, 2, __qtablewidgetitem36);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(590, 30, 361, 571));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 100, 131, 61));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 140, 141, 61));
        textEdit_2 = new QTextEdit(Dialog);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(380, 100, 161, 41));
        textEdit_3 = new QTextEdit(Dialog);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(380, 150, 161, 41));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(600, -10, 141, 61));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 220, 111, 61));
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(70, 270, 71, 61));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 220, 111, 61));
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(210, 270, 71, 61));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 270, 211, 61));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 350, 211, 61));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(340, 440, 211, 61));
        textEdit_4 = new QTextEdit(Dialog);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(70, 390, 211, 111));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 340, 241, 61));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\210\233\345\273\272\350\277\233\347\250\213", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\350\276\223\345\205\245\350\277\233\347\250\213\344\270\252\346\225\260</p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\350\277\220\350\241\214", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\345\275\223\345\211\215\347\263\273\347\273\237\346\227\266\351\227\264</p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog", "\345\235\227\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog", "\345\215\240\347\224\250\346\203\205\345\206\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog", "\345\215\240\347\224\250\351\241\265\351\235\242", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(2, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(3, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(4, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(5, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(6, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(7, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(8, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(9, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(10, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Dialog", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(11, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Dialog", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(12, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Dialog", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(13, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Dialog", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(14, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Dialog", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(15, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Dialog", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(15, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Dialog", "\345\215\240\347\224\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(15, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Dialog", "\345\220\204\350\277\233\347\250\213\347\232\204\351\241\265\350\241\250", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\345\275\223\345\211\215\350\277\220\350\241\214\347\232\204\350\277\233\347\250\213id\357\274\232</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\345\275\223\345\211\215\350\277\220\350\241\214\350\277\233\347\250\213\346\211\247\350\241\214\347\232\204</p><p>\346\214\207\344\273\244\345\217\267\357\274\232</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\345\206\205\345\255\230\350\241\250</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\350\277\233\347\250\213\350\260\203\345\272\246\347\256\227\346\263\225\357\274\232</p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "FIFO", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "Priority", nullptr));

        label_7->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\351\241\265\351\235\242\347\275\256\346\215\242\347\256\227\346\263\225\357\274\232</p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "LRU", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "CLOCK", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Dialog", "SCR", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Dialog", "FIFO", nullptr));

        pushButton_3->setText(QCoreApplication::translate("Dialog", "\346\237\245\347\234\213\345\244\226\345\255\230\345\210\206\351\205\215\346\203\205\345\206\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "\346\237\245\347\234\213\345\206\205\345\255\230\345\210\206\351\205\215\346\203\205\345\206\265", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "\346\237\245\347\234\213\346\200\273\344\275\223\350\277\220\350\241\214\344\277\241\346\201\257", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p>\345\275\223\345\211\215\350\277\220\350\241\214\350\277\233\347\250\213\346\211\247\350\241\214\347\232\204\346\214\207\344\273\244\345\272\217\345\210\227\357\274\232</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
