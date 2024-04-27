#ifndef DATA_WIDGET_HPP_
#define DATA_WIDGET_HPP_

#include <QWidget>

#include "rclcpp/rclcpp.hpp"

#define GUI_NODE_NAME "gui"

class DataWidget : public QWidget, rclcpp::Node
{
    Q_OBJECT
   public:
    DataWidget(QWidget* parent = nullptr) : QWidget(parent), Node(GUI_NODE_NAME)
    {
    }

   private:
};
#endif