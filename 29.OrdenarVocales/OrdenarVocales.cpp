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

/*#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Palabra{
	char palabra[30];
	int vocales=0;
}voc[4];

int main(){
	char vocales[]={'a','e','i','o','u'}, aux;
	Palabra x;
	for(int i=0; i<4; i++){
		cout<<"Palabra["<<i+1<<"]:  "; cin.getline(voc[i].palabra,30,'\n');
	}
	system("cls");
	for(int i=0; i<4; i++){
		for(int j=0; j<strlen(voc[i].palabra); j++){
			for(int z=0; z<5; z++){
				if(voc[i].palabra[j]==vocales[z]){
					voc[i].vocales++;
				}
			}
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(voc[j].vocales>voc[j+1].vocales){
				aux = voc[j].vocales;
				voc[j].vocales=voc[j+1].vocales;
				voc[j+1].vocales=aux;
			}
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			if(voc[j].vocales>voc[j].vocales){
				x = voc[j];
				voc[j]=voc[j+1];
				voc[j+1]=x;
			}
		/*cout<<"Posicion "<<i+1<<".\n";
		cout<<"\tPalabra: "<<voc[i].palabra<<endl;
		cout<<"\tNumero Vocales: "<<voc[i].vocales<<endl<<endl;*/
		}
	}
	for(int i=0; i<4; i++){
		cout<<voc[i].palabra<<" ";
	}
	
	getch();
	return 0;
}*/
