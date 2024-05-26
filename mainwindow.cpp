#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showDirectory()
{
    ui->directory_line->setText(directory_name);

    colorise_directory_line();
}

void MainWindow::colorise_directory_line()
{
    if(!correct_directory())
    {
        ui->directory_line->setStyleSheet(incorrect_directory_style);
        return;
    }

    ui->directory_line->setStyleSheet(correct_directory_style);
}

bool MainWindow::correct_directory()
{
    QDir dir(directory_name);

    if(dir.exists())
    {
        return true;
    }

    return false;
}

void MainWindow::on_ChangeDirectoryButton_clicked()
{
    directory_name = QFileDialog::getExistingDirectory(this, tr("Choose directory"),directory_name,QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    showDirectory();
}


void MainWindow::on_directory_line_textEdited(const QString &arg1)
{
    directory_name=arg1;
    colorise_directory_line();
}

