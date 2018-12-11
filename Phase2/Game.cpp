#pragma once
#include "game.h"
#include "Help.h"
using namespace std;

//creating dynamically over coordinates
Point::Point(int x,int y)
{
	xCoordinate = new int(x);
	yCoordinate = new int(y);
}

void Point::setValues(int x, int y)
{
	*xCoordinate = x;
	*yCoordinate = y;
}
void Point::Show()
{
}

//deallocate memory
Point::~Point()
{
	delete xCoordinate;
	delete yCoordinate;
}

//setter of colour for dino
Dino::Dino(int x, int y, int c) : Point(x,y)
{
	Colour = new int(c);
}

//setting values to dino
void Dino::setValuesOfDino(int x, int y, int c)
{
	setValues(x, y); //parent set values
	*Colour = c;
}

void Dino::getValuesOfDino(int& x, int& y)
{
	x = *xCoordinate;
	y = *yCoordinate;
}

//show dino on console
void Dino::ShowDinoUp()
{
	//We draw our Dinosour using lines + one Elipes. Whose Coordinates are as:
	myLine(*xCoordinate, *yCoordinate, *xCoordinate+10, *yCoordinate+10, *Colour);
	myLine(*xCoordinate, *yCoordinate, *xCoordinate+10, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 10, *yCoordinate + 10, *xCoordinate+10 + 10, *yCoordinate+10, *Colour);
	myLine(*xCoordinate + 20, *yCoordinate + 10, *xCoordinate+10 + 20, *yCoordinate+10, *Colour);
	myLine(*xCoordinate + 20, *yCoordinate, *xCoordinate+10 + 20, *yCoordinate+10, *Colour);
	myLine(*xCoordinate + 30, *yCoordinate - 10, *xCoordinate+10 + 40, *yCoordinate+10 - 20, *Colour);
	myLine(*xCoordinate + 31, *yCoordinate - 10, *xCoordinate+10 + 11, *yCoordinate+10 - 10, *Colour);
	myLine(*xCoordinate + 50, *yCoordinate - 10, *xCoordinate+10 + 40, *yCoordinate+10 - 5, *Colour);
	myLine(*xCoordinate + 50, *yCoordinate + 5, *xCoordinate+10 + 30, *yCoordinate+10, *Colour);
	myLine(*xCoordinate + 40, *yCoordinate + 10, *xCoordinate+10 + 20, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 30, *yCoordinate + 20, *xCoordinate+10 + 15, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 25, *yCoordinate + 20, *xCoordinate+10 + 15, *yCoordinate+10 + 20, *Colour);
	myLine(*xCoordinate + 25, *yCoordinate + 30, *xCoordinate+10 + 10, *yCoordinate+10 + 20, *Colour);
	myLine(*xCoordinate + 20, *yCoordinate + 30, *xCoordinate+10 + 10, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 20, *yCoordinate + 20, *xCoordinate+10 + 5, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 15, *yCoordinate + 20, *xCoordinate+10 + 5, *yCoordinate+10 + 20, *Colour);
	myLine(*xCoordinate + 15, *yCoordinate + 30, *xCoordinate+10, *yCoordinate+10 + 20, *Colour);
	myLine(*xCoordinate + 10, *yCoordinate + 30, *xCoordinate+10, *yCoordinate+10 + 10, *Colour);

	myEllipse(*xCoordinate + 35, *yCoordinate - 5, *xCoordinate + 10 + 35, *yCoordinate + 10 - 5, 0, 0, 0, 0, *Colour, 0);
}
void Dino::ShowDinoDown()
{
	myLine(10, 20 + 290, 20, 30 + 290, *Colour);
	myLine(10, 20 + 290, 20, 30 + 10 + 290, *Colour);
	myLine(10 + 10, 20 + 10 + 290, 20 + 10, 30 + 290, *Colour);
	myLine(10 + 20, 20 + 10 + 290, 20 + 20, 30 + 290, *Colour);
	myLine(30 + 20, 20 + 290, 20 + 20, 30 + 290, *Colour); 
	myLine(30 + 20, 20 + 290, 45 + 20, 35 + 290, *Colour); 
	myLine(45 + 20, 35 + 290, 35 + 20, 45 + 290, *Colour);  
	myLine(35 + 20, 45 + 290, 30 + 20, 35 + 290, *Colour); 
	myLine(30 + 20, 35 + 290, 20 + 20, 40 + 290, *Colour); 
	myLine(40, 40 + 290, 35, 40 + 290, *Colour);
	myLine(35, 40 + 290, 35, 50 + 290, *Colour);
	myLine(35, 50 + 290, 30, 50 + 290, *Colour);
	myLine(30, 50 + 290, 30, 40 + 290, *Colour);
	myLine(30, 40 + 290, 25, 40 + 290, *Colour);
	myLine(25, 40 + 290, 25, 50 + 290, *Colour);
	myLine(25, 50 + 290, 20, 50 + 290, *Colour);
	myLine(20, 50 + 290, 20, 40 + 290, *Colour);

	myEllipse(45, 25 + 290, 55, 35 + 290, 0, 0, 0, 0, *Colour, 0);
}

