#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QCheckBox>

#include "directory_script.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Constructor and destructor
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //MethodsFile
    void showDirectory();
    void colorise_line(QLineEdit *&, bool);
    bool correct_directory();
    QString insert_image(const QString&img);
    void file_out(const QString& dir,const QString& data);
    void image_detect(const QString& text, const QString& new_dir);
    //Menu
    void showMenu();
    void HideMenuElements();

    //Checkers
    bool check_pathes();
    bool correct_validator();
    bool correct_checker();
    bool correct_solutions();
    bool check_general_info();
    bool check_statement();

    //Methods
    QString seconds_rus(int);
    QString numb(int t);
    //Fields
    static   QString directory_name;
private slots:


    void on_ChangeDirectoryButton_clicked();

    void on_directory_line_textChanged(const QString &arg1);

    //Menu
    void on_GeneralInfo_clicked();

    void on_Statement_clicked();

    void on_Tests_clicked();

    void on_ChooseCheckerFileButton_clicked();

    void on_AddSolutionButton_clicked();

    void on_ValidatorPath_textChanged(const QString &arg1);

    void on_CheckerPath_textChanged(const QString &arg1);

    void on_ChooseValidatorFileButton_clicked();

    void on_DeleteSolutionButton_clicked();

    void on_InsertImageInLegend_clicked();

    void on_InsertImageInNotes_clicked();

    void on_AddTestCaseButton_clicked();

    void on_DeleteTestCaseButton_clicked();

    void on_CreateButton_clicked();

    void on_Language_currentIndexChanged(int index);

    void on_Exit_clicked();

private:
    //Fields
    Ui::MainWindow *ui;

    //Main UI
    QString checker_path,validator_path;
    int8_t menu_id=0;
    int image_num=0;
    std::map<QString,QString>image;

    //Style
    const QString incorrect_directory_style="color: rgb(224, 27, 36);font: 11pt "+QString::number(42)+"Segoe UI"+QString::number(42);
    const QString correct_directory_style="color: rgb(51, 209, 122);font: 11pt "+QString::number(42)+"Segoe UI"+QString::number(42);
    const QString choosed_button ="background-color: rgb(45, 185, 103);color: rgb(0, 0, 0);font: 13pt;";
    const QString default_button ="font:13pt;";

    //Statements
    QString task_name[2],legend[2],inputFormat[2],outputFormat[2],notes[2],contest_name[2];
    int last_language=0;
};
#endif // MAINWINDOW_H
