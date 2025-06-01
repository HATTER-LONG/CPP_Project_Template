#pragma once

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
} // namespace Ui
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:
    explicit Widget(QWidget* parent = nullptr);
    ~Widget();

private:
    Ui::Widget* m_ui;
};
