/********************************************************************************
** Form generated from reading UI file 'choice.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICE_H
#define UI_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Choice
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Choice)
    {
        if (Choice->objectName().isEmpty())
            Choice->setObjectName("Choice");
        Choice->resize(794, 439);
        gridLayout = new QGridLayout(Choice);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(Choice);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setSizeIncrement(QSize(0, 0));

        gridLayout_2->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(Choice);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setSizeIncrement(QSize(0, 0));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(comboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label_2);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        sizePolicy3.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(comboBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Choice);

        QMetaObject::connectSlotsByName(Choice);
    } // setupUi

    void retranslateUi(QDialog *Choice)
    {
        Choice->setWindowTitle(QCoreApplication::translate("Choice", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("Choice", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("Choice", "PushButton", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Choice", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Choice", "A", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Choice", "B", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Choice", "C", nullptr));

        label_2->setText(QCoreApplication::translate("Choice", "\320\240\320\265\320\266\320\270\320\274", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Choice", "A", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Choice", "B", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Choice", "C", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Choice: public Ui_Choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICE_H
