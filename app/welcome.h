#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>
#include <QString>
#include <QTimer>

#include "game.h"
#include "highscore.h"

namespace Ui {
class WelcomeWindow;
}

//! A WelcomeWindow class.
/*! 
*/
class WelcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! Construtor
    explicit WelcomeWindow(QWidget *parent = nullptr);
    //! Destructor
    ~WelcomeWindow();

    MainWindow game;
    HighscoreWindow highscore;

//! signals - functions
/*! 
*/
private slots:
    //! Start Game Button
    /*! Starts the game when clicked
    */
    void on_start_game_clicked();

    //! Resume Game Button
    /*! Starts the game with the saved parameters when button clicked
    */
    void on_resume_game_clicked();

    //! High Score Button
    /*! Shows a table with all the recorded High Scores
    */
    void on_get_highscore_clicked();

    //! Quit Button
    /*! Simply Quits the Game when button clicked
    */
    void end_session();

private:
    Ui::WelcomeWindow *ui;
};

#endif