Dino::~Dino()
{
	delete Colour;
}

//setter of colour for bird
Bird::Bird(int x, int y, int c) : Point(x,y)
{
	Colour = new int(c);
}
void Bird::setValuesOfBird(int x,int y,int c)
{
	setValues(x, y);
	*Colour = c;
}
void Bird::BirdShowOnHight()
{
	myLine(*xCoordinate, *yCoordinate-25, *xCoordinate + 15, *yCoordinate-25, *Colour);
	myLine(*xCoordinate, *yCoordinate-25, *xCoordinate + 10, *yCoordinate-25 - 10, *Colour);
	myLine(*xCoordinate + 10, *yCoordinate-25 - 10, *xCoordinate + 10, *yCoordinate-25, *Colour);

	myLine(*xCoordinate + 15, *yCoordinate-25, *xCoordinate + 15, *yCoordinate-25 - 25, *Colour);

	myLine(*xCoordinate + 15, *yCoordinate-25 - 25, *xCoordinate + 35, *yCoordinate-25, *Colour);
	myLine(*xCoordinate + 35, *yCoordinate-25, *xCoordinate + 55, *yCoordinate-25, *Colour);

	myLine(*xCoordinate + 10, *yCoordinate-25, *xCoordinate + 25, *yCoordinate-25 + 20, *Colour);
	myLine(*xCoordinate + 25, *yCoordinate-25 + 20, *xCoordinate + 40, *yCoordinate-25 + 20, *Colour);
	myLine(*xCoordinate + 40, *yCoordinate-25 + 20, *xCoordinate + 40, *yCoordinate-25 + 15, *Colour);
	myLine(*xCoordinate + 40, *yCoordinate-25 + 15, *xCoordinate + 50, *yCoordinate-25 + 15, *Colour);
	myLine(*xCoordinate + 50, *yCoordinate-25 + 15, *xCoordinate + 50, *yCoordinate-25 + 10, *Colour);
	myLine(*xCoordinate + 50, *yCoordinate-25 + 10, *xCoordinate + 55, *yCoordinate-25 + 10, *Colour);
	myLine(*xCoordinate + 55, *yCoordinate-25 + 10, *xCoordinate + 55, *yCoordinate-25, *Colour);
}
void Bird::BirdShowOnLessHight()
{
	myLine(*xCoordinate, *yCoordinate+10, *xCoordinate + 15, *yCoordinate+10, *Colour);
	myLine(*xCoordinate, *yCoordinate+10, *xCoordinate + 10, *yCoordinate+10 - 10, *Colour);
	myLine(*xCoordinate + 10, *yCoordinate+10 - 10, *xCoordinate + 10, *yCoordinate+10, *Colour);

	myLine(*xCoordinate + 15, *yCoordinate+10, *xCoordinate + 15, *yCoordinate+10 - 25, *Colour);

	myLine(*xCoordinate + 15, *yCoordinate+10 - 25, *xCoordinate + 35, *yCoordinate+10, *Colour);
	myLine(*xCoordinate + 35, *yCoordinate+10, *xCoordinate + 55, *yCoordinate+10, *Colour);

	myLine(*xCoordinate + 10, *yCoordinate+10, *xCoordinate + 25, *yCoordinate+10 + 20, *Colour);
	myLine(*xCoordinate + 25, *yCoordinate+10 + 20, *xCoordinate + 40, *yCoordinate+10 + 20, *Colour);
	myLine(*xCoordinate + 40, *yCoordinate+10 + 20, *xCoordinate + 40, *yCoordinate+10 + 15, *Colour);
	myLine(*xCoordinate + 40, *yCoordinate+10 + 15, *xCoordinate + 50, *yCoordinate+10 + 15, *Colour);
	myLine(*xCoordinate + 50, *yCoordinate+10 + 15, *xCoordinate + 50, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 50, *yCoordinate+10 + 10, *xCoordinate + 55, *yCoordinate+10 + 10, *Colour);
	myLine(*xCoordinate + 55, *yCoordinate+10 + 10, *xCoordinate + 55, *yCoordinate+10, *Colour);
}
void Bird::BirdShowOnGround()
{
	myLine(*xCoordinate, *yCoordinate+10+30, *xCoordinate + 15, *yCoordinate+10+30, *Colour);

	myLine(*xCoordinate, *yCoordinate+10+30, *xCoordinate + 10, *yCoordinate+10+30 - 10, *Colour);
	myLine(*xCoordinate + 10, *yCoordinate+10+30 - 10, *xCoordinate + 10, *yCoordinate+10+30, *Colour);

	//myLine(615, 290, 615, 270, 255); //change
	myLine(*xCoordinate + 15, *yCoordinate+10+30, *xCoordinate + 15, *yCoordinate+10+30 - 20, *Colour);
	//myLine(615, 270, 635, 290, 255);//change
	myLine(*xCoordinate + 15, *yCoordinate+10+30 - 20, *xCoordinate + 35, *yCoordinate+10+30, *Colour);
	//myLine(635, 290, 655, 290, 255);
	myLine(*xCoordinate + 35, *yCoordinate+10+30, *xCoordinate + 55, *yCoordinate+10+30, *Colour);
	//myLine(610, 290, 630, 305, 255);
	myLine(*xCoordinate + 10, *yCoordinate+10+30, *xCoordinate + 30, *yCoordinate+10+30 + 15, *Colour);
	//myLine(630, 305, 645, 305, 255);//change
	myLine(*xCoordinate + 30, *yCoordinate+10+30 + 15, *xCoordinate + 45, *yCoordinate+10+30 + 15, *Colour);
	//myLine(645, 305, 645, 300, 255);//change
	myLine(*xCoordinate + 45, *yCoordinate+10+30 + 15, *xCoordinate + 45, *yCoordinate+10+30 + 10, *Colour);
	//myLine(645, 300, 650, 300, 255);//chang
	myLine(*xCoordinate + 45, *yCoordinate+10+30 + 10, *xCoordinate + 50, *yCoordinate+10+30 + 10, *Colour);
	//myLine(650, 295, 650, 300, 255);//change
	myLine(*xCoordinate + 50, *yCoordinate+10+30 + 5, *xCoordinate + 50, *yCoordinate+10+30 + 10, *Colour);
	//myLine(650, 295, 655, 295, 255);//change
	myLine(*xCoordinate + 50, *yCoordinate+10+30 + 5, *xCoordinate + 55, *yCoordinate+10+30 + 5, *Colour);
	//myLine(655, 295, 655, 290, 255);//change
	myLine(*xCoordinate + 55, *yCoordinate+10+30 + 5, *xCoordinate + 55, *yCoordinate+10+30, *Colour);

}
void Bird::getValuesOfBird(int& x, int& y)
{
	x = *xCoordinate;
	y = *yCoordinate;
}
Bird::~Bird()
{
	delete Colour;
}

