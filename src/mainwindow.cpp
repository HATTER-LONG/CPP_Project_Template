#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>

Widget::Widget(QWidget* parent) : QWidget(parent), m_ui(new Ui::Widget) {
    m_ui->setupUi(this);
}

Widget::~Widget() { delete m_ui; }
