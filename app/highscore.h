#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <string>

#include "game.h"

struct user_t {
    std::string name;
    int score;
};

namespace Ui {
class HighscoreWindow;
}

//! A HighscoreWindow class.
/*! 
*/
class HighscoreWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! Construtor
    explicit HighscoreWindow(QWidget *parent = nullptr);
    //! Destructor
    ~HighscoreWindow();

    //! Update the current highscore with GET request to a given server
    void update();

private:
    Ui::HighscoreWindow *ui;

    user_t leaderboard[10];
};

#endif
