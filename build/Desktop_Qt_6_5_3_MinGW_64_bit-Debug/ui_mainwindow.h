/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QPushButton *ChangeDirectoryButton;
    QLineEdit *directory_line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label;
    QFrame *line_4;
    QPushButton *Statement;
    QPushButton *Tests;
    QFrame *line_5;
    QLabel *label_2;
    QLineEdit *ContestName;
    QLineEdit *InputFile;
    QLabel *label_3;
    QLineEdit *OutputFile;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *MemoryLimit;
    QSpinBox *TimeLimit;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *label_9;
    QLineEdit *CheckerPath;
    QPushButton *ChooseCheckerFileButton;
    QLabel *label_10;
    QPlainTextEdit *CheckerCode;
    QLabel *label_11;
    QComboBox *CheckerLanguage;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *ChooseValidatorFileButton;
    QLineEdit *ValidatorPath;
    QLabel *label_15;
    QPlainTextEdit *ValidatorCode;
    QComboBox *ValidatorLanguage;
    QLabel *label_19;
    QFrame *line_8;
    QTableWidget *SolutionTable;
    QPushButton *AddSolutionButton;
    QPushButton *DeleteSolutionButton;
    QPushButton *AddTestCaseButton;
    QTableWidget *TestCaseTable;
    QTextEdit *Notes;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *TaskName;
    QPushButton *InsertImageInNotes;
    QLabel *label_24;
    QTextEdit *Legend;
    QPushButton *InsertImageInLegend;
    QTextEdit *OutputFormat;
    QLabel *label_25;
    QTextEdit *InputFormat;
    QFrame *line_9;
    QFrame *line_10;
    QLabel *label_27;
    QPushButton *DeleteTestCaseButton;
    QPushButton *CreateButton;
    QPushButton *GeneralInfo;
    QComboBox *Language;
    QLabel *label_12;
    QPushButton *Exit;
    QFrame *line_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1200, 800);
        MainWindow->setMinimumSize(QSize(1200, 763));
        MainWindow->setMaximumSize(QSize(1200, 800));
        QFont font;
        font.setPointSize(13);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/Resource/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setInputMethodHints(Qt::ImhNone);
        MainWindow->setAnimated(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1200, 800));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(970, -1, 3, 1000));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        ChangeDirectoryButton = new QPushButton(centralwidget);
        ChangeDirectoryButton->setObjectName("ChangeDirectoryButton");
        ChangeDirectoryButton->setGeometry(QRect(976, 520, 221, 41));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("document-open")));
        ChangeDirectoryButton->setIcon(icon1);
        ChangeDirectoryButton->setAutoExclusive(false);
        ChangeDirectoryButton->setFlat(false);
        directory_line = new QLineEdit(centralwidget);
        directory_line->setObjectName("directory_line");
        directory_line->setGeometry(QRect(976, 494, 221, 21));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        directory_line->setFont(font1);
        directory_line->setStyleSheet(QString::fromUtf8("color: rgb(51, 209, 122);"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(970, 570, 230, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(970, 484, 230, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(970, 0, 231, 41));
        QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(970, 40, 230, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        Statement = new QPushButton(centralwidget);
        Statement->setObjectName("Statement");
        Statement->setGeometry(QRect(976, 110, 220, 41));
        Statement->setAutoExclusive(false);
        Statement->setFlat(false);
        Tests = new QPushButton(centralwidget);
        Tests->setObjectName("Tests");
        Tests->setGeometry(QRect(976, 170, 221, 41));
        Tests->setAutoExclusive(false);
        Tests->setFlat(false);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(-3, 0, 2000, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(394, 7, 131, 20));
        label_2->setFont(font);
        ContestName = new QLineEdit(centralwidget);
        ContestName->setObjectName("ContestName");
        ContestName->setGeometry(QRect(520, 7, 300, 21));
        ContestName->setFont(font);
        InputFile = new QLineEdit(centralwidget);
        InputFile->setObjectName("InputFile");
        InputFile->setGeometry(QRect(130, 50, 300, 21));
        InputFile->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 50, 121, 20));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        OutputFile = new QLineEdit(centralwidget);
        OutputFile->setObjectName("OutputFile");
        OutputFile->setGeometry(QRect(130, 90, 300, 21));
        OutputFile->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 90, 121, 20));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 170, 121, 20));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 130, 121, 20));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(440, 130, 31, 17));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(440, 170, 31, 17));
        MemoryLimit = new QSpinBox(centralwidget);
        MemoryLimit->setObjectName("MemoryLimit");
        MemoryLimit->setGeometry(QRect(130, 170, 300, 21));
        MemoryLimit->setMinimum(1);
        MemoryLimit->setMaximum(16384);
        TimeLimit = new QSpinBox(centralwidget);
        TimeLimit->setObjectName("TimeLimit");
        TimeLimit->setGeometry(QRect(130, 130, 300, 21));
        TimeLimit->setMinimum(1);
        TimeLimit->setMaximum(32000);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(0, 210, 480, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(480, 0, 3, 860));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 209, 481, 31));
        label_9->setAlignment(Qt::AlignCenter);
        CheckerPath = new QLineEdit(centralwidget);
        CheckerPath->setObjectName("CheckerPath");
        CheckerPath->setGeometry(QRect(1, 238, 351, 29));
        CheckerPath->setReadOnly(false);
        ChooseCheckerFileButton = new QPushButton(centralwidget);
        ChooseCheckerFileButton->setObjectName("ChooseCheckerFileButton");
        ChooseCheckerFileButton->setGeometry(QRect(369, 238, 101, 31));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, 267, 66, 21));
        CheckerCode = new QPlainTextEdit(centralwidget);
        CheckerCode->setObjectName("CheckerCode");
        CheckerCode->setGeometry(QRect(1, 350, 468, 410));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 280, 481, 31));
        label_11->setAlignment(Qt::AlignCenter);
        CheckerLanguage = new QComboBox(centralwidget);
        CheckerLanguage->addItem(QString());
        CheckerLanguage->addItem(QString());
        CheckerLanguage->setObjectName("CheckerLanguage");
        CheckerLanguage->setGeometry(QRect(1, 310, 93, 29));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(490, 90, 481, 31));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(720, 67, 66, 31));
        ChooseValidatorFileButton = new QPushButton(centralwidget);
        ChooseValidatorFileButton->setObjectName("ChooseValidatorFileButton");
        ChooseValidatorFileButton->setGeometry(QRect(859, 40, 101, 31));
        ValidatorPath = new QLineEdit(centralwidget);
        ValidatorPath->setObjectName("ValidatorPath");
        ValidatorPath->setGeometry(QRect(491, 40, 348, 29));
        ValidatorPath->setReadOnly(false);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(490, 9, 481, 21));
        label_15->setAlignment(Qt::AlignCenter);
        ValidatorCode = new QPlainTextEdit(centralwidget);
        ValidatorCode->setObjectName("ValidatorCode");
        ValidatorCode->setGeometry(QRect(490, 160, 468, 280));
        ValidatorLanguage = new QComboBox(centralwidget);
        ValidatorLanguage->addItem(QString());
        ValidatorLanguage->addItem(QString());
        ValidatorLanguage->setObjectName("ValidatorLanguage");
        ValidatorLanguage->setGeometry(QRect(490, 120, 93, 31));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(490, 450, 481, 21));
        label_19->setAlignment(Qt::AlignCenter);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(480, 450, 490, 3));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        SolutionTable = new QTableWidget(centralwidget);
        if (SolutionTable->columnCount() < 1)
            SolutionTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        SolutionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        SolutionTable->setObjectName("SolutionTable");
        SolutionTable->setGeometry(QRect(492, 477, 465, 251));
        QFont font3;
        font3.setPointSize(8);
        SolutionTable->setFont(font3);
        SolutionTable->horizontalHeader()->setVisible(false);
        SolutionTable->horizontalHeader()->setCascadingSectionResizes(true);
        SolutionTable->horizontalHeader()->setDefaultSectionSize(234);
        SolutionTable->verticalHeader()->setVisible(false);
        AddSolutionButton = new QPushButton(centralwidget);
        AddSolutionButton->setObjectName("AddSolutionButton");
        AddSolutionButton->setGeometry(QRect(490, 735, 230, 25));
        DeleteSolutionButton = new QPushButton(centralwidget);
        DeleteSolutionButton->setObjectName("DeleteSolutionButton");
        DeleteSolutionButton->setGeometry(QRect(730, 735, 230, 25));
        AddTestCaseButton = new QPushButton(centralwidget);
        AddTestCaseButton->setObjectName("AddTestCaseButton");
        AddTestCaseButton->setGeometry(QRect(1, 730, 475, 31));
        TestCaseTable = new QTableWidget(centralwidget);
        if (TestCaseTable->columnCount() < 2)
            TestCaseTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TestCaseTable->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TestCaseTable->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        TestCaseTable->setObjectName("TestCaseTable");
        TestCaseTable->setGeometry(QRect(0, 0, 960, 721));
        TestCaseTable->horizontalHeader()->setDefaultSectionSize(479);
        TestCaseTable->verticalHeader()->setVisible(true);
        Notes = new QTextEdit(centralwidget);
        Notes->setObjectName("Notes");
        Notes->setGeometry(QRect(100, 560, 741, 200));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(0, 430, 91, 111));
        label_18->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(0, 73, 91, 201));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(0, 567, 91, 181));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(394, 32, 561, 31));
        label_22->setStyleSheet(QString::fromUtf8("color:rgb(119, 118, 123)"));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(0, 290, 91, 121));
        label_23->setAlignment(Qt::AlignCenter);
        TaskName = new QLineEdit(centralwidget);
        TaskName->setObjectName("TaskName");
        TaskName->setGeometry(QRect(100, 37, 281, 23));
        InsertImageInNotes = new QPushButton(centralwidget);
        InsertImageInNotes->setObjectName("InsertImageInNotes");
        InsertImageInNotes->setGeometry(QRect(845, 560, 120, 200));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("image-x-generic")));
        InsertImageInNotes->setIcon(icon2);
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(0, 37, 91, 21));
        label_24->setAlignment(Qt::AlignCenter);
        Legend = new QTextEdit(centralwidget);
        Legend->setObjectName("Legend");
        Legend->setGeometry(QRect(100, 70, 741, 209));
        InsertImageInLegend = new QPushButton(centralwidget);
        InsertImageInLegend->setObjectName("InsertImageInLegend");
        InsertImageInLegend->setGeometry(QRect(845, 70, 120, 209));
        InsertImageInLegend->setIcon(icon2);
        OutputFormat = new QTextEdit(centralwidget);
        OutputFormat->setObjectName("OutputFormat");
        OutputFormat->setGeometry(QRect(100, 425, 865, 120));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(0, 0, 91, 31));
        label_25->setAlignment(Qt::AlignCenter);
        InputFormat = new QTextEdit(centralwidget);
        InputFormat->setObjectName("InputFormat");
        InputFormat->setGeometry(QRect(100, 290, 865, 120));
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(970, 714, 230, 3));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(970, 220, 230, 3));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(975, 714, 221, 51));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/res/Resource/logo.svg")));
        label_27->setAlignment(Qt::AlignCenter);
        DeleteTestCaseButton = new QPushButton(centralwidget);
        DeleteTestCaseButton->setObjectName("DeleteTestCaseButton");
        DeleteTestCaseButton->setGeometry(QRect(482, 730, 479, 31));
        CreateButton = new QPushButton(centralwidget);
        CreateButton->setObjectName("CreateButton");
        CreateButton->setGeometry(QRect(976, 580, 221, 51));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("emblem-default")));
        CreateButton->setIcon(icon3);
        GeneralInfo = new QPushButton(centralwidget);
        GeneralInfo->setObjectName("GeneralInfo");
        GeneralInfo->setGeometry(QRect(976, 50, 220, 41));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setItalic(false);
        GeneralInfo->setFont(font4);
        GeneralInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 185, 103);\n"
