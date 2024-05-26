#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->SolutionTable->setColumnCount(1);
    ui->SolutionTable->setColumnWidth(0, 470);
    ui->SolutionTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    showMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showDirectory()
{
    ui->directory_line->setText(directory_name);

    colorise_line(ui->directory_line,correct_directory());
}

void MainWindow::colorise_line(QLineEdit *&line, bool ok)
{
    if(!ok)
    {
       line->setStyleSheet(incorrect_directory_style);
        return;
    }

    line->setStyleSheet(correct_directory_style);
}


bool MainWindow::correct_directory()
{
    QDir dir(directory_name);

    if(dir.exists()&&!QFileInfo(directory_name).isFile())
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
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->label_16->show();
        ui->label_19->show();
        ui->line_6->show();
        ui->line_7->show();
        ui->line_8->show();

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
        ui->ValidatorLanguage->show();
        ui->ValidatorFilename->show();
        ui->ValidatorPath->show();
        ui->ChooseValidatorFileButton->show();
        ui->ValidatorCode->show();
        ui->SolutionTable->show();
        ui->AddSolutionButton->show();
        ui->DeleteSolutionButton->show();
        break;

    case 1://Statement

        ui->Legend->show();
        ui->Language->show();
        ui->TaskName->show();
        ui->InputFormat->show();
        ui->OutputFormat->show();
        ui->Notes->show();
        ui->Tutorial->show();
        ui->InsertImageInLegend->show();
        ui->InsertImageInNotes->show();
        ui->InsertImageInTutorial->show();
        ui->label_17->show();
        ui->label_18->show();
        ui->label_20->show();
        ui->label_21->show();
        ui->label_22->show();
        ui->label_23->show();
        ui->label_24->show();
        ui->label_25->show();
        ui->label_26->show();
        break;
    default:
        ui->AddTestCaseButton->show();
        ui->TestCaseTable->show();
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
    ui->label_13->hide();
    ui->label_14->hide();
    ui->label_15->hide();
    ui->label_16->hide();
    ui->label_17->hide();
    ui->label_18->hide();
    ui->label_19->hide();
    ui->label_20->hide();
    ui->label_21->hide();
    ui->label_22->hide();
    ui->label_23->hide();
    ui->label_24->hide();
    ui->label_25->hide();
    ui->label_26->hide();
    ui->line_6->hide();
    ui->line_7->hide();
    ui->line_8->hide();

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
    ui->ValidatorLanguage->hide();
    ui->ValidatorFilename->hide();
    ui->ValidatorPath->hide();
    ui->ChooseValidatorFileButton->hide();
    ui->ValidatorCode->hide();
    ui->SolutionTable->hide();
    ui->AddSolutionButton->hide();
    ui->DeleteSolutionButton->hide();
    ui->AddTestCaseButton->hide();
    ui->TestCaseTable->hide();
    ui->Legend->hide();
    ui->Language->hide();
    ui->TaskName->hide();
    ui->InputFormat->hide();
    ui->OutputFormat->hide();
    ui->Notes->hide();
    ui->Tutorial->hide();
    ui->InsertImageInLegend->hide();
    ui->InsertImageInNotes->hide();
    ui->InsertImageInTutorial->hide();
}

void MainWindow::on_ChangeDirectoryButton_clicked()
{
    directory_name = QFileDialog::getExistingDirectory(this, tr("Choose directory"),"",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    showDirectory();
}


void MainWindow::on_directory_line_textChanged(const QString &arg1)
{
    directory_name=arg1;
    showDirectory();
}


void MainWindow::on_GeneralInfo_clicked()
{
    if(menu_id==0)
        return;

    ui->Statement->setStyleSheet(default_button);
    ui->Tests->setStyleSheet(default_button);
    ui->GeneralInfo->setStyleSheet(choosed_button);
    menu_id=0;
    showMenu();
}


void MainWindow::on_Statement_clicked()
{
    if(menu_id==1)
        return;

    ui->Statement->setStyleSheet(choosed_button);
    ui->GeneralInfo->setStyleSheet(default_button);
    ui->Tests->setStyleSheet(default_button);
    menu_id=1;
    showMenu();
}



void MainWindow::on_Tests_clicked()
{
    if(menu_id==2)
        return;

    menu_id=2;
    ui->Statement->setStyleSheet(default_button);
    ui->GeneralInfo->setStyleSheet(default_button);
    ui->Tests->setStyleSheet(choosed_button);
    showMenu();
}



void MainWindow::on_ChooseCheckerFileButton_clicked()
{
    checker_path=QFileDialog::getOpenFileName(this,tr("Choose checker file"),"", tr("Checker Files (*.cpp *.py)"));
    ui->CheckerPath->setText(checker_path);
}




void MainWindow::on_AddSolutionButton_clicked()
{
    QStringList fileNames;
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFiles);
    if (dialog.exec())
        fileNames = dialog.selectedFiles();

    for(auto& i:fileNames)
    {
        ui->SolutionTable->setRowCount(ui->SolutionTable->rowCount()+1);
        QTableWidgetItem *it1=new QTableWidgetItem();
        it1->setText(i);
        ui->SolutionTable->setItem(ui->SolutionTable->rowCount()-1, 0, it1);
    }
}


void MainWindow::on_ValidatorPath_textChanged(const QString &arg1)
{
    colorise_line(ui->ValidatorPath,QFile(arg1).exists()&&QFileInfo(arg1).isFile());
}


void MainWindow::on_CheckerPath_textChanged(const QString &arg1)
{
    colorise_line(ui->CheckerPath,QFile(arg1).exists()&&QFileInfo(arg1).isFile());
}


void MainWindow::on_ChooseValidatorFileButton_clicked()
{
    ui->ValidatorPath->setText(QFileDialog::getOpenFileName(this,tr("Choose checker file"),"", tr("Checker Files (*.cpp *.py)")));
}


void MainWindow::on_DeleteSolutionButton_clicked()
{
    QModelIndexList selectedRows = ui->SolutionTable->selectionModel()->selectedRows();
    for(int i = selectedRows.count() - 1; i >= 0; --i)
        ui->SolutionTable->removeRow(selectedRows.at(i).row());

}

