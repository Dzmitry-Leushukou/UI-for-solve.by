#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

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
    void colorise_directory_line();
    bool correct_directory();
    //Menu
    void showMenu();
    void HideMenuElements();

private slots:


    void on_ChangeDirectoryButton_clicked();

    void on_directory_line_textEdited(const QString &arg1);

    //Menu
    void on_GeneralInfo_clicked();

    void on_Statement_clicked();

    void on_Checker_clicked();

    void on_Validator_clicked();

    void on_Tests_clicked();

    void on_Solutions_clicked();

private:
    //Fields
    Ui::MainWindow *ui;

    //Main UI
    QString directory_name;
    int8_t menu_id=0;

    //Style
    const QString incorrect_directory_style="color: rgb(224, 27, 36);";
    const QString correct_directory_style="color: rgb(51, 209, 122);";
};
#endif // MAINWINDOW_H