"color: rgb(0, 0, 0);\n"
"font: 13pt;"));
        GeneralInfo->setAutoExclusive(false);
        GeneralInfo->setFlat(false);
        Language = new QComboBox(centralwidget);
        Language->addItem(QString());
        Language->addItem(QString());
        Language->setObjectName("Language");
        Language->setGeometry(QRect(100, 3, 281, 26));
        QFont font5;
        font5.setPointSize(12);
        Language->setFont(font5);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 481, 41));
        label_12->setAlignment(Qt::AlignCenter);
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(976, 650, 221, 51));
        Exit->setIcon(icon3);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(970, 640, 230, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Task Creator", nullptr));
        ChangeDirectoryButton->setText(QCoreApplication::translate("MainWindow", "Change directory", nullptr));
        directory_line->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Task menu", nullptr));
        Statement->setText(QCoreApplication::translate("MainWindow", "Statement", nullptr));
        Tests->setText(QCoreApplication::translate("MainWindow", "Tests", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contest name:", nullptr));
        ContestName->setText(QString());
        InputFile->setText(QCoreApplication::translate("MainWindow", "standart input", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Input file:", nullptr));
        OutputFile->setText(QCoreApplication::translate("MainWindow", "standart output", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Output file:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Memory limit:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Time limit:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "MB", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Checker", nullptr));
        ChooseCheckerFileButton->setText(QCoreApplication::translate("MainWindow", "Choose file", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "or", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "choose language and write code below", nullptr));
        CheckerLanguage->setItemText(0, QCoreApplication::translate("MainWindow", "C++", nullptr));
        CheckerLanguage->setItemText(1, QCoreApplication::translate("MainWindow", "Python", nullptr));

        label_13->setText(QCoreApplication::translate("MainWindow", "choose language and write code below", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "or", nullptr));
        ChooseValidatorFileButton->setText(QCoreApplication::translate("MainWindow", "Choose file", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Validator", nullptr));
        ValidatorCode->setPlainText(QString());
        ValidatorLanguage->setItemText(0, QCoreApplication::translate("MainWindow", "C++", nullptr));
        ValidatorLanguage->setItemText(1, QCoreApplication::translate("MainWindow", "Python", nullptr));

        label_19->setText(QCoreApplication::translate("MainWindow", "Solutions", nullptr));
        QTableWidgetItem *___qtablewidgetitem = SolutionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        AddSolutionButton->setText(QCoreApplication::translate("MainWindow", "Add solutions", nullptr));
        DeleteSolutionButton->setText(QCoreApplication::translate("MainWindow", "Delete selected solutions", nullptr));
        AddTestCaseButton->setText(QCoreApplication::translate("MainWindow", "Add tests files", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TestCaseTable->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Input file", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TestCaseTable->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Sample", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Output\n"
"format:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Legend:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Notes:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "For remove the caption under image (jpg only) remove \"\\caption ...\"  line", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Input\n"
"format:", nullptr));
        InsertImageInNotes->setText(QCoreApplication::translate("MainWindow", "Insert image", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Task name:", nullptr));
        InsertImageInLegend->setText(QCoreApplication::translate("MainWindow", "Insert image", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Language:", nullptr));
        label_27->setText(QString());
        DeleteTestCaseButton->setText(QCoreApplication::translate("MainWindow", "Delete selected tests", nullptr));
        CreateButton->setText(QCoreApplication::translate("MainWindow", "Create files", nullptr));
        GeneralInfo->setText(QCoreApplication::translate("MainWindow", "General info", nullptr));
        Language->setItemText(0, QCoreApplication::translate("MainWindow", "Russian", nullptr));
        Language->setItemText(1, QCoreApplication::translate("MainWindow", "English", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Formats and limits", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
