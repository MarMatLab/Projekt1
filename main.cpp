#include "mainwindow.h"

#include <QApplication>

using namespace std;

struct Obrazki
{
    QString fpath;
    QString komentarz;
};

Obrazki lista[5];
int licznik = 0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    lista[0].fpath = "C:\\Users\\Holly\\Desktop\\Sztuka\\ReactionPics\\iD.png";
    lista[0].komentarz = "Usmiechajacy sie ziomek";
    lista[1].fpath = "C:\\Users\\Holly\\Desktop\\Sztuka\\ReactionPics\\shocked.png";
    lista[1].komentarz = "Śmieszny ziomek.";
    lista[2].fpath = "C:\\Users\\Holly\\Desktop\\Sztuka\\ReactionPics\\melting.png";
    lista[2].komentarz = "Roztapiajacy sie ziomek.";
    lista[3].fpath = "C:\\Users\\Holly\\Desktop\\Sztuka\\ReactionPics\\raisebrow.png";
    lista[3].komentarz = "Patrzacy ziomek.";
    lista[4].fpath = "C:\\Users\\Holly\\Desktop\\Sztuka\\ReactionPics\\OM.png";
    lista[4].komentarz = "Jedzacy ziomek";
    return a.exec();
}
