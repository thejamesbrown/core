#include "mainwindow.h"
#include "ui_mainwindow.h"

void newFunctionDoesNothing()
{
    return;
}

int someNewFunction()
{
    return 100;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // This comment is a test.
    // This is another comment.
    delete ui;
}
