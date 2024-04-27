
#include "rclcpp/rclcpp.hpp"

#include <QApplication>
#include "MainWindow.hpp"

int main(int argc, char** argv)
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    rclcpp::init(argc, argv);
    return a.exec();
}