#include "src/View/view.h"

View::View(QWidget *parent)
    : QMainWindow(parent)

{
    createLoginPage();
}

void View::createLoginPage()
{
    // Page de login
    loginPage.setWindowTitle("Log in");

    usernameLabel = new QLabel("Username:");
    usernameLineEdit = new QLineEdit;
    passwordLabel = new QLabel("Password:");
    passwordLineEdit = new QLineEdit;
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    loginButton = new QPushButton("Log In");
    signupLabel = new QLabel("Don't have an account?");
    signupButton = new QPushButton("Sign Up");

    loginLayout = new QVBoxLayout;
    loginLayout->addWidget(usernameLabel);
    loginLayout->addWidget(usernameLineEdit);
    loginLayout->addWidget(passwordLabel);
    loginLayout->addWidget(passwordLineEdit);
    loginLayout->addWidget(loginButton);
    loginLayout->addWidget(signupLabel);
    loginLayout->addWidget(signupButton);
    loginPage.setLayout(loginLayout);

    signupPage.hide();
    homePage.hide();
    loginPage.show();

    // Connexion du bouton Sign Up
    QObject::connect(signupButton, &QPushButton::clicked, this, &View::createSignupPage);

    // Connexion du bouton Log In
    QObject::connect(loginButton, &QPushButton::clicked, this, &View::createHomePage);
}

void View::createHomePage() {
    // Page d'accueil
    homePage.setWindowTitle("Home");
    homePage.setFixedHeight(400);
    homePage.setFixedWidth(600);

    // Création du widget QTabWidget
    tabWidget = new QTabWidget(&homePage);

    // Création des onglets
    moviesTab = new QWidget();
    seriesTab = new QWidget();
    playlistTab = new QWidget();
    userTab = new QWidget();

    // Création du contenu de chaque onglet
    tab1Label = new QLabel("Contenu de l'onglet 1", moviesTab);
    tab2Button = new QPushButton("Bouton de l'onglet 2", seriesTab);
    tab3Label = new QLabel("Contenu de l'onglet 3", playlistTab);
    userButtonLogout = new QPushButton("Log Out", userTab);
    changeUsernameButton = new QPushButton("Change Username", userTab);
    changePasswordButton = new QPushButton("Change Password", userTab);
    changeUsernameButton->setFixedSize(200, 30);
    changePasswordButton->setFixedSize(200, 30);

    // Création du layout pour l'onglet User
    userTabLayout = new QVBoxLayout(userTab);
    userTabLayout->addWidget(changeUsernameButton);
    userTabLayout->addWidget(changePasswordButton);
    userTabLayout->setAlignment(Qt::AlignHCenter);

    // Ajout des onglets au widget QTabWidget
    tabWidget->addTab(moviesTab, "Movies");
    tabWidget->addTab(seriesTab, "Series");
    tabWidget->addTab(playlistTab, "Playlist");
    tabWidget->addTab(userTab, "User");

    // Création du layout pour la page d'accueil
    homePageLayout = new QVBoxLayout;

    // Ajout du widget QTabWidget au layout
    homePageLayout->addWidget(tabWidget);


    // Création du layout pour les boutons
    buttonsLayout = new QHBoxLayout;

    // Ajout des boutons dans le layout
    buttonsLayout->addWidget(userButtonLogout);

    // Spécification d'une taille fixe pour les boutons
    userButtonLogout->setFixedSize(150, 30);

    // Ajout du layout des boutons au layout principal
    homePageLayout->addLayout(buttonsLayout);

    homePage.setLayout(homePageLayout);

    // Connexion du bouton LogOut à Login
    QObject::connect(userButtonLogout, &QPushButton::clicked, this, &View::createLoginPage);

    signupPage.hide();
    loginPage.hide();
    homePage.show();
}

void View::createSignupPage() {
    // Page de sign up
    signupPage.setWindowTitle("Sign Up");

    signupUsernameLabel = new QLabel("Username:");
    signupUsernameLineEdit = new QLineEdit;
    signupPasswordLabel = new QLabel("Password:");
    signupPasswordLineEdit = new QLineEdit;
    signupPasswordLineEdit->setEchoMode(QLineEdit::Password);
    signupSubmitButton = new QPushButton("Submit");

    signupLayout = new QVBoxLayout;
    signupLayout->addWidget(signupUsernameLabel);
    signupLayout->addWidget(signupUsernameLineEdit);
    signupLayout->addWidget(signupPasswordLabel);
    signupLayout->addWidget(signupPasswordLineEdit);
    signupLayout->addWidget(signupSubmitButton);
    signupPage.setLayout(signupLayout);

    loginPage.hide();
    homePage.hide();
    signupPage.show();

    // Connexion du bouton Submit du formulaire de sign up
    QObject::connect(signupSubmitButton, &QPushButton::clicked, this, &View::createLoginPage);

}
