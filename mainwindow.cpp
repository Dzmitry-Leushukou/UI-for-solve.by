#include "mainwindow.h"
#include "./ui_mainwindow.h"

QString MainWindow::directory_name="";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMaximumHeight(763);

    ui->SolutionTable->setColumnCount(1);
    ui->SolutionTable->setColumnWidth(0, 470);
    //ui->SolutionTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //960
    ui->TestCaseTable->setColumnWidth(0, 446*2-64);
    ui->TestCaseTable->setColumnWidth(1, 65);
    //ui->TestCaseTable-

    showMenu();
}

MainWindow::~MainWindow()
{
    std::cout<<directory_name.toStdString();
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

QString MainWindow::insert_image(const QString &img)
{
    QString local_name="image_"+QString::number(image_num++)+".jpg";
    image[local_name]=img;
    QString res="\n\\";
    res+="begin{figure}[h]\n\\";
    res+="centering\n\\";
    res+="includegraphics[width=0.5\\";
    res+="textwidth]{\\";
    res+="basepath ";
    res+=local_name;
    res+="}\n\\";
    res+="caption{Description}\n\\";
    res+="end{figure}\n";
    return res;
}

void MainWindow::file_out(const QString &dir, const QString &data)
{
    QFile file(dir);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << data;
    file.close();
}

void MainWindow::image_detect(const QString &text, const QString& dir)
{
    QString s="\\";
    s+="includegraphics[width=0.5\\";
    s+="textwidth]{\\";
    s+="basepath ";
    int index = 0;
    while ((index = text.indexOf(s, index)) != -1) {
        index += s.length();
        QString image_name;
        while(text[index]!='}')
        {
            image_name+=text[index];
            index++;
        }

        QFile::copy(image[image_name], dir+image_name);
    }
}

void MainWindow::showMenu()
{
    HideMenuElements();

    switch(menu_id)
    {
    case 0: //General info

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
        //ui->label_16->show();
        ui->label_19->show();
        ui->line_6->show();
        ui->line_7->show();
        ui->line_8->show();


        ui->InputFile->show();
        ui->OutputFile->show();
        ui->MemoryLimit->show();
        ui->TimeLimit->show();
        ui->CheckerLanguage->show();
        //ui->CheckerFilename->show();
        ui->CheckerPath->show();
        ui->ChooseCheckerFileButton->show();
        ui->CheckerCode->show();
        ui->ValidatorLanguage->show();
        //ui->ValidatorFilename->show();
        ui->ValidatorPath->show();
        ui->ChooseValidatorFileButton->show();
        ui->ValidatorCode->show();
        ui->SolutionTable->show();
        ui->AddSolutionButton->show();
        ui->DeleteSolutionButton->show();
        break;

    case 1://Statement
        ui->ContestName->show();
        ui->Legend->show();
        ui->Language->show();
        ui->TaskName->show();
        ui->InputFormat->show();
        ui->OutputFormat->show();
        ui->Notes->show();
        //ui->Tutorial->show();
        ui->InsertImageInLegend->show();
        ui->InsertImageInNotes->show();
        //ui->InsertImageInTutorial->show();
        //ui->label_17->show();
        ui->label_2->show();
        ui->label_18->show();
        ui->label_20->show();
        ui->label_21->show();
        ui->label_22->show();
        ui->label_23->show();
        ui->label_24->show();
        ui->label_25->show();
        //ui->label_26->show();
        break;
    default:
        ui->AddTestCaseButton->show();
        ui->TestCaseTable->show();
        ui->DeleteTestCaseButton->show();
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
    //ui->label_16->hide();
    //ui->label_17->hide();
    ui->label_18->hide();
    ui->label_19->hide();
    ui->label_20->hide();
    ui->label_21->hide();
    ui->label_22->hide();
    ui->label_23->hide();
    ui->label_24->hide();
    ui->label_25->hide();
    //ui->label_26->hide();
    ui->line_6->hide();
    ui->line_7->hide();
    ui->line_8->hide();

    ui->ContestName->hide();
    ui->InputFile->hide();
    ui->OutputFile->hide();
    ui->MemoryLimit->hide();
    ui->TimeLimit->hide();
    ui->CheckerLanguage->hide();
    //ui->CheckerFilename->hide();
    ui->CheckerPath->hide();
    ui->ChooseCheckerFileButton->hide();
    ui->CheckerCode->hide();
    ui->ValidatorLanguage->hide();
    //ui->ValidatorFilename->hide();
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
    //ui->Tutorial->hide();
    ui->InsertImageInLegend->hide();
    ui->InsertImageInNotes->hide();
    //ui->InsertImageInTutorial->hide();
    ui->DeleteTestCaseButton->hide();
}

bool MainWindow::check_pathes()
{
    if(ui->directory_line->text()!="")
    {
        if(ui->directory_line->styleSheet()==correct_directory_style&&(QFile(ui->directory_line->text()).exists()&&!QFileInfo(ui->directory_line->text()).isFile()))
        {
            return correct_validator()&& correct_checker()&&correct_solutions();
        }
    }
    QMessageBox::warning(this,"Validator path error", "Incorrect direction path");
    return false;
    //4return true;
}

bool MainWindow::correct_validator()
{
    if(ui->ValidatorPath->text()!="")
    {
        if(ui->ValidatorPath->styleSheet()==correct_directory_style&&(QFile(ui->ValidatorPath->text()).exists()&&QFileInfo(ui->ValidatorPath->text()).isFile()))
        {
            validator_path=ui->ValidatorPath->text();
            return true;
        }
        QMessageBox::warning(this,"Validator path error", "Incorrect validator path");
        return false;

    }

    QString ext="py";
    if(ui->ValidatorLanguage->currentText()=="C++")
    {
        ext="cpp";
    }
    validator_path="validator."+ext;
    QFile file("validator."+ext);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << ui->ValidatorCode->toPlainText();
        file.close();
    }

    return true;

}

bool MainWindow::correct_checker()
{
    if(ui->CheckerPath->text()!="")
    {
        if(ui->CheckerPath->styleSheet()==correct_directory_style&&(QFile(ui->CheckerPath->text()).exists()&&QFileInfo(ui->CheckerPath->text()).isFile()))
        {
            checker_path=ui->CheckerPath->text();
            return true;
        }
        QMessageBox::warning(this,"Checker path error", "Incorrect checker path");
        return false;

    }

    QString ext="py";
    if(ui->CheckerLanguage->currentText()=="C++")
    {
        ext="cpp";
    }
    checker_path="checker."+ext;
    QFile file("checker."+ext);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << ui->CheckerCode->toPlainText();
        file.close();
    }
    return true;
}

