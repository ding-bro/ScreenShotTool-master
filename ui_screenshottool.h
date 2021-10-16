/********************************************************************************
** Form generated from reading UI file 'screenshottool.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTTOOL_H
#define UI_SCREENSHOTTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenShotTool
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QCheckBox *checkBox;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QWidget *ScreenShotTool)
    {
        if (ScreenShotTool->objectName().isEmpty())
            ScreenShotTool->setObjectName(QStringLiteral("ScreenShotTool"));
        ScreenShotTool->resize(316, 209);
        verticalLayout = new QVBoxLayout(ScreenShotTool);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ScreenShotTool);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ScreenShotTool);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setChecked(false);

        gridLayout_2->addWidget(checkBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->insertItems(0, QStringList()
         << QStringLiteral("English")
         << QString::fromUtf8("\344\270\255\346\226\207")
        );
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalLayout->setStretch(1, 1);

        retranslateUi(ScreenShotTool);

        QMetaObject::connectSlotsByName(ScreenShotTool);
    } // setupUi

    void retranslateUi(QWidget *ScreenShotTool)
    {
        ScreenShotTool->setWindowTitle(QApplication::translate("ScreenShotTool", "ScreenShotTool", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ScreenShotTool", "Global HotKey", Q_NULLPTR));
        label->setText(QApplication::translate("ScreenShotTool", "ShotCut Key", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ScreenShotTool", "Setting", Q_NULLPTR));
        label_2->setText(QApplication::translate("ScreenShotTool", "Run on system startup", Q_NULLPTR));
        checkBox->setText(QString());
        label_3->setText(QApplication::translate("ScreenShotTool", "Language", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScreenShotTool: public Ui_ScreenShotTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTTOOL_H
