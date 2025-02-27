QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    add2.cpp \
    form.cpp \
    main.cpp \
    output.cpp \
    output2.cpp \
    output3.cpp \
    qcustomplot.cpp \
    widget.cpp

HEADERS += \
    add.h \
    add2.h \
    form.h \
    output.h \
    output2.h \
    output3.h \
    qcustomplot.h \
    widget.h

FORMS += \
    add.ui \
    add2.ui \
    form.ui \
    output.ui \
    output2.ui \
    output3.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
