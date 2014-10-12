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

void anotherNewFunction()
{
    return;
}

void testingMergeViaGitHubApp()
{
    return;
}

int testingMergeViaGitHubAppWithAnInt()
{
    return 1000;
}

// The space complexity of this function is constant
// and the time complexity is linear.
int functionThatDoesSomethingInteresting(int n)
{
    int a = 1, b = 1;

    if(0 == n)
        return a;

    if(1 == n)
        return b;

    for(int i = 1; i != n; ++i)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
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
