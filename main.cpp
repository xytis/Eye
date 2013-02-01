#include "imageviewer.h"

#include <QtPlugin>
#include <QApplication>

#define QT_DEBUG_PLUGINS 1

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ImageViewer imageViewer;
    imageViewer.show();

    return a.exec();
}
