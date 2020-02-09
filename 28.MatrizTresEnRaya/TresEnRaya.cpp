#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void crearValores();
void comprobarValores();
void imprimirResult();

int matriz[3][3], aux;
char matrizs[3][3];
bool x,o;

int main(){
	system("color 1A");
	
	crearValores();
	comprobarValores();
	imprimirResult();
	
	return 0;
}

void crearValores(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matriz[i][j] = rand()%2;
		}
	}
}

void comprobarValores(){
	int var=0;
	
	while(true){
		int i=0;
		for(int j=0; j<3; j++){
			var+=matriz[i][j];
		}
		x=(var=3)? true:false;
		o=(var=0)? true:false;
		if(var=3||0) break;
		var=0;
		i++;
	}
	while(true){
		int i=0;
		for(int j=0; j<3; j++){
			var+=matriz[j][i];
		}
		x=(var=3)? true:false;
		o=(var=0)? true:false;
		if(var=3||0) break;
		var=0;
		i++;
	}
	while(true){
		int i=0, j=0;
		var+=matriz[i][j];
		i++; j++;
		x=(var=3)? true:false;
		o=(var=0)? true:false;
		if(var=3||0) break;
	}var=0;
	while(true){
		int i=3, j=0;
		var+=matriz[i][j];
		i--; j++;
		x=(var=3)? true:false;
		o=(var=0)? true:false;
		if(var=3||0) break;
	}var=0;
}

void imprimirResult(){
	
	
	for(int i=0; i<3; i++){
		cout<<"\n\t";
		for(int j=0; j<3; j++){
			switch(matriz[i][j]){
				case 0:
					matrizs[i][j]='X';
					break;
				case 1:
					matrizs[i][j]='O';
					break;
			}
			cout<<"  "<<matrizs[i][j];
		}
	}
	cout<<"\n\nEl resultado del juego es ";
	if(x=true){cout<<"-1";}
	else if(o=true){cout<<"1";}
	else{cout<<"0";}
	cout<<"\n";
}

