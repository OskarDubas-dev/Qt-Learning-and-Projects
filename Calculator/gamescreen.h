#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QWidget>

namespace Ui {
class gameScreen;
}

class gameScreen : public QWidget
{
    Q_OBJECT

public:
    explicit gameScreen(QWidget *parent = nullptr);
    ~gameScreen();

private:
    Ui::gameScreen *ui;
};

#endif // GAMESCREEN_H
