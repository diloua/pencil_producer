#include "welcome.h"
#include "ui_welcome.h"

WelcomeWindow::WelcomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WelcomeWindow) {
    ui->setupUi(this);
    connect(&game, SIGNAL(on_quit_clicked()), this, SLOT(end_session()));


}

WelcomeWindow::~WelcomeWindow() {
    delete ui;
}

void WelcomeWindow::on_start_game_clicked() {
    game.on_load("default.sav");
    if (!game.isVisible()) game.show();
    close();
}

void WelcomeWindow::on_resume_game_clicked() {
    game.on_load("data.sav");
    if (!game.isVisible()) game.show();
    close();
}

void WelcomeWindow::on_get_highscore_clicked() {
    highscore.show();
    highscore.update();
}

void WelcomeWindow::end_session() {
    show();
    game.close();
    game.on_load("default.sav");
}
