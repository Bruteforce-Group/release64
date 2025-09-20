/********************************************************************************
** Form generated from reading UI file 'fabuploaddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FABUPLOADDIALOG_H
#define UI_FABUPLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "fabuploadprogress.h"

QT_BEGIN_NAMESPACE

class Ui_FabUploadDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *headline;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout4;
    QSplitter *splitter2;
    QLabel *fab_icon;
    QSplitter *splitter3;
    QLabel *fab_message;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *cancelButton;
    QPushButton *uploadButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    FabUploadProgress *upload;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QProgressBar *progressBar_upload;
    QLabel *message;
    QProgressBar *progressBar_import;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelButton_2;
    QPushButton *uploadButton_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *FabUploadDialog)
    {
        if (FabUploadDialog->objectName().isEmpty())
            FabUploadDialog->setObjectName("FabUploadDialog");
        FabUploadDialog->resize(733, 336);
        QFont font;
        font.setFamilies({QString::fromUtf8("Droid Sans")});
        FabUploadDialog->setFont(font);
        layoutWidget = new QWidget(FabUploadDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 714, 316));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        headline = new QLabel(layoutWidget);
        headline->setObjectName("headline");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Droid Sans")});
        font1.setPointSize(18);
        font1.setBold(false);
        headline->setFont(font1);
        headline->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(headline);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(page);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);
        label_2->setMargin(2);
        splitter->addWidget(label_2);

        verticalLayout->addWidget(splitter);

        horizontalLayout4 = new QHBoxLayout();
        horizontalLayout4->setObjectName("horizontalLayout4");
        splitter2 = new QSplitter(page);
        splitter2->setObjectName("splitter2");
        splitter2->setOrientation(Qt::Vertical);
        fab_icon = new QLabel(splitter2);
        fab_icon->setObjectName("fab_icon");
        fab_icon->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/icons/Toolbar_Icon_Order.png")));
        fab_icon->setAlignment(Qt::AlignCenter);
        fab_icon->setWordWrap(true);
        splitter2->addWidget(fab_icon);

        horizontalLayout4->addWidget(splitter2);

        splitter3 = new QSplitter(page);
        splitter3->setObjectName("splitter3");
        splitter3->setOrientation(Qt::Vertical);
        fab_message = new QLabel(splitter3);
        fab_message->setObjectName("fab_message");
        fab_message->setWordWrap(true);
        splitter3->addWidget(fab_message);

        horizontalLayout4->addWidget(splitter3);

        horizontalLayout4->setStretch(0, 1);
        horizontalLayout4->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        cancelButton = new QPushButton(page);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMinimumSize(QSize(60, 0));
        cancelButton->setMaximumSize(QSize(100, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Droid Sans")});
        font2.setPointSize(11);
        cancelButton->setFont(font2);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("window-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        cancelButton->setIcon(icon);

        horizontalLayout->addWidget(cancelButton);

        uploadButton = new QPushButton(page);
        uploadButton->setObjectName("uploadButton");
        uploadButton->setMinimumSize(QSize(150, 35));
        uploadButton->setMaximumSize(QSize(150, 35));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Droid Sans")});
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setKerning(true);
        uploadButton->setFont(font3);

        horizontalLayout->addWidget(uploadButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        upload = new FabUploadProgress(page_2);
        upload->setObjectName("upload");
        upload->setGeometry(QRect(110, 10, 521, 321));
        layoutWidget1 = new QWidget(upload);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 10, 481, 221));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        verticalLayout_3->addWidget(label_9);

        progressBar_upload = new QProgressBar(layoutWidget1);
        progressBar_upload->setObjectName("progressBar_upload");
        progressBar_upload->setValue(24);

        verticalLayout_3->addWidget(progressBar_upload);

        message = new QLabel(layoutWidget1);
        message->setObjectName("message");

        verticalLayout_3->addWidget(message);

        progressBar_import = new QProgressBar(layoutWidget1);
        progressBar_import->setObjectName("progressBar_import");
        progressBar_import->setValue(24);

        verticalLayout_3->addWidget(progressBar_import);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        cancelButton_2 = new QPushButton(layoutWidget1);
        cancelButton_2->setObjectName("cancelButton_2");
        cancelButton_2->setMinimumSize(QSize(60, 0));
        cancelButton_2->setMaximumSize(QSize(100, 35));
        cancelButton_2->setFont(font2);
        cancelButton_2->setIcon(icon);

        horizontalLayout_4->addWidget(cancelButton_2);

        uploadButton_2 = new QPushButton(layoutWidget1);
        uploadButton_2->setObjectName("uploadButton_2");
        uploadButton_2->setMinimumSize(QSize(150, 35));
        uploadButton_2->setMaximumSize(QSize(150, 35));
        uploadButton_2->setFont(font3);

        horizontalLayout_4->addWidget(uploadButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 38, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(FabUploadDialog);
        QObject::connect(upload, SIGNAL(uploadProgressChanged(int)), progressBar_upload, SLOT(setValue(int)));
        QObject::connect(upload, SIGNAL(processProgressChanged(int)), progressBar_import, SLOT(setValue(int)));
        QObject::connect(upload, SIGNAL(processingDone()), FabUploadDialog, SLOT(onUploadReady()));
        QObject::connect(upload, &FabUploadProgress::closeUploadError, FabUploadDialog, qOverload<>(&QDialog::close));
        QObject::connect(uploadButton_2, &QPushButton::clicked, FabUploadDialog, qOverload<>(&QDialog::close));
        QObject::connect(uploadButton_2, &QPushButton::clicked, upload, qOverload<>(&FabUploadProgress::openInBrowser));
        QObject::connect(cancelButton_2, &QPushButton::clicked, FabUploadDialog, qOverload<>(&QDialog::close));
        QObject::connect(cancelButton, &QPushButton::clicked, FabUploadDialog, qOverload<>(&QDialog::close));
        QObject::connect(uploadButton, &QPushButton::clicked, upload, qOverload<>(&FabUploadProgress::doUpload));
        QObject::connect(uploadButton, SIGNAL(clicked()), FabUploadDialog, SLOT(onUploadStarted()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FabUploadDialog);
    } // setupUi

    void retranslateUi(QDialog *FabUploadDialog)
    {
        FabUploadDialog->setWindowTitle(QCoreApplication::translate("FabUploadDialog", "Fritzing Fab Upload", nullptr));
        headline->setText(QCoreApplication::translate("FabUploadDialog", "Get your board fabricated effortlessly!", nullptr));
        label_2->setText(QCoreApplication::translate("FabUploadDialog", "Upload your design now to see a preview. Review it, and once satisfied, proceed to order for manufacturing.", nullptr));
        fab_icon->setText(QString());
        fab_message->setText(QCoreApplication::translate("FabUploadDialog", "Checking for fab...", nullptr));
        cancelButton->setText(QCoreApplication::translate("FabUploadDialog", "&Cancel", nullptr));
        uploadButton->setText(QCoreApplication::translate("FabUploadDialog", "Upload to Fab", nullptr));
        label_9->setText(QCoreApplication::translate("FabUploadDialog", "Upload", nullptr));
        message->setText(QCoreApplication::translate("FabUploadDialog", "Import", nullptr));
        cancelButton_2->setText(QCoreApplication::translate("FabUploadDialog", "&Cancel", nullptr));
        uploadButton_2->setText(QCoreApplication::translate("FabUploadDialog", "Uploading...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FabUploadDialog: public Ui_FabUploadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FABUPLOADDIALOG_H
