#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void crearMatriz();
bool verificarMatriz(int **, int);
void imprimir(int **);

int **matriz, num;

int main(){
	crearMatriz();
	verificarMatriz(matriz, num);
	imprimir(matriz);
	
	getch();
	return 0;
}

bool verificarMatriz(int **matriz, int num){
	int filas=0, col=0; bool var;
	while(filas<4){	
		for(int i=0; i<4; i++){		//Columnas
			num+=*(*(matriz+filas)+i);
		}
		if(num==4){
			var = false;
		}
		filas++;
	}
	while(col<4){	
		for(int i=0; i<4; i++){		//Filas
			num+=*(*(matriz+i)+col);
		}
		if(num==4){
			var = false;
		}
		col++;
	}
	if(var==false){
		return false;
	} else {
		return true;
	}
}

void crearMatriz(){
	matriz = new int*[4];
	for(int i=0; i<4; i++){
		matriz[i] = new int[4];
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			num = '0'+(rand()%(2));
			while(verificarMatriz(matriz, num)==false){
				num = '0'+(rand()%(2));
			}
			*(*(matriz+i)+j) = num-48;
		}
	}
}

void imprimir(int **matriz){
	for(int i=0; i<4; i++){
		cout<<"   ";
		for(int j=0; j<4; j++){
			cout<<" "<<*(*(matriz+i)+j);
		}
		cout<<"\n";
	}
}
