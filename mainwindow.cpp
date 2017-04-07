#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include "booklistwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    lib::Book b = {"123445525", "a title", "an author", "12/12/16"};
    qDebug().noquote() << b.toString();
    */
    bookWidget = new BookListWidget;
    bookWidget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
