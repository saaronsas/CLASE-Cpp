#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void menu();
void gotoxy(int, int);
void sumar();
void restar();
void multiplicar();
void dividir();

float a, b;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opc;
	system("cls");
	system("color 5F");
	gotoxy(35,4); cout<<"************";
	gotoxy(35,5); cout<<"* .:MENU:. *";
	gotoxy(35,6); cout<<"************";
	gotoxy(29,9); cout<<"Introduzca una opcion: ___  ";
	gotoxy(31,11); cout<<"1. Sumar";
	gotoxy(31,12); cout<<"2. Restar";
	gotoxy(31,13); cout<<"3. Multiplicar";
	gotoxy(31,14); cout<<"4. Dividir";
	gotoxy(31,15); cout<<"5. Salir";
	/*for(int i=0; i<30; i++){
		gotoxy(26+i,2); cout<<"*";
		gotoxy(26+i,19); cout<<"*";
	}	
	for(int i=0; i<18; i++){
		gotoxy(26,2+i); cout<<"*";
		gotoxy(56,2+i); cout<<"*";
	}*/
	
	for(int i=0; i<30; i++){		//grande horizontal
		gotoxy(26+i,2); cout<<"*";
		gotoxy(26+i,25); cout<<"*";
	}	
	for(int i=0; i<24; i++){		//grande vertical
		gotoxy(26,2+i); cout<<"*";
		gotoxy(56,2+i); cout<<"*";
	}
	for(int i=0; i<26; i++){		//pequeño horizontal
		gotoxy(28+i,17); cout<<"*";
		gotoxy(28+i,24); cout<<"*";
	}	
	for(int i=0; i<8; i++){			//grande vertical
		gotoxy(28,17+i); cout<<"*";
		gotoxy(54,17+i); cout<<"*";
	}
	
	gotoxy(53,9); cin>>opc;
	
	switch(opc){
		case 1:
			sumar();
			break;
		case 2:
			restar();
			break;
		case 3:
			multiplicar();
			break;
		case 4:
			dividir();
			break;
		case 5:
			system("cls");
			getch();
	}
	
}

void sumar(){
	system("color 5A");
	gotoxy(39,19); cout<<"SUMAR";
	gotoxy(38,21); cout<<"a+b = _";
	gotoxy(38,21); cin>>a;
	gotoxy(40,21); cin>>b;
	gotoxy(44,21); cout<<a+b;
	gotoxy(24,28); system("pause");
	menu(); 
	
}

void restar(){
	system("color 5A");
	gotoxy(39,19); cout<<"RESTAR";
	gotoxy(38,21); cout<<"a-b = _";
	gotoxy(38,21); cin>>a;
	gotoxy(40,21); cin>>b;
	gotoxy(44,21); cout<<a-b;
	gotoxy(24,28); system("pause");
	menu();
}

void multiplicar(){
	system("color 5A");
	gotoxy(36,19); cout<<"MULTIPLICAR";
	gotoxy(38,21); cout<<"a*b = _";
	gotoxy(38,21); cin>>a;
	gotoxy(40,21); cin>>b;
	gotoxy(44,21); cout<<a*b;
	gotoxy(24,28); system("pause");
	menu();
}

void dividir(){
	system("color 5A");
	gotoxy(38,19); cout<<"DIVIDIR";
	gotoxy(38,21); cout<<"a/b = _";
	gotoxy(38,21); cin>>a;
	gotoxy(40,21); cin>>b;
	gotoxy(44,21); cout<<a/b;
	gotoxy(24,28); system("pause");
	menu();
}

void gotoxy(int x, int y){  	//Suma-80/2
	HANDLE iDen;
	iDen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD wPos;
	wPos.X = x;
	wPos.Y = y;
	
	SetConsoleCursorPosition(iDen, wPos);
	
}
