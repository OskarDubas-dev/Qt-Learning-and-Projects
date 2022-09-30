#include "gamescreen.h"
#include "ui_gamescreen.h"

gameScreen::gameScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameScreen)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Banana");
    ui->comboBox->addItem("Melon");
    ui->comboBox->addItem("Kiwi");

}

gameScreen::~gameScreen()
{
    delete ui;
}



void gameScreen::on_comboBox_activated(int index)
{

}

