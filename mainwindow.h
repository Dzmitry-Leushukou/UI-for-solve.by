#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTableWidgetItem>
#include <QMessageBox>

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

    //Methods
    void showDirectory();
    void colorise_line(QLineEdit *&, bool);
    bool correct_directory();
    QString insert_image(const QString&img);

    //Menu
    void showMenu();
    void HideMenuElements();

    //Checkers
    bool check_pathes();
    bool correct_validator();
    bool correct_checker();
    bool correct_solutions();

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

    void on_InsertImageInTutorial_clicked();

    void on_AddTestCaseButton_clicked();

    void on_DeleteTestCaseButton_clicked();

    void on_CreateButton_clicked();

private:
    //Fields
    Ui::MainWindow *ui;

    //Main UI
    QString directory_name,checker_path;
    int8_t menu_id=0;
    int image_num=0;
    std::map<QString,QString>image;

    //Style
    const QString incorrect_directory_style="color: rgb(224, 27, 36);";
    const QString correct_directory_style="color: rgb(51, 209, 122);";
    const QString choosed_button ="background-color: rgb(45, 185, 103);color: rgb(0, 0, 0);font: 13pt;";
    const QString default_button ="font:13pt;";
};
#endif // MAINWINDOW_H
