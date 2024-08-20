#include<iostream>
#include<conio.h>
#include "tic-tac-toe.cpp"
#include "Guess Game.cpp"
#include "Rockpaper.cpp"
#include "Dice Game.cpp"
#include "Catch the Thief.cpp"
using namespace std;

main(){
	int x;
	int again;
	cout<<"Welcome to Neo Teo"<<endl;
	main:
	cout<<"Press[ENTER] to start the console.";
	cin.get();
	doitagain:
	cout<<"\n\n\t\t1.Tic Tac Toe"<<endl;
	cout<<"\t\t2.Guess the Number"<<endl;
	cout<<"\t\t3.Rock, Paper, Scissors"<<endl;
	cout<<"\t\t4.Dice Game (Two Players)"<<endl;
	cout<<"\t\t5.Catch the Thief"<<endl;
	cout<<"\nSelect the Game:";
	cin>>x;
	if(x==1){
		tictactoe();
	}
	else if(x==2){
		guessgame();
	}
	else if(x==3){
		rockpaper();
	}
	else if(x==4){
		diceGame();
	}
	else if(x==5){
		catchthethief();
	}
	else{
		cout<<"Invalid Input";
	}
	cout<<"\nPress 1 to go to Main Menu ,0 to Exit.";
	cin>>again;
	if(again==1){
		system("cls");
		goto doitagain;
	}
}