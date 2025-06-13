// Saul Resendiz
// CIS-17B

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenu *fileMenu = menuBar()->addMenu("File");  // Creating a File
    QAction *exitAction = fileMenu->addAction("Exit"); // Exit Action

    QMenu *helpMenu = menuBar()->addMenu("Help");  // Creating a Help
    QAction *aboutAction = helpMenu->addAction("About");  // Help Action

    // Connect actions
    connect(exitAction, &QAction::triggered, this, &QMainWindow::close); // When "Exit" is triggered - close window

    connect(aboutAction, &QAction::triggered, this, [this]() { // When 'About' is triggered, display message box
        QMessageBox::about(nullptr, "About", "Saul Resendiz\nGUI Assignment CIS17B");

     // connecting buttons within UI
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::onAddItem);
    connect(ui->findButton, &QPushButton::clicked, this, &MainWindow::onFindItem);
    connect(ui->removeButton, &QPushButton::clicked, this, &MainWindow::onRemoveItem);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Was unable to implement the code the button functionalities, sorry 

// AddItem Function:
void MainWindow::onAddItem()
{
// Not sure how to immplement functionalities with GUI, sorry. 
}
// FindItem Function
void MainWindow::onFindItem()
{

}
// RemoveItem function
void MainWindow::onRemoveItem()
{

}
