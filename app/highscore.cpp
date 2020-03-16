#include "highscore.h"
#include "ui_highscore.h"
#include <nlohmann/json.hpp>

#include "curl_helper.h"

#include <iostream>

HighscoreWindow::HighscoreWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HighscoreWindow) {
    ui->setupUi(this);
}

HighscoreWindow::~HighscoreWindow() {
    delete ui;
}

void HighscoreWindow::update() {
    std::string str_url, str_leaderboard;
    nlohmann::json json_leaderboard;

    /* get the link */
    CURLHelper::get("https://matiusulung.com/se.json", &str_url);

    /* get the leaderboard */
    CURLHelper::get((std::string)nlohmann::json::parse(str_url)["link"] + "/getscores", &str_leaderboard);
    json_leaderboard = nlohmann::json::parse(str_leaderboard)["highscores"];
    const int size = json_leaderboard.size();

    /* put json into the int array */
    for (int i = 0; i < size; i++) {
        leaderboard[i].name = json_leaderboard[i]["game-username"];
        leaderboard[i].score = json_leaderboard[i]["score"];
    }
    for (int i = size; i < 10; i++) {
        leaderboard[i].name = "";
        leaderboard[i].score = -1;
    }

    /* since the array is small in size, use bubble sort */
    user_t temp;
    while (1) {
        bool is_swapped = false;
        for (int i = 0; i < 9; i++) {
            if (leaderboard[i].score < leaderboard[i+1].score) {
                temp.name = leaderboard[i].name;
                temp.score = leaderboard[i].score;
                leaderboard[i].name = leaderboard[i+1].name;
                leaderboard[i].score = leaderboard[i+1].score;
                leaderboard[i+1].name = temp.name;
                leaderboard[i+1].score = temp.score;
                is_swapped = true;
            }
        }
        if (!is_swapped) break;
    }

    /* update the labels */
    ui->label_1->setText(QString::fromStdString((leaderboard[0].score >= 0) ? (leaderboard[0].name + ": " + std::to_string(leaderboard[0].score)) : ""));
    ui->label_2->setText(QString::fromStdString((leaderboard[1].score >= 0) ? (leaderboard[1].name + ": " + std::to_string(leaderboard[1].score)) : ""));
    ui->label_3->setText(QString::fromStdString((leaderboard[2].score >= 0) ? (leaderboard[2].name + ": " + std::to_string(leaderboard[2].score)) : ""));
    ui->label_4->setText(QString::fromStdString((leaderboard[3].score >= 0) ? (leaderboard[3].name + ": " + std::to_string(leaderboard[3].score)) : ""));
    ui->label_5->setText(QString::fromStdString((leaderboard[4].score >= 0) ? (leaderboard[4].name + ": " + std::to_string(leaderboard[4].score)) : ""));
    ui->label_6->setText(QString::fromStdString((leaderboard[5].score >= 0) ? (leaderboard[5].name + ": " + std::to_string(leaderboard[5].score)) : ""));
    ui->label_7->setText(QString::fromStdString((leaderboard[6].score >= 0) ? (leaderboard[6].name + ": " + std::to_string(leaderboard[6].score)) : ""));
    ui->label_8->setText(QString::fromStdString((leaderboard[7].score >= 0) ? (leaderboard[7].name + ": " + std::to_string(leaderboard[7].score)) : ""));
    ui->label_9->setText(QString::fromStdString((leaderboard[8].score >= 0) ? (leaderboard[8].name + ": " + std::to_string(leaderboard[8].score)) : ""));
    ui->label_10->setText(QString::fromStdString((leaderboard[9].score >= 0) ? (leaderboard[9].name + ": " + std::to_string(leaderboard[9].score)) : ""));
}