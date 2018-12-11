#pragma once
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
using namespace std;

class Point     //parent class for dino,bird,obstecle,way
{
public:
	int *xCoordinate;
	int *yCoordinate;

	Point(int x = 10, int y = 20);   //parametrized and default constructor
	void setValues(int, int);        //setter for point class
	void Show();                    
	~Point();                         //destructor
};

class Dino :public Point
{
	int*Colour;          //color of dino
public:
	Dino(int x = 10, int y = 20, int c = 255);   //default and parametrized constructor
	void ShowDinoUp();                     //print dino and move up
	void ShowDinoDown();                   //print on down cursor key
	void ShowDinoMoving();                
	void setValuesOfDino(int, int, int);  //setter for dino class
	void getValuesOfDino(int&, int&);     //getter for dino class
	~Dino();                             //destructor
};

class Bird :public Point
{
	int *Colour;
public:
	Bird(int x = 10, int y = 10, int c = 255);  //default and parametrized constructor
	void setValuesOfBird(int,int,int);  //setter for Bird class
	void getValuesOfBird(int&, int&);    //getter for bird class
	void BirdShowOnHight();            //full height
	void BirdShowOnLessHight();        //normal height
	void BirdShowOnGround();           //on ground
	~Bird();                          //destructor
};

class way :public Point
{
public:
	way(int x = 10, int y = 10);      //default and parametrized constructor
	void setValuesOfWay(int x,int y){ setValues(x, y); }     //setter
	void showLine();      //show path
	~way();             //destructor
};

class Obstecle :public Point
{
	int*Colour;
public:
	Obstecle(int x = 10, int y = 10, int c = 255);    //default and parametrized constructor
	void setValuesOfObstecle(int, int, int);   //setter for obstecle class
	void getValuesOfObstecle(int&,int&);      //getter for obstecle class
	void ShowObstecleOne();      //one obstecle
	void ShowObstecleTwo();      //second obstecle
	void ShowObstecleThree();    //three obstecle
	~Obstecle();      //destructor
};

class Driver    //composition of dino,bird,way and obstecle
{
	static int Score;    //score increasing and printing
	static int HI;       //save high score
	static int Lives;    //save lives
	static int Oshapes;  //object shapes decide the hurdle  next to come randomly
	static int speed;    //speed of the game
	static int speedOfObstecle;  //speed of obstecle
	Dino d;     
	Bird b;
	way w;
	Obstecle o;
public:
	Driver();                  //default constrcutor 
	void Delay(int);           //delay the game
	void PrintScore();         //show score+high score+increase score
	void ShowOnStart();        //starting interface
	void ShowObstecleInDriver(int&,int);  //print and overwrite
	void ShowDinoInDriver();      //dino show in driver accordingly
	void ShowOnPressingSpace(int&);  //effect of space and upper cursor key on game
	void ShowOnDownKey(int&);        //effect on pressing down key
	void ShowOnRealisingSpace(int&);    //move to its original position
	void ShowAfterPressingSpace(int&);    //move to its original position
	bool startOfGame();  //start
	void EndOfGame();  //end
	int getLives();  //getter for lives
	void setLives();  //setter for lives
	bool Collision(int&);   //collision with obstecle
};
