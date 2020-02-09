#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Palabra{
	char palabra[30];
	int vocales=0;
	int pos;
}pal[5], *punteroPal = pal;

char Vocales[]={'A','E','I','O','U'};

void crearPalabra();
void contarVocales();
void imprimirPalabra();

int main(){
	system("color 1A");
	crearPalabra();
	contarVocales();
	imprimirPalabra();
	
	getch();
	return 0;
}

void crearPalabra(){
	for(int i=0; i<5; i++){
		cout<<"Introduzca la palabra ->"<<i+1<<":  ";
		cin.getline(pal[i].palabra,30,'\n');
		pal[i].pos=i;
		system("cls");
	}
}

void contarVocales(){
	int aux;
	for(int i=0; i<5; i++){
		for(int j=0; j<strlen(pal[i].palabra); j++){
			for(int z=0; z<5; z++){
				if(strupr((*(punteroPal+j)).palabra)==Vocales+z){
					pal[i].vocales++;
				}
			}
		}
	}
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			if(pal[j].vocales>pal[i+1].vocales){
				aux=pal[j].pos;
				pal[j].pos=pal[j+1].pos;
				pal[j+1].pos=aux;
			}
		}
	}
}

void imprimirPalabra(){
	for(int j=0; j<5; j++){
		for(int i=0; i<5; i++){
			if(pal[i].pos==j){
				cout<<i+1<<". "<<pal[i].palabra<<endl;
			}
		}
	}
	
}
