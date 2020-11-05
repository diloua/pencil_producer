## Description

This project creates a game, in which the user makes pencils, using wood and graphite; increasing the balance, which can then be used to buy more wood and graphite, and also to unlock new levels of the game. It is developed using the QT creator development environment that works with C++ and Object Oriented Programming.
Each component of the program is divided into classes that have their own properties that are all used  throughout the game in the game.cpp file. (For example there is a pencil class with proprieties such as number of pencils, price of pencils etc... and throughout the game depending on certain events changes will occur on these values in the game.cpp file).
The visuals of the software are managed by the UI component of QT.


## Features
 
* Start or Load a game
* View users Highscores

In game :

* Produce pencils
* Buy and manage the resources used to produce pencils
* Modify the pencils price to increase/decrease saling rate 
* Buy an APM machine that automatically produces pencils
* Save your game and update the score
* Debug and use the sandbox function 

## Insallation and use

* Install the qt5 library and libcurl4 library

* Download the project

`cd pencil_producer`

` cmake .`

 `make`
 
 When the project is built 2 programs are generated :
 
`./pencil_producer/app/pencil-producer`
 
Launches the game 

 `./pencil_producer/test/pencil-producer`
 
Performs 23 test cases and outputs the passed and failed test cases


