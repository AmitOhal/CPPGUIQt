#include <QApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton *button=new QPushButton("Quit");
    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
    emit SIGNAL(clicked());
    button->show();
    return app.exec();
}

