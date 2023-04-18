
#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class connection; }
QT_END_NAMESPACE

class connection : public QMainWindow
{
    Q_OBJECT

public:
    connection(QWidget *parent = nullptr);
    ~connection();
private:
    Ui::connection *ui;
};

#endif // CONNECTION_H