way::way(int x, int y) : Point(x , y)
{

}
void way::showLine()
{
	myRect(*xCoordinate, *yCoordinate+5, *xCoordinate+1000, *yCoordinate, 200,0,0,0,0,255);
}
way::~way()
{
}

Obstecle::Obstecle(int x, int y,int c) : Point(x , y)
{
	Colour = new int(c);
}
void Obstecle::setValuesOfObstecle(int x, int y, int c)
{
	setValues(x, y);
	*Colour = c;
}
void Obstecle::getValuesOfObstecle(int& x,int& y)
{
	x = *xCoordinate;
	y = *yCoordinate;
}
void Obstecle::ShowObstecleOne()
{
	myRect(*xCoordinate, *yCoordinate - 10, *xCoordinate + 10, *yCoordinate + 30, 0, 0, 0, *Colour, 0, 0);
	myRect(*xCoordinate - 10, *yCoordinate + 10, *xCoordinate, *yCoordinate + 30, 0, 0, 0, *Colour, 0, 0);
}
void Obstecle::ShowObstecleTwo()
{
	myRect(*xCoordinate + 9, *yCoordinate + 9, *xCoordinate + 19, *yCoordinate + 30, 0, 0, 0, *Colour, 0, 0);
	myRect(*xCoordinate, *yCoordinate - 10, *xCoordinate + 10, *yCoordinate + 30, 0, 0, 0, *Colour, 0, 0);
	myRect(*xCoordinate - 9, *yCoordinate + 15, *xCoordinate + 1, *yCoordinate + 30, 0, 0, 0, *Colour, 0, 0);
}
void Obstecle::ShowObstecleThree()
{
	myRect(*xCoordinate, *yCoordinate - 10, *xCoordinate + 10, *yCoordinate + 30, 0, 0, 0, 0, *Colour,0);
	myRect(*xCoordinate + 9, *yCoordinate + 9, *xCoordinate + 19, *yCoordinate + 30, 0, 0, 0, 0, *Colour, 0);
}
Obstecle::~Obstecle()
{
	delete Colour;
}

