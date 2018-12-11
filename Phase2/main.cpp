#include "Game.h"

int main()
{
	system("color 0a");
	system("mode con: lines=29 cols=78");
	system("cls");
	Driver d;            //object   of class driver   
	d.PrintScore();      //label of score and location+lives also
	d.ShowOnStart();     //interface on openning the console
	char ch; 
	//We used concept of recursion here.
	while (d.startOfGame() != false)    //loop for exit
	{
		d.setLives();        //set lives after one attempt
		d.EndOfGame();      //show that game is over
		d.startOfGame();     //second attempt
	}
	return 0;
	system("pause");
} 