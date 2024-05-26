#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    showMenu();
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

void MainWindow::showMenu()
{
    HideMenuElements();

    switch(menu_id)
    {
    case 0: //General info
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->line_6->show();
        ui->line_7->show();

        ui->ContestName->show();
        ui->InputFile->show();
        ui->OutputFile->show();
        ui->MemoryLimit->show();
        ui->TimeLimit->show();
        ui->CheckerLanguage->show();
        ui->CheckerFilename->show();
        ui->CheckerPath->show();
        ui->ChooseCheckerFileButton->show();
        ui->CheckerCode->show();
        break;

    case 1:
        break;


    case 3:
        break;

    case 4:
        break;

    default:

        break;
    }
}

void MainWindow::HideMenuElements()
{
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->label_10->hide();
    ui->label_11->hide();
    ui->label_12->hide();
    ui->line_6->hide();
    ui->line_7->hide();

    ui->ContestName->hide();
    ui->InputFile->hide();
    ui->OutputFile->hide();
    ui->MemoryLimit->hide();
    ui->TimeLimit->hide();
    ui->CheckerLanguage->hide();
    ui->CheckerFilename->hide();
    ui->CheckerPath->hide();
    ui->ChooseCheckerFileButton->hide();
     ui->CheckerCode->hide();
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


void MainWindow::on_GeneralInfo_clicked()
{
    if(menu_id==0)
        return;

    menu_id=0;
    showMenu();
}


void MainWindow::on_Statement_clicked()
{
    if(menu_id==1)
        return;

    menu_id=1;
    showMenu();
}


void MainWindow::on_Validator_clicked()
{
    if(menu_id==3)
        return;

    menu_id=3;
}


void MainWindow::on_Tests_clicked()
{
    if(menu_id==4)
        return;

    menu_id=4;
    showMenu();
}


void MainWindow::on_Solutions_clicked()
{
    if(menu_id==5)
        return;

    menu_id=5;
    showMenu();
}


void MainWindow::on_ChooseCheckerFileButton_clicked()
{
    checker_path=QFileDialog::getOpenFileName(this,tr("Choose checker file"),checker_path, tr("Checker Files (*.cpp *.py)"));
    ui->CheckerPath->setText(checker_path);
}