//setting our console at the start of game in driver
Driver::Driver()
{
	d.setValuesOfDino(10, 310, 255);
	w.setValuesOfWay(0, 342);
	o.setValuesOfObstecle(500, 310, 255);
}

//initializing static variables
int Driver::Score = 0;
int Driver::HI = 0;
int Driver::Lives = 3;
int Driver::Oshapes = 0;
int Driver::speed = 30;
int Driver::speedOfObstecle = 0;
void Driver::Delay(int t)
{
	clock_t goal = t + clock();
	while (goal > clock());
}
void Driver::PrintScore()
{
	Score += 1;
	if (Score % 200 == 0)
	{
		speed--;  //decreaseing delay
	}
	if (Score <= 10)
	{
		gotoxy(20, 2);
		cout << "LIVES : ";
		gotoxy(29, 2);
		cout << "/3";
	}
	if (HI != 0 && HI < Score)
	{
		gotoxy(64, 2);
		{
			//cout << Score;
		}
	}
	gotoxy(70, 2);
	cout << Score;
	gotoxy(28, 2);
	cout << Lives;
	
}
void Driver::ShowOnStart()
{
	d.ShowDinoUp();
		if (Oshapes == 1){ b.BirdShowOnGround(); }
	else if (Oshapes == 2){ b.BirdShowOnHight(); }
	else if (Oshapes == 3){ b.BirdShowOnLessHight(); }
	else if (Oshapes == 4){ o.ShowObstecleOne(); }
	else if (Oshapes == 5){ o.ShowObstecleTwo(); }
	else { o.ShowObstecleThree(); }
	w.showLine();
}
//overwrite previous and print new
void Driver::ShowDinoInDriver()
{
	d.setValuesOfDino(10, 310, 0);
	d.ShowDinoUp();
	d.ShowDinoDown();
	d.setValuesOfDino(10, 260, 255);
	d.ShowDinoUp();
}
//overwrite bird and obstecle and print
void Driver::ShowObstecleInDriver(int& speedOfObstecle,int Colour)
{
	b.setValuesOfBird(500 - speedOfObstecle, 280, Colour);
	o.setValuesOfObstecle(500 - speedOfObstecle, 310, Colour);
	if (Oshapes == 1 && Score>200){ b.BirdShowOnGround(); }
	else if (Oshapes == 2 && Score>200){ b.BirdShowOnHight(); }
	else if (Oshapes == 3 && Score>200){ b.BirdShowOnLessHight(); }
	else if (Oshapes == 4){ o.ShowObstecleOne(); }
	else if (Oshapes == 5){ o.ShowObstecleTwo(); }
	else { o.ShowObstecleThree(); }

}
//movement of obstecle nad present location
void Driver::ShowOnPressingSpace(int& speedOfObstecle)
{
	ShowObstecleInDriver(speedOfObstecle, 255);
	if (Collision(speedOfObstecle)){Lives--;}

	ShowDinoInDriver();
	PrintScore();
	Delay(speed);

	ShowObstecleInDriver(speedOfObstecle, 0);
}
void Driver::ShowOnDownKey(int& speedOfObstecle)
{
	ShowObstecleInDriver(speedOfObstecle, 255);

	if (Collision(speedOfObstecle))
	{
		Lives--; 	gotoxy(28, 2);
		cout << Lives;
	}

	d.setValuesOfDino(10, 310, 0);
	d.ShowDinoUp();
	d.setValuesOfDino(10, 310, 255);
	d.ShowDinoDown();

	PrintScore();
	Delay(speed);

	ShowObstecleInDriver(speedOfObstecle, 0);
}
void Driver::ShowOnRealisingSpace(int& speedOfObstecle)
{
	ShowObstecleInDriver(speedOfObstecle, 255);

			for (int j = 0; j < 15; j++)
			{
				PrintScore();
				ShowObstecleInDriver(speedOfObstecle, 255);

				Delay(speed);

				ShowObstecleInDriver(speedOfObstecle, 0);
				speedOfObstecle = speedOfObstecle + 5;
			}

			if (Collision(speedOfObstecle)){
				Lives--; 	gotoxy(28, 2);
				cout << Lives;
			}

				d.setValuesOfDino(10, 260, 0);
				d.ShowDinoUp();
				d.ShowDinoDown();
				d.setValuesOfDino(10, 310, 255);
				d.ShowDinoUp();
}
void Driver::ShowAfterPressingSpace(int& speedOfObstecle)
{
		   PrintScore();
			ShowObstecleInDriver(speedOfObstecle, 255);

			Delay(speed);

			ShowObstecleInDriver(speedOfObstecle, 0);

			speedOfObstecle = speedOfObstecle + 5;
			ShowObstecleInDriver(speedOfObstecle, 255);

			ShowObstecleInDriver(speedOfObstecle, 0);
			if (speedOfObstecle>500){
				speedOfObstecle = 0;
				srand(time(0));
				if (Score > 200)
				{
					Oshapes = rand() % 6;
				}
				else
				{
					Oshapes = 4+rand() % 6;
				}
			}
			if (Collision(speedOfObstecle)){ Lives--; }
			d.setValuesOfDino(10, 310, 255);
			d.ShowDinoUp();
}
bool Driver::startOfGame()
{
	char ch;
	ch = _getch();
	gotoxy(30, 9);
	cout << "                 ";
	while (true)
	{
		while (!_kbhit())
		{
			ShowAfterPressingSpace(speedOfObstecle);
			if (getLives() <= 0)
			{
				EndOfGame();
				return true;
			}
		}
		ch = _getch();
		if (ch == 72 || ch == ' ')
		{
			ShowOnPressingSpace(speedOfObstecle);
			if (getLives() <= 0)
			{
				EndOfGame();
				return true;
			}
		}
		else if (ch == 80)
		{
			ShowOnDownKey(speedOfObstecle);
			if (getLives() <= 0)
			{
				EndOfGame();
				return true;
			}
		}
		else if (ch == 27)  //ascii for escape
		{
			return false;
		}
		ShowOnRealisingSpace(speedOfObstecle);
		if (getLives() <= 0)
		{
			EndOfGame();
			return true;
		}
	}
}

//after the game console
void Driver::EndOfGame()
{
	gotoxy(30, 9);
	cout << "G A M E  O V E R";
}
bool Driver::Collision(int& speedOfObstecle)
{
	int x1, y1, x2, y2, x3, y3;
	d.getValuesOfDino(x1, y1);
	o.getValuesOfObstecle(x2, y2);
	b.getValuesOfBird(x3, y3);
	if (x2 <10 && x2>0 && y1 == y2 || x3 <10 && x3>0 && y1 == y3)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Driver::getLives()
{
	gotoxy(28, 2);
	cout << Lives;
	return Lives;
}
void Driver::setLives()
{
	//system("cls");
	gotoxy(60, 2);
	if (Score > HI)
	{
		HI = Score;
		cout << "HI: " << HI;
	}
	cout << "         ";
	Score = 0;
	speed = 30;
	Lives = 3;
	speedOfObstecle = 0;
}