bool MainWindow::correct_solutions()
{
    for(int i=0;i<ui->SolutionTable->rowCount();i++)
    {
        if(!QFile(ui->SolutionTable->    item(i,0)->text()).exists()||!QFileInfo(ui->SolutionTable->    item(i,0)->text()).isFile())
        {
            QMessageBox::warning(this,"Solutions path error", "Incorrect path:"+ui->SolutionTable-> item(i,0)->text());
            return false;
        }
    }
    return true;
}

bool MainWindow::check_general_info()
{
    return true;
    QString str=ui->ContestName->text();

    if(str=="")
    {
        QMessageBox::warning(this,"Error","Contest name must be filled in");
        return false;
    }

    str=ui->InputFile->text();
    if(str=="")
    {
        QMessageBox::warning(this,"Error","Input file must be filled in");
        return false;
    }

    str=ui->OutputFile->text();
    if(str=="")
    {
        QMessageBox::warning(this,"Error","Output file must be filled in");
        return false;
    }

    return true;
}

bool MainWindow::check_statement()
{
    QString str=ui->ContestName->text();

    if(str=="")
    {
        QMessageBox::warning(this,"Error","Contest name must be filled in");
        return false;
    }

    str=ui->InputFile->text();
    if(str=="")
    {
        QMessageBox::warning(this,"Error","Input file must be filled in");
        return false;
    }

    str=ui->OutputFile->text();
    if(str=="")
    {
        QMessageBox::warning(this,"Error","Output file must be filled in");
        return false;
    }

    return true;
}

