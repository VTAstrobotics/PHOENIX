#ifndef MAIN_WINDOW_HPP_
#define MAIN_WINDOW_HPP_

#include <QDockWidget>
#include <QMainWindow>
#include <QWidget>

#include "CameraWidget.hpp"
#include "ConsoleWidget.hpp"

#define CONSOLE_TAB_NAME "Console view"
#define CAMERA_TAB_NAME "Camera view"
#define WINDOW_TITLE "PHOENIX Mission Control"

class MainWindow : public QMainWindow
{
    Q_OBJECT

   public:
    MainWindow()
    {
        /* Init widgets */
        console_dock = new QDockWidget(this);
        console_view = new ConsoleWidget(this);
        camera_view = new CameraWidget(this);

        /* Make camera main focus of window*/
        setCentralWidget(camera_view);

        /* Telemetry dock settings */
        console_dock->setWidget(console_view);
        this->addDockWidget(Qt::LeftDockWidgetArea, console_dock);

        /* Window settings */
        this->setWindowTitle(WINDOW_TITLE);
    }

   private:
    QDockWidget* console_dock;
    ConsoleWidget* console_view;
    CameraWidget* camera_view;
};

#endif