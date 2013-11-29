/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;

    void setupUi(QWidget *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->resize(767, 367);
//        verticalLayoutWidget = new QWidget(Interface);
//        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
//        verticalLayoutWidget->setGeometry(QRect(0, 0, 771, 371));
//        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
//        verticalLayout->setSpacing(6);
//        verticalLayout->setContentsMargins(11, 11, 11, 11);
//        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
//        verticalLayout->setContentsMargins(0, 0, 0, 0);
//        widget = new QWidget(verticalLayoutWidget);
//        widget->setObjectName(QStringLiteral("widget"));
//        widget->setMaximumSize(QSize(16777215, 50));

//        verticalLayout->addWidget(widget);

//        horizontalLayout_2 = new QHBoxLayout();
//        horizontalLayout_2->setSpacing(6);
//        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
//        widget_2 = new QWidget(verticalLayoutWidget);
//        widget_2->setObjectName(QStringLiteral("widget_2"));
//        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
//        sizePolicy.setHorizontalStretch(0);
//        sizePolicy.setVerticalStretch(0);
//        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
//        widget_2->setSizePolicy(sizePolicy);

//        horizontalLayout_2->addWidget(widget_2);

//        verticalLayout_3 = new QVBoxLayout();
//        verticalLayout_3->setSpacing(6);
//        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
//        textEdit = new QTextEdit(verticalLayoutWidget);
//        textEdit->setObjectName(QStringLiteral("textEdit"));
//        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
//        sizePolicy1.setHorizontalStretch(0);
//        sizePolicy1.setVerticalStretch(0);
//        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
//        textEdit->setSizePolicy(sizePolicy1);

//        verticalLayout_3->addWidget(textEdit);


//        horizontalLayout_2->addLayout(verticalLayout_3);


//        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QWidget *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Interface", 0));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