QString MainWindow::seconds_rus(int ms)
{
    int wholeSeconds = ms%1000;
    if(wholeSeconds==0)
        wholeSeconds=ms/1000;
    else
        return "секунд";
    if (wholeSeconds % 10 == 1 && wholeSeconds % 100 != 11) {
        return "секунда";
    } else if ((wholeSeconds % 10 >= 2 && wholeSeconds % 10 <= 4) && (wholeSeconds % 100 < 10 || wholeSeconds % 100 >= 20)) {
        return "секунды";
    } else {
        return "секунд";
    }
}

QString MainWindow::numb(int t)
{
    QString n=QString::number(t),res,b;
    while(n.size()!=5)
        n="0"+n;
    for(int i=0;i<2;i++)
        res+=n[i];
    res=QString::number(res.toInt());

    bool have=false;
    for(int i=2;i<5;i++)
    {
        b+=n[i];
        if(n[i]!='0')
            have=true;
    }

    if(have)
        res+="."+b;
    //qDebug()<<res;
    return res;
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

void MainWindow::on_InsertImageInLegend_clicked()
{
    ui->Legend->setText(ui->Legend->toPlainText()+insert_image(QFileDialog::getOpenFileName(this,tr("Choose image file"),"", tr("Image (*.jpg)"))));
}

void MainWindow::on_InsertImageInNotes_clicked()
{
    ui->Notes->setText(ui->Notes->toPlainText()+insert_image(QFileDialog::getOpenFileName(this,tr("Choose image file"),"", tr("Image (*.jpg)"))));
}

void MainWindow::on_AddTestCaseButton_clicked()
{
    QStringList fileNames;
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFiles);
    if (dialog.exec())
        fileNames = dialog.selectedFiles();

    for(auto& i:fileNames)
    {
        ui->TestCaseTable->setRowCount(ui->TestCaseTable->rowCount()+1);
        QTableWidgetItem *it1=new QTableWidgetItem();
        it1->setText(i);
        ui->TestCaseTable->setItem(ui->TestCaseTable->rowCount()-1, 0, it1);
        /*
        QTableWidgetItem * it=new QTableWidgetItem();
        it->setCheckState(Qt::Unchecked);
        it->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        it->setText("");
        ui->TestCaseTable->setItem(ui->TestCaseTable->rowCount()-1,1,it);
*/
        QCheckBox* checkBox = new QCheckBox;
        checkBox->setStyleSheet("margin-left: 25%; margin-right: 50%;");
        ui->TestCaseTable->setCellWidget(ui->TestCaseTable->rowCount()-1,1, checkBox);

    }

}

void MainWindow::on_DeleteTestCaseButton_clicked()
{
    QModelIndexList selectedRows = ui->TestCaseTable->selectionModel()->selectedRows();
    for(int i = selectedRows.count() - 1; i >= 0; --i)
        ui->TestCaseTable->removeRow(selectedRows.at(i).row());
}

