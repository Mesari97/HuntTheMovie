
#include "connection.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTabWidget>

connection::connection(QWidget *parent)
    : QMainWindow(parent)
    ui(new Ui::connection)
{
    ui->setupUi(this);
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
}

