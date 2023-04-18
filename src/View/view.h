#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTabWidget>
#include <QObject>
#include <QMainWindow>


class View : public QMainWindow
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);

private:
// Page de login
QWidget loginPage;
QLabel *usernameLabel;
QLineEdit *usernameLineEdit;
QLabel *passwordLabel;
QLineEdit *passwordLineEdit;
QPushButton *loginButton;
QLabel *signupLabel;
QPushButton *signupButton;
QVBoxLayout *loginLayout;

// Page d'accueil
QWidget homePage;
QTabWidget *tabWidget;
QWidget *moviesTab;
QWidget *seriesTab;
QWidget *playlistTab;
QWidget *userTab;

//Onglet film
QPushButton *movie1Button;
QPushButton *movie2Button;
QPushButton *movie3Button;
QPushButton *movie4Button;
QVBoxLayout *moviesTabLayout;

//Onglet série
QPushButton *series1Button;
QPushButton *series2Button;
QPushButton *series3Button;
QPushButton *series4Button;
QVBoxLayout *seriesTabLayout;

//Onglet playlist
QPushButton *favPlaylistButton;
QPushButton *actionPlaylistButton;
QPushButton *lovePlaylistButton;
QVBoxLayout *playlistTabLayout;

//Onglet user
QPushButton *userButtonLogout;
QPushButton *changeUsernameButton;
QPushButton *changePasswordButton;
QVBoxLayout *homePageLayout;
QVBoxLayout *userTabLayout;
QHBoxLayout *buttonsLayout;

// Page de sign up
QWidget signupPage;
QLabel *signupUsernameLabel;
QLineEdit *signupUsernameLineEdit;
QLabel *signupPasswordLabel;
QLineEdit *signupPasswordLineEdit;
QPushButton *signupSubmitButton;
QVBoxLayout *signupLayout;

void createLoginPage();
void createHomePage();
void createSignupPage();
};

#endif // VIEW_H
