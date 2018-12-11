#-------------------------------------------------
#
# Project created by QtCreator 2018-10-28T16:07:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pays
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Application.cpp \
    dialogs_buttons.cpp \
    dialogs_common.cpp \
    order_dialog.cpp \
    order_frame.cpp \
    order_title.cpp \
    order_sum_as_words.cpp \
    helpers_sum_as_words.cpp \
    order_summa.cpp \
    order_account.cpp \
    order_payer_in_out.cpp \
    order_bank_name.cpp \
    order_receiver.cpp


HEADERS += \
        mainwindow.h \
    Application.h \
    order_dialog.h \
    dialogs_common.h \
    dialogs_buttons.h \
    order_frame.h \
    order_title.h \
    order_sum_as_words.h \
    helpers.h \
    order_summa.h \
    order_account.h \
    order_payer_in_out.h \
    order_bank_name.h \
    order_receiver.h

FORMS += \
    Account.ui \
    Summa.ui \
    payer_in_out.ui \
    bank_name.ui \
    receiver.ui

