#include "src/View/connection.h"
#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTabWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    connection w;
    w.show();
    /*QApplication app(argc, argv);

    // Page de login
    QWidget loginPage;
    loginPage.setWindowTitle("Log in");

    QLabel *usernameLabel = new QLabel("Username:");
    QLineEdit *usernameLineEdit = new QLineEdit;
    QLabel *passwordLabel = new QLabel("Password:");
    QLineEdit *passwordLineEdit = new QLineEdit;
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    QPushButton *loginButton = new QPushButton("Log In");
    QLabel *signupLabel = new QLabel("Don't have an account?");

    QPushButton *signupButton = new QPushButton("Sign Up");

    QVBoxLayout *loginLayout = new QVBoxLayout;
    loginLayout->addWidget(usernameLabel);
    loginLayout->addWidget(usernameLineEdit);
    loginLayout->addWidget(passwordLabel);
    loginLayout->addWidget(passwordLineEdit);
    loginLayout->addWidget(loginButton);
    loginLayout->addWidget(signupLabel);
    loginLayout->addWidget(signupButton);
    loginPage.setLayout(loginLayout);

    // Page d'accueil
    QWidget homePage;
    homePage.setWindowTitle("Home");

    // Création du widget QTabWidget
    QTabWidget tabWidget(&homePage);

    // Création des onglets
    QWidget moviesTab;
    QWidget seriesTab;
    QWidget playlistTab;
    QWidget userTab;

    // Création du contenu de chaque onglet
    QLabel *tab1Label = new QLabel("Contenu de l'onglet 1", &moviesTab);
    QPushButton *tab2Button = new QPushButton("Bouton de l'onglet 2", &seriesTab);
    QLabel *tab3Label = new QLabel("Contenu de l'onglet 3", &playlistTab);
    QPushButton *tab4Button = new QPushButton("Bouton de l'onglet 4", &userTab);

    // Ajout des onglets au widget QTabWidget
    tabWidget.addTab(&moviesTab, "Movies");
    tabWidget.addTab(&seriesTab, "Series");
    tabWidget.addTab(&playlistTab, "Playlist");
    tabWidget.addTab(&userTab, "User");

    // Création du layout pour la page d'accueil
    QVBoxLayout homePageLayout(&homePage);

    // Ajout du widget QTabWidget au layout
    homePageLayout.addWidget(&tabWidget);

    // Page de sign up
    QWidget signupPage;
    signupPage.setWindowTitle("Sign Up");

    QLabel *signupUsernameLabel = new QLabel("Username:");
    QLineEdit *signupUsernameLineEdit = new QLineEdit;
    QLabel *signupPasswordLabel = new QLabel("Password:");
    QLineEdit *signupPasswordLineEdit = new QLineEdit;
    signupPasswordLineEdit->setEchoMode(QLineEdit::Password);
    QPushButton *signupSubmitButton = new QPushButton("Submit");

    QVBoxLayout *signupLayout = new QVBoxLayout;
    signupLayout->addWidget(signupUsernameLabel);
    signupLayout->addWidget(signupUsernameLineEdit);
    signupLayout->addWidget(signupPasswordLabel);
    signupLayout->addWidget(signupPasswordLineEdit);
    signupLayout->addWidget(signupSubmitButton);
    signupPage.setLayout(signupLayout);

    // Connexion du bouton Sign Up
    QObject::connect(signupButton, &QPushButton::clicked, [&](){
        loginPage.hide();
        signupPage.show();
    });

    // Connexion du bouton Submit du formulaire de sign up
    QObject::connect(signupSubmitButton, &QPushButton::clicked, [&](){
        // Ici, on peut ajouter le code pour enregistrer les informations de l'utilisateur dans la base de données
        signupPage.hide();
        loginPage.resize(1600, 1200);
        loginPage.show();
    });

    // Connexion du bouton Log In
    QObject::connect(loginButton, &QPushButton::clicked, [&](){
        loginPage.hide();
        homePage.show();
    });

    loginPage.show();*/

    return app.exec();
}

/*
 * #include <QApplication>
#include <QTabWidget>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Création de la page d'accueil
    QWidget homePage;

    // Création du widget QTabWidget
    QTabWidget tabWidget(&homePage);

    // Création des onglets
    QWidget tab1;
    QWidget tab2;
    QWidget tab3;
    QWidget tab4;

    // Création du contenu de chaque onglet
    QLabel *tab1Label = new QLabel("Contenu de l'onglet 1", &tab1);
    QPushButton *tab2Button = new QPushButton("Bouton de l'onglet 2", &tab2);
    QLabel *tab3Label = new QLabel("Contenu de l'onglet 3", &tab3);
    QPushButton *tab4Button = new QPushButton("Bouton de l'onglet 4", &tab4);

    // Ajout des onglets au widget QTabWidget
    tabWidget.addTab(&tab1, "Onglet 1");
    tabWidget.addTab(&tab2, "Onglet 2");
    tabWidget.addTab(&tab3, "Onglet 3");
    tabWidget.addTab(&tab4, "Onglet 4");

    // Création du layout pour la page d'accueil
    QVBoxLayout homePageLayout(&homePage);

    // Ajout du widget QTabWidget au layout
    homePageLayout.addWidget(&tabWidget);

    // Affichage de la page d'accueil
    homePage.show();

    return app.exec();
}
*/

