#include <QApplication>
#include <QPushButton>
int main(int argc, char **argv)
{
        QApplication app (argc, argv);
        QPushButton button ("Hello world !");
        button.show();
        int i = 4;
    return app.exec();
}
