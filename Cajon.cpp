#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void menu();
void gotoxy(int, int);
void cajon(char *);

float a, b;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	system("color 5A");
	char palabra[20];
	gotoxy(23,9); cout<<"Introduzca una palabra: ____________";
	gotoxy(47,9); cin.getline(palabra,20,'\n');
	system("cls");
	cajon(palabra); 
}



void gotoxy(int x, int y){  	//Suma-80/2
	HANDLE iDen;
	iDen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD wPos;
	wPos.X = x;
	wPos.Y = y;
	
	SetConsoleCursorPosition(iDen, wPos);
	
}

void cajon(char *palabra){
	int xi, yi;
	
	gotoxy(30,9); cout<<"gotoxy(x, y)";
	gotoxy(37,9); cin>>xi;
	gotoxy(40,9); cin>>yi;
	system("cls");
	gotoxy(xi,yi);
	for(int i=0; i<strlen(palabra)+4; i++){
		cout<<"*";
	}
	gotoxy(xi,yi+1); cout<<"* "<<palabra<<" *";
	gotoxy(xi,yi+2);
	for(int i=0; i<strlen(palabra)+4; i++){
		cout<<"*";
	} 
}