void MainWindow::on_CreateButton_clicked()
{

    if(!check_pathes()||!check_general_info())//||!check_tests()||!check_statement())
    {
        return;
    }

    for(int i=0;i<ui->TestCaseTable->rowCount();i++)
        if(!QFile(ui->TestCaseTable->    item(i,0)->text()).exists()||!QFileInfo(ui->TestCaseTable->    item(i,0)->text()).isFile())
        {
            QMessageBox::warning(this,"Test path error", "Incorrect path:"+ui->TestCaseTable-> item(i,0)->text());
            return;
        }

    //qDebug()<<"Create directory";
    create_directory(ui->directory_line->text().toStdString());

    QString dir="\\statement-sections\\";
    if(ui->Language->currentText()=="Russian")
        dir+="russian";
    else
        dir+="english";

    dir+="\\";
    QString data=ui->ContestName->text();
    file_out(directory_name+dir+"contest_name.txt",data);

    int tl=ui->TimeLimit->value();
    QString ch=numb(tl);

    while(ch.back()=='0')
        ch.erase(ch.begin()+ch.size()-1);
    if(ui->Language->currentText()=="English"){
        data=ui->InputFile->text()+"\n"+ui->OutputFile->text()+"\n"+ch+" ";
    if(ch=="1")
        data+="second\n";
    else  data+="seconds\n";
    data+=QString::number(ui->MemoryLimit->value())+ "";
    if(ui->MemoryLimit->value()==1)
      data+=" megabyte";
    else data+=" megabytes";
        }
    else
    {
        data=ui->InputFile->text()+"\n"+ui->OutputFile->text()+"\n"+ch+" ";

            data+=seconds_rus(tl);
        data+="\n"+QString::number(ui->MemoryLimit->value());
        int megabytes=ui->MemoryLimit->value();
        if (megabytes % 10 == 1 && megabytes % 100 != 11) {
           data+= " мегабайт";
        } else if ((megabytes % 10 >= 2 && megabytes % 10 <= 4) &&
                   (megabytes % 100 < 10 || megabytes % 100 >= 20)) {
            data+= " мегабайта";
        } else {
            data+= " мегабайт";
        }

    }

    file_out(directory_name+dir+"restricts.txt",data);
    file_out(directory_name+dir+"name.tex", ui->TaskName->text());
    file_out(directory_name+dir+"output.tex", ui->OutputFormat->toPlainText());
    file_out(directory_name+dir+"input.tex", ui->InputFormat->toPlainText());

    if(ui->Notes->toPlainText()!="")
    {
        image_detect(ui->Notes->toPlainText(),directory_name+dir);
        file_out(directory_name+dir+"notes.tex",ui->Notes->toPlainText());
    }

        image_detect(ui->Legend->toPlainText(),directory_name+dir);
        file_out(directory_name+dir+"legend.tex",ui->Legend->toPlainText());


    //Samples
    int j=1;
    QString ext=".0";


    for(int i=0;i<ui->TestCaseTable->rowCount();i++)
    {

        QTableWidgetItem* cellItem = ui->TestCaseTable->item(i, 1);
        QCheckBox* checkBoxInCell = qobject_cast<QCheckBox*>(ui->TestCaseTable->cellWidget(i, 1));

        if(checkBoxInCell->isChecked())
        {
            if(j>=9)
                ext="";
            QFile::copy(ui->TestCaseTable->    item(i,0)->text(),directory_name+dir+"example"+ext+QString::number(j));

            j++;
        }
    }


    //Other language
    dir="\\statement-sections\\";
    if(ui->Language->currentText()!="Russian")
        dir+="russian",on_Language_currentIndexChanged(0);
    else
        dir+="english",on_Language_currentIndexChanged(1);

    dir+="\\";
    data=ui->ContestName->text();
    file_out(directory_name+dir+"contest_name.txt",data);

    tl=ui->TimeLimit->value();
    ch=numb(tl);

    while(ch.back()=='0')
        ch.erase(ch.begin()+ch.size()-1);
    if(ui->Language->currentText()!="English"){
        data=ui->InputFile->text()+"\n"+ui->OutputFile->text()+"\n"+ch+" ";
        if(ch=="1")
            data+="second\n";
        else  data+="seconds\n";
        data+=QString::number(ui->MemoryLimit->value())+ "";
        if(ui->MemoryLimit->value()==1)
            data+=" megabyte";
        else data+=" megabytes";
    }
    else
    {
        data=ui->InputFile->text()+"\n"+ui->OutputFile->text()+"\n"+ch+" ";

        data+=seconds_rus(tl);
        data+="\n"+QString::number(ui->MemoryLimit->value());
        int megabytes=ui->MemoryLimit->value();
        if (megabytes % 10 == 1 && megabytes % 100 != 11) {
            data+= " мегабайт";
        } else if ((megabytes % 10 >= 2 && megabytes % 10 <= 4) &&
                   (megabytes % 100 < 10 || megabytes % 100 >= 20)) {
            data+= " мегабайта";
        } else {
            data+= " мегабайт";
        }

    }
    file_out(directory_name+dir+"restricts.txt",data);
    file_out(directory_name+dir+"name.tex", ui->TaskName->text());
    file_out(directory_name+dir+"output.tex", ui->OutputFormat->toPlainText());
    file_out(directory_name+dir+"input.tex", ui->InputFormat->toPlainText());

    if(ui->Notes->toPlainText()!="")
    {
        image_detect(ui->Notes->toPlainText(),directory_name+dir);
        file_out(directory_name+dir+"notes.tex",ui->Notes->toPlainText());
    }

    image_detect(ui->Legend->toPlainText(),directory_name+dir);
    file_out(directory_name+dir+"legend.tex",ui->Legend->toPlainText());

    //Samples
    j=1;
    ext=".0";


    for(int i=0;i<ui->TestCaseTable->rowCount();i++)
    {
        QTableWidgetItem* cellItem = ui->TestCaseTable->item(i, 1);
        QCheckBox* checkBoxInCell = qobject_cast<QCheckBox*>(ui->TestCaseTable->cellWidget(i, 1));

        if(checkBoxInCell->isChecked())
        {
            if(j>=9)
                ext="";
            QFile::copy(ui->TestCaseTable->    item(i,0)->text(),directory_name+dir+"example"+ext+QString::number(j));

            j++;
        }
    }

    on_Language_currentIndexChanged((last_language+1)%2);

    //Tests
    dir="\\tests\\";
    QString ext1="0";
    for(int i=0;i<ui->TestCaseTable->rowCount();i++)
    {
        if(i>=9)
            ext1="";
        QFile::copy(ui->TestCaseTable->    item(i,0)->text(),directory_name+dir+ext1+QString::number(i+1));
    }

    QFile::copy(checker_path, directory_name+"\\checker.cpp");
    QFile::copy(validator_path, directory_name+"\\files\\"+"validator.cpp");
    QFile::copy(checker_path, directory_name+"\\files\\"+"checker.cpp");

    //Solution
    for(int i=0;i<ui->SolutionTable->rowCount();i++)
    {
        QFileInfo fileInfo(ui->SolutionTable->item(i,0)->text());
        QString fileName = fileInfo.fileName();
        QFile::copy(ui->SolutionTable->item(i,0)->text(), directory_name+"\\solutions\\"+fileName);
    }

    QMessageBox::information(this,"Task creator","Task files was created");


}

void MainWindow::on_Language_currentIndexChanged(int index)
{
    if(last_language!=index)
    {
        task_name[last_language]=ui->TaskName->text();
        legend[last_language]=ui->Legend->toPlainText();
        inputFormat[last_language]=ui->InputFormat->toPlainText();
        outputFormat[last_language]=ui->OutputFormat->toPlainText();
        notes[last_language]=ui->Notes->toPlainText();
        contest_name[last_language]=ui->ContestName->text();
    }
    last_language=index;
    ui->TaskName->setText(task_name[index]);
    ui->Legend->setText(legend[index]);
    ui->InputFormat->setText(inputFormat[index]);
    ui->OutputFormat->setText(outputFormat[index]);
    ui->Notes->setText(notes[index]);
    ui->ContestName->setText(contest_name[index]);

}


void MainWindow::on_Exit_clicked()
{
    QCoreApplication::quit();
}

