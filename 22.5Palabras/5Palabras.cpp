#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Palabras{
	char *palabra;
}palabra[5], *punteroPalabra = palabra;

void pedirDatos();
void transformarDatos(Palabras *);

char word[5][30];

int main(){
	pedirDatos();
	transformarDatos(punteroPalabra);
	
	delete[] punteroPalabra->palabra;
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0; i<5; i++){
		cout<<"Introduzca el nombre numero "<<i+1<<":  "; cin.getline(word[i],30,'\n');
		(punteroPalabra+i)->palabra = new char[strlen(word[i])];
		(punteroPalabra+i)->palabra = word[i];
	}
}

void transformarDatos(Palabras *punteroPalabra){
	int pos, var[5], max=0;
	for(int i=0; i<5; i++){
		strupr((punteroPalabra+i)->palabra);
		while((punteroPalabra+i)->palabra){				//ERROR
			switch((punteroPalabra+i)->palabra){
				case 'A': var[i]++;
			}
		}
		if(var[i]>max){
			max = var[i];
			pos = i;
		}
	}
	cout<<"La palabra con mas 'A' es "<<(punteroPalabra+pos)->palabra<<endl;
}
