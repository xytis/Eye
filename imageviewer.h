#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QScrollBar>
#include <QLabel>
#include <QDir>
#include <QScrollArea>

namespace Ui {
class MainWindow;
}

class ImageViewer : public QMainWindow
{
    Q_OBJECT
public:
    explicit ImageViewer(QWidget *parent = 0);
    ~ImageViewer();

private slots:
    void open();
    void zoomIn();
    void zoomOut();
    void normalSize();
    void fitToWindow();
    void about();
    void aboutPlugins();

private:
    void createActions();
    void createMenus();
    void loadPlugins();
    void updateActions();
    void scaleImage(double factor);
    void adjustScrollBar(QScrollBar *scrollBar, double factor);

    QScrollArea *scrollArea;
    double scaleFactor;
    QDir pluginsDir;
    QStringList pluginFileNames;

    QAction *openAct;
    QAction *exitAct;
    QAction *zoomInAct;
    QAction *zoomOutAct;
    QAction *normalSizeAct;
    QAction *fitToWindowAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *aboutPluginsAct;

    QMenu *fileMenu;
    QMenu *viewMenu;
    QMenu *helpMenu;

    Ui::MainWindow *ui;
    
}; 

#endif // IMAGEVIEWER_H
