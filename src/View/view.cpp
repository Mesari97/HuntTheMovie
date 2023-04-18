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
    distributorPage.hide();
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
    //moviesTab
    movie1Button = new QPushButton("Interstellar", moviesTab);
    movie2Button = new QPushButton("Forrest Gump", moviesTab);
    movie3Button = new QPushButton("OSS 117", moviesTab);
    movie4Button = new QPushButton("Avatar", moviesTab);
    movie1Button->setFixedSize(200, 30);
    movie2Button->setFixedSize(200, 30);
    movie3Button->setFixedSize(200, 30);
    movie4Button->setFixedSize(200, 30);

    //seriesTab
    series1Button = new QPushButton("Breaking Bad", seriesTab);
    series2Button = new QPushButton("Game of Thrones", seriesTab);
    series3Button = new QPushButton("Vikings", seriesTab);
    series4Button = new QPushButton("Peaky Blinders", seriesTab);
    series1Button->setFixedSize(200, 30);
    series2Button->setFixedSize(200, 30);
    series3Button->setFixedSize(200, 30);
    series4Button->setFixedSize(200, 30);

    //playlistTab
    favPlaylistButton = new QPushButton("Favorites", playlistTab);
    actionPlaylistButton = new QPushButton("Action", playlistTab);
    lovePlaylistButton = new QPushButton("Love", playlistTab);
    favPlaylistButton->setFixedSize(200, 30);
    actionPlaylistButton->setFixedSize(200, 30);
    lovePlaylistButton->setFixedSize(200, 30);

    //userTab
    userButtonLogout = new QPushButton("Log Out", userTab);
    changeUsernameButton = new QPushButton("Change Username", userTab);
    changePasswordButton = new QPushButton("Change Password", userTab);
    changeUsernameButton->setFixedSize(200, 30);
    changePasswordButton->setFixedSize(200, 30);

    // Création du layout pour l'onglet Movies
    moviesTabLayout = new QVBoxLayout(moviesTab);
    moviesTabLayout->addWidget(movie1Button);
    moviesTabLayout->addWidget(movie2Button);
    moviesTabLayout->addWidget(movie3Button);
    moviesTabLayout->addWidget(movie4Button);
    moviesTabLayout->setAlignment(Qt::AlignHCenter);

    // Création du layout pour l'onglet Series
    seriesTabLayout = new QVBoxLayout(seriesTab);
    seriesTabLayout->addWidget(series1Button);
    seriesTabLayout->addWidget(series2Button);
    seriesTabLayout->addWidget(series3Button);
    seriesTabLayout->addWidget(series4Button);
    seriesTabLayout->setAlignment(Qt::AlignHCenter);

    // Création du layout pour l'onglet Series
    playlistTabLayout = new QVBoxLayout(playlistTab);
    playlistTabLayout->addWidget(favPlaylistButton);
    playlistTabLayout->addWidget(actionPlaylistButton);
    playlistTabLayout->addWidget(lovePlaylistButton);
    playlistTabLayout->setAlignment(Qt::AlignHCenter);

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

    // Création du layout pour les boutons en bas
    buttonsLayout = new QHBoxLayout;

    // Ajout des boutons dans le layout en bas
    buttonsLayout->addWidget(userButtonLogout);

    // Spécification d'une taille fixe pour les boutons
    userButtonLogout->setFixedSize(150, 30);

    // Ajout du layout des boutons au layout principal
    homePageLayout->addLayout(buttonsLayout);

    homePage.setLayout(homePageLayout);

    // Connexion du bouton LogOut à Login
    QObject::connect(userButtonLogout, &QPushButton::clicked, this, &View::createLoginPage);

    // Connexion des boutons films/séries à distributor
    QObject::connect(movie1Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(movie2Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(movie3Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(movie4Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(series1Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(series2Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(series3Button, &QPushButton::clicked, this, &View::createDistributorPage);
    QObject::connect(series4Button, &QPushButton::clicked, this, &View::createDistributorPage);

    signupPage.hide();
    loginPage.hide();
    distributorPage.hide();
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
    distributorPage.hide();
    signupPage.show();

    // Connexion du bouton Submit du formulaire de sign up
    QObject::connect(signupSubmitButton, &QPushButton::clicked, this, &View::createLoginPage);
}

void View::createDistributorPage() {
    // Création de la nouvelle page avec le titre correspondant au texte du bouton cliqué
    distributorPage.setWindowTitle("name");
    distributorPage.setFixedHeight(400);
    distributorPage.setFixedWidth(600);

    // Création du layout et contenu pour la page distributor
    distributorLayout = new QVBoxLayout();
    artworkLabel = new QLabel("ARTWORK");
    netflixLabel = new QLabel("Available on this distributor : Netflix");
    primeLabel = new QLabel("Available on this distributor : Amazon Prime");
    HBOLabel = new QLabel("Available on this distributor : HBO");
    addToPlaylistButton = new QPushButton("Add this artwork to a playlist");
    noticeButton = new QPushButton("Leave a notice");
    backButton = new QPushButton("Go back home");
    artworkLabel->setFixedSize(200, 30);
    netflixLabel->setFixedSize(200, 30);
    primeLabel->setFixedSize(200, 30);
    HBOLabel->setFixedSize(200, 30);

    distributorLayout->addWidget(artworkLabel);
    distributorLayout->addWidget(netflixLabel);
    distributorLayout->addWidget(primeLabel);
    distributorLayout->addWidget(HBOLabel);
    distributorLayout->addWidget(addToPlaylistButton);
    distributorLayout->addWidget(noticeButton);
    distributorLayout->setAlignment(Qt::AlignHCenter);

    // Création du layout pour les boutons en bas
    backLayout = new QHBoxLayout;

    // Ajout des boutons dans le layout en bas
    backLayout->addWidget(backButton);

    // Spécification d'une taille fixe pour les boutons
    backButton->setFixedSize(150, 30);

    // Ajout du layout des boutons au layout principal
    distributorLayout->addLayout(backLayout);

    distributorPage.setLayout(distributorLayout);

    // Affichage de la nouvelle page
    loginPage.hide();
    homePage.hide();
    signupPage.hide();
    distributorPage.show();

    // Connexion du bouton Go Home à l'accueil
    QObject::connect(backButton, &QPushButton::clicked, this, &View::createHomePage);

}
