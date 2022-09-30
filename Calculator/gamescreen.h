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

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::gameScreen *ui;
};

#endif // GAMESCREEN_H
