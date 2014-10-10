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
    if(0 == n || 1 == n)
        return 1;

    int a = 2, b = 3;

    for(int i = 2; i != n; ++i)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return a;
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
