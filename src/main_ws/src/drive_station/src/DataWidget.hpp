#ifndef DATA_WIDGET_HPP_
#define DATA_WIDGET_HPP_

#include <QWidget>

#include "controls_msgs/msg/conversion.hpp"
#include "rclcpp/rclcpp.hpp"

#define GUI_NODE_NAME "gui"

class DataWidget : public QWidget, public rclcpp::Node
{
    Q_OBJECT
   public:
    DataWidget(QWidget* parent = nullptr) : QWidget(parent), Node(GUI_NODE_NAME)
    {
        rclcpp::spin(std::make_shared<DataWidget>());
    }

    ~DataWidget() { rclcpp::shutdown(); }

   private:
    rclcpp::Subscription<controls_msgs::msg::Conversion>::SharedPtr
        conversionSub;
};
#endif