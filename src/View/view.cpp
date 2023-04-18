#include "src/View/view.h"

View::View(QWidget *parent)
    : QMainWindow(parent)

{
    // Page de login
    loginPage.setWindowTitle("Log in");

    QLabel *usernameLabel = new QLabel("Username:");
    usernameLineEdit = new QLineEdit;
    QLabel *passwordLabel = new QLabel("Password:");
    passwordLineEdit = new QLineEdit;
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    loginButton = new QPushButton("Log In");
    QLabel *signupLabel = new QLabel("Don't have an account?");

    signupButton = new QPushButton("Sign Up");

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
    homePage.setWindowTitle("Home");

    // Création du widget QTabWidget
    QTabWidget *tabWidget = new QTabWidget(&homePage);

    // Création des onglets
    QWidget *moviesTab = new QWidget();
    QWidget *seriesTab = new QWidget();
    QWidget *playlistTab = new QWidget();
    QWidget *userTab = new QWidget();

    // Création du contenu de chaque onglet
    QLabel *tab1Label = new QLabel("Contenu de l'onglet 1", moviesTab);
    QPushButton *tab2Button = new QPushButton("Bouton de l'onglet 2", seriesTab);
    QLabel *tab3Label = new QLabel("Contenu de l'onglet 3", playlistTab);
    QPushButton *tab4Button = new QPushButton("Bouton de l'onglet 4", userTab);

    // Ajout des onglets au widget QTabWidget
    tabWidget->addTab(moviesTab, "Movies");
    tabWidget->addTab(seriesTab, "Series");
    tabWidget->addTab(playlistTab, "Playlist");
    tabWidget->addTab(userTab, "User");

    // Création du layout pour la page d'accueil
    QVBoxLayout *homePageLayout = new QVBoxLayout;
    // Ajout du widget QTabWidget au layout
    homePageLayout->addWidget(tabWidget);
    homePage.setLayout(homePageLayout);

    // Page de sign up
    signupPage.setWindowTitle("Sign Up");

    QLabel *signupUsernameLabel = new QLabel("Username:");
    signupUsernameLineEdit = new QLineEdit;
    QLabel *signupPasswordLabel = new QLabel("Password:");
    signupPasswordLineEdit = new QLineEdit;
    signupPasswordLineEdit->setEchoMode(QLineEdit::Password);
    signupSubmitButton = new QPushButton("Submit");

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
    QObject::connect(signupSubmitButton, &QPushButton::clicked, this, &View::createSignupPage);

    // Connexion du bouton Log In
    QObject::connect(loginButton, &QPushButton::clicked, this, &View::createHomePage);

    // Ajout des widgets à la page de login
    loginLayout = new QVBoxLayout;
    loginLayout->addWidget(usernameLabel);
    loginLayout->addWidget(usernameLineEdit);
    loginLayout->addWidget(passwordLabel);
    loginLayout->addWidget(passwordLineEdit);
    loginLayout->addWidget(loginButton);
    loginLayout->addWidget(signupLabel);
    loginLayout->addWidget(signupButton);
    loginPage.setLayout(loginLayout);

    // Ajout des onglets au widget QTabWidget
    tabWidget->addTab(moviesTab, "Movies");
    tabWidget->addTab(seriesTab, "Series");
    tabWidget->addTab(playlistTab, "Playlist");
    tabWidget->addTab(userTab, "User");

    // Ajout du widget QTabWidget au layout de la page d'accueil
    homePageLayout = new QVBoxLayout;
    homePageLayout->addWidget(tabWidget);
    homePage.setLayout(homePageLayout);

    // Ajout des widgets à la page de sign up
    signupLayout = new QVBoxLayout;
    signupLayout->addWidget(signupUsernameLabel);
    signupLayout->addWidget(signupUsernameLineEdit);
    signupLayout->addWidget(signupPasswordLabel);
    signupLayout->addWidget(signupPasswordLineEdit);
    signupLayout->addWidget(signupSubmitButton);
    signupPage.setLayout(signupLayout);


    createLoginPage();
}

void View::createLoginPage()
{
    // Vérification si le layout n'existe pas déjà
    if (loginPage.layout() == nullptr) {
        loginLayout = new QVBoxLayout;
        loginPage.setLayout(loginLayout);
    }
    loginPage.show();
}

void View::createHomePage() {
    loginPage.hide();
    homePage.show();
}

void View::createSignupPage() {
    // Ici, on peut ajouter le code pour enregistrer les informations de l'utilisateur dans la base de données
    signupPage.hide();
    loginPage.show();
}
