#ifndef CONSOLE_WIDGET_HPP_
#define CONSOLE_WIDGET_HPP_

#include <QPlainTextEdit>
#include <QString>

class ConsoleWidget : public QPlainTextEdit
{
    Q_OBJECT
   public:
    ConsoleWidget(QWidget* parent = nullptr) : QPlainTextEdit(parent)
    {
        this->setReadOnly(true);
    }

   public slots:
    void new_data(const QString& str) { this->insertPlainText(str); }

   private:
};
#endif