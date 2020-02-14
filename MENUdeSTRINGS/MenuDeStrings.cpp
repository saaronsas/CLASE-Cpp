#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>

using namespace std;

void menu();
void menuf();
void gotoxy(int, int);
void contarLongitud();
void contarVocales();
void OrdenarPalabrasL();
void OrdenarPalabrasV();
void retardo(int);

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
	gotoxy(31,11); cout<<"1. Cotar Palabras";
	gotoxy(31,12); cout<<"2. Contas Vocales";
	gotoxy(31,13); cout<<"3. Ordenar por Longitud";
	gotoxy(31,14); cout<<"4. Ordenar por Vocales";
	gotoxy(31,15); cout<<"5. Salir";
	
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
	
	if(opc>5){
		gotoxy(29,1); cout<<"Intentelo de nuevo (1-5)";
		retardo(2);
		return menu();
	}
	
	switch(opc){
		case 1:
			contarLongitud();
			break;
		case 2:
			contarVocales();
			break;
		case 3:
			OrdenarPalabrasL();
			break;
		case 4:
			OrdenarPalabrasV();
			break;
		case 5:
			system("cls"); menuf();
			gotoxy(35,21); cout<<"Saliendo...";	
			retardo(2);
			system("cls");
			getch();
	}
	
}

void contarLongitud(){
	system("color 5A");
	char palabra[10];
	gotoxy(34,19); cout<<"CONTAR PALABRAS";
	gotoxy(32,21); cout<<"Palabra: __________";
	gotoxy(32,22); cout<<"Longitud: __";
	gotoxy(41,21); cin>>palabra;
	gotoxy(42,22); cout<<strlen(palabra);
	gotoxy(24,28); system("pause");
	menu();
	
}

void contarVocales(){
	system("color 5A");
	char palabra[10], voca[]={'a','e','i','o','u'};
	int voc=0;
	gotoxy(34,19); cout<<"CONTAR VOCALES";
	gotoxy(32,21); cout<<"Palabra: __________";
	gotoxy(32,22); cout<<"Vocales: __";
	gotoxy(41,21); cin>>palabra;
	for(int i=0; i<strlen(palabra); i++){
		for(int j=0; j<5; j++){
			if(palabra[i]==voca[j]){
				voc++;
			}
		}
	}
	gotoxy(41,22); cout<<voc;
	gotoxy(24,28); system("pause");
	menu();
}

void OrdenarPalabrasL(){
	system("color 5A");
	int num;
	struct Palabra{
		char palabra[10];
		int lon=0;
	}pal[num];
	Palabra x;
	char vocales[]={'A','E','I','O','U'};
	gotoxy(34,19); cout<<"ORDENAR LONGITUD";
	gotoxy(32,21); cout<<"Numero Palabras: __";
	gotoxy(49,21); cin>>num;
	system("cls"); menuf();
	for(int i=0; i<num; i++){
		gotoxy(32,21); cout<<"Palabra "<<i+1<<": ________";
		gotoxy(43,21); cin>>pal[i].palabra;
		
		pal[i].lon=strlen(pal[i].palabra);		
	}
	for(int i=0; i<num; i++){
		for(int j=0; j<num-1; j++){
			if(pal[j].lon>pal[j+1].lon){
				x = pal[j];
				pal[j]=pal[j+1];
				pal[j+1]=x;
			}
		}
	}
	for(int i=0; i<num; i++){
		system("cls"); menuf();
		gotoxy(34,21); cout<<i+1<<". "<<pal[i].palabra;
		gotoxy(34,23); cout<<"¿Siguiente?";
		retardo(0.5);
		gotoxy(24,28); system("pause");
	}
	
	menu();
}

void OrdenarPalabrasV(){
	system("color 5A");
	int num;
	struct Palabra{
		char palabra[10];
		int voc=0;
	}pal[num];
	Palabra x;
	char vocales[]={'A','E','I','O','U'}, voca[]={'a','e','i','o','u'};
	gotoxy(34,19); cout<<"ORDENAR VOCALES";
	gotoxy(32,21); cout<<"Numero Palabras: __";
	gotoxy(49,21); cin>>num;
	system("cls"); menuf();
	
	for(int i=0; i<num; i++){
		gotoxy(32,21); cout<<"Palabra "<<i+1<<": ________";
		gotoxy(43,21); cin>>pal[i].palabra;
		for(int j=0; j<strlen(pal[i].palabra); j++){
			for(int z=0; z<5; z++){
				if(pal[i].palabra[j]==voca[z]){
					pal[i].voc++;
				}
			}	
		}
	}
	for(int i=0; i<num; i++){
		for(int j=0; j<num-1; j++){
			if(pal[j].voc>pal[j+1].voc){
				x = pal[j];
				pal[j]=pal[j+1];
				pal[j+1]=x;
			}
		}
	}
	for(int i=0; i<num; i++){
		system("cls"); menuf();
		gotoxy(34,21); cout<<i+1<<". "<<pal[i].palabra;
		gotoxy(34,23); cout<<"¿Siguiente?";
		retardo(0.5);
		gotoxy(24,28); system("pause");
	}
	
	menu();
}

void retardo(int r){
	system("color 5C"); 
	
	Sleep(r*1000); // Retraso -> Milisegundos

}

void gotoxy(int x, int y){  	//Suma-80/2
	HANDLE iDen;
	iDen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD wPos;
	wPos.X = x;
	wPos.Y = y;
	
	SetConsoleCursorPosition(iDen, wPos);
	
}

void menuf(){
	system("cls");
	system("color 5F");
	gotoxy(35,4); cout<<"************";
	gotoxy(35,5); cout<<"* .:MENU:. *";
	gotoxy(35,6); cout<<"************";
	gotoxy(29,9); cout<<"Introduzca una opcion: ___  ";
	gotoxy(31,11); cout<<"1. Cotar Palabras";
	gotoxy(31,12); cout<<"2. Contas Vocales";
	gotoxy(31,13); cout<<"3. Ordenar por Longitud";
	gotoxy(31,14); cout<<"4. Ordenar por Vocales";
	gotoxy(31,15); cout<<"5. Salir";
	
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
}
