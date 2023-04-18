#include "src/View/view.h"
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

    //Appel à la vue
    View v;

    //Appel au modele
    //Model m;

    //Appel au controller lié au modele et vue
    //Controller c;

    return app.exec();
}


