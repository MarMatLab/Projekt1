#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,timer(new QTimer(this))


{
    struct Obrazki
    {
        QString fpath;
        QString komentarz;
    };
    Obrazki lista[5];
    int licznik = 0;
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
    ui->setupUi(this);
    QPixmap p = (lista[licznik].fpath);
    ui->label->setPixmap(p);
    ui->label_2->setText(lista[licznik].komentarz);
    ui->label_3->setVisible(false);
    ui->spinBox->setVisible(false);

    if (licznik < 4)
    {
        licznik++;
        p = (lista[licznik].fpath);
        ui->label->setPixmap(p);
        ui->label_2->setText(lista[licznik].komentarz);
    }
    else
    {
        timer->stop();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    if (checked == true)
    {
        ui->spinBox->setVisible(true);
        ui->label_3->setVisible(true);
        timer->start();
    }
    else if (checked == false)
    {
        ui->label_3->setVisible(false);
        ui->spinBox->setVisible(false);
    }
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    int in;
    in = ui->spinBox->value();
    timer->setInterval(in);
}


void MainWindow::on_pushButton_clicked()
{

}

