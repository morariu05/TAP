
#include <QGuiApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QLabel *label = new QLabel("<h2>Hello</h2> <font color=red><i> world!</i>");

    label->show();

    return app.exec();
}
