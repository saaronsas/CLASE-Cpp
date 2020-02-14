#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

void menu();
void menuf();
void gotoxy(int, int);
void contarLongitud();
void ordenarConsonantes();
void consonantesAzar();
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
	gotoxy(59,5); cout<<"OSCAR SAS ";
	gotoxy(59,6); cout<<"2 T // 26 ";
	
	gotoxy(35,4); cout<<"************";
	gotoxy(35,5); cout<<"* .:MENU:. *";
	gotoxy(35,6); cout<<"************";
	gotoxy(29,9); cout<<"Introduzca una opcion: ___  ";
	gotoxy(31,11); cout<<"1. Cotar Longitud";
	gotoxy(31,12); cout<<"2. Contar Consonantes";
	gotoxy(31,13); cout<<"3. Consonante al Azar";
	gotoxy(31,14); cout<<"4. Salir";
	
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
	
	if(opc>4){
		gotoxy(29,1); cout<<"Intentelo de nuevo (1-5)";
		retardo(2);
		return menu();
	}
	
	switch(opc){
		case 1:
			contarLongitud();
			break;
		case 2:
			ordenarConsonantes();
			break;
		case 3:
			consonantesAzar();
			break;
		case 4:
			system("cls"); menuf();
			gotoxy(35,21); cout<<"Saliendo...";	
			retardo(2);
			system("cls");
			getch();
	}
	
}

void contarLongitud(){                                  //-->1
	system("color 5A");
	char palabra[10];
	gotoxy(34,19); cout<<"CONTAR PALABRAS";
	gotoxy(32,21); cout<<"Palabra: __________";
	gotoxy(32,22); cout<<"Longitud: __";
	gotoxy(41,21); cin>>palabra;
	if(strlen(palabra)>=10){
        gotoxy(42,22); cout<<strlen(palabra);
        gotoxy(42,23); cout<<palabra;
    }
	gotoxy(42,22); cout<<strlen(palabra);
	gotoxy(24,28); system("pause");
	menu();
	
}



void ordenarConsonantes(){
    system("color 5A");
	int num;
	struct Palabra{
		char palabra[10];
		int cont;
	}pal[num];
	Palabra x;
	char vocales[]={'A','E','I','O','U'}, voca[]={'a','e','i','o','u'};
	gotoxy(34,19); cout<<"ORDENAR CONSONANTES";
	gotoxy(32,21); cout<<"Numero Palabras: __";
	gotoxy(49,21); cin>>num;
	system("cls"); menuf();
	
	for(int i=0; i<num; i++){
		gotoxy(32,21); cout<<"Palabra "<<i+1<<": ________";
		gotoxy(43,21); cin>>pal[i].palabra;
		for(int j=0; j<strlen(pal[i].palabra); j++){
			for(int z=0; z<5; z++){
				if(pal[i].palabra[j]!=voca[z]){
					pal[i].cont++;
				}
			}	
		}
	}
	for(int i=0; i<num; i++){
		for(int j=0; j<num-1; j++){
			if(pal[j].cont>pal[j+1].cont){
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
		gotoxy(24,28); system("pause");
	}
	
	menu();
}



void consonantesAzar(){                                                                 // -->3
     system("color 5A");
	char palabra[10], voca[]={'a','e','i','o','u'}, var[]={'*','_','@','#'};
	int random;
	gotoxy(34,19); cout<<"CONTAR VOCALES";
	gotoxy(32,21); cout<<"Palabra: __________";
	gotoxy(32,22); cout<<"N.Palabra: _________";
	gotoxy(41,21); cin>>palabra;
	for(int i=0; i<strlen(palabra); i++){
        random=3;  //Tendría que haber un random para que var cojiera una variable al azar
		for(int j=0; j<5; j++){
			if(palabra[i]==voca[j]){
				palabra[i]=var[random];
			}
		}
	}
	gotoxy(43,22); cout<<palabra;
	gotoxy(24,28); system("pause");
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
