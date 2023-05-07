QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addmoney.cpp \
    admincase.cpp \
    buyfinish.cpp \
    complete.cpp \
    corebuy.cpp \
    datacheck.cpp \
    edititem.cpp \
    fale.cpp \
    getpath.cpp \
    login.cpp \
    main.cpp \
    moneycase.cpp \
    moneyfinish.cpp \
    mvs.cpp \
    mvs2.cpp \
    mvs3.cpp \
    mvs4.cpp \
    newitem.cpp \
    salecase.cpp \
    setlog.cpp \
    userbuy.cpp \
    usercase.cpp \
    userchoice.cpp

HEADERS += \
    addmoney.h \
    admincase.h \
    buyfinish.h \
    complete.h \
    corebuy.h \
    datacheck.h \
    edititem.h \
    fale.h \
    getpath.h \
    login.h \
    moneycase.h \
    moneyfinish.h \
    mvs.h \
    mvs2.h \
    mvs3.h \
    mvs4.h \
    newitem.h \
    salecase.h \
    setlog.h \
    userbuy.h \
    usercase.h \
    userchoice.h

FORMS += \
    addmoney.ui \
    admincase.ui \
    buyfinish.ui \
    complete.ui \
    datacheck.ui \
    edititem.ui \
    fale.ui \
    login.ui \
    moneycase.ui \
    moneyfinish.ui \
    newitem.ui \
    salecase.ui \
    setlog.ui \
    userbuy.ui \
    usercase.ui \
    userchoice.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
