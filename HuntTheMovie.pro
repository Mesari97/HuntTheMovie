QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/Model/artwork.cpp \
    src/Model/buildercomment.cpp \
    src/Model/buildernote.cpp \
    src/Model/country.cpp \
    src/Model/directornotice.cpp \
    src/Model/distributor.cpp \
    src/Model/distributorlist.cpp \
    src/Model/movie.cpp \
    src/Model/notice.cpp \
    src/Model/noticebuilder.cpp \
    src/Model/series.cpp \
    src/Model/user.cpp \
    src/View/connection.cpp \
    src/main.cpp \

HEADERS += \
    src/Model/artwork.h \
    src/Model/buildercomment.h \
    src/Model/buildernote.h \
    src/Model/country.h \
    src/Model/directornotice.h \
    src/Model/distributor.h \
    src/Model/distributorlist.h \
    src/Model/movie.h \
    src/Model/notice.h \
    src/Model/noticebuilder.h \
    src/Model/series.h \
    src/Model/user.h \
    src/View/connection.h \

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
