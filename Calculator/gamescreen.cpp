#include "gamescreen.h"
#include "ui_gamescreen.h"

gameScreen::gameScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameScreen)
{
    ui->setupUi(this);
}

gameScreen::~gameScreen()
{
    delete ui;
}
