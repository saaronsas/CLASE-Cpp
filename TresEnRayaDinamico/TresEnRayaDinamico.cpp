#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
void escojerFichas();
void mostrarMatriz();
void pedirDato2();
void pedirDato1();
void comprobarVictoria();

char cmatriz[3][3];
int matriz[3][3];
int ficha, ficham, dest;
bool x,o;

int main(){
	escojerFichas();
	do{
		mostrarMatriz();
		pedirDato1();
		system("cls"); if(dest==1) break;
		mostrarMatriz();
		pedirDato2();
		system("cls"); if(dest==1) break;
	}while(matriz!=NULL);
	
	getch();
	return 0;
}

void escojerFichas(){
	char aux;
	
	cout<<"\tCon que fichas deseas jugar\n\n\tX   O\n\t     -->"; cin>>aux; 
	ficha=(aux=='x'||'X')? 0:1; system("cls");
}

void mostrarMatriz(){
	cout<<"\t.:TABLERO:."<<endl<<"\t~~~~~~~~~~"<<endl<<endl;
	cout<<"\t "<<cmatriz[0][0]<<" | "<<cmatriz[0][1]<<" | "<<cmatriz[0][2]<<endl;
	cout<<"\t ---------"<<endl;
	cout<<"\t "<<cmatriz[1][0]<<" | "<<cmatriz[1][1]<<" | "<<cmatriz[1][2]<<endl;
	cout<<"\t ---------"<<endl;
	cout<<"\t "<<cmatriz[2][0]<<" | "<<cmatriz[2][1]<<" | "<<cmatriz[2][2]<<endl;
	
}

void pedirDato1(){
	int x,y; char aux, aux1;
	 
	aux1=(aux=='x'||'X')? 'X':'O';
	cout<<"\tJugador 1 --> "<<aux1<<endl;
	cout<<"\tEscoje la casilla que deseas "<<ficha<<" --> [x][y]"<<endl;
	cout<<"    x:  "; cin>>x;
	cout<<"    y:  "; cin>>y;
	if(matriz[x][y]!=NULL){
		cmatriz[x][y]=(ficha==0)? 'X':'O';
		matriz[x][y]=aux1;
	}else{return pedirDato1();}
}

void pedirDato2(){
	int x,y; char aux2;
	ficham=(ficha==0)? 1:0;
	aux2=(ficham==1)? 'O':'X';
	cout<<"\tJugador 1 --> "<<aux2<<endl;
	cout<<"\tEscoje la casilla que deseas "<<ficha<<" --> [x][y]"<<endl;
	cout<<"    x:  "; cin>>x;
	cout<<"    y:  "; cin>>y;
	if(matriz[x][y]!=NULL){
		cmatriz[x][y]=(ficha==0)? 'O':'X';
		matriz[x][y]=aux2;
	}else{return pedirDato2();}
		
}

void comprobarVictoria(){
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
	if(x||o==true){
		dest=1;
	}
}
