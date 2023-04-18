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
QLabel *tab1Label;
QPushButton *tab2Button;
QLabel *tab3Label;
QPushButton *tab4Button;
QVBoxLayout *homePageLayout;

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
/*private slots:
void onSignupButtonClicked();
void onSignupSubmitButtonClicked();
void onLoginButtonClicked();*/
};

#endif // VIEW_H
