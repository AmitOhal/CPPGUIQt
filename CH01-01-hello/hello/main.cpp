#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label=new QLabel("Hello Qt!");
    QLabel *label1=new QLabel("<h2><i>Hello</i></h2><font color=red> Qt!</font>");
    label->show();
    label1->show();
    return app.exec();
}
