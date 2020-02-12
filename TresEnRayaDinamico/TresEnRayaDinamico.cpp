#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void escojerFichas();
void mostrarMatriz();
void pedirDato2();
void pedirDato1();
int comprobarVictoria();
int mensaje();

char cmatriz[3][3], win;
char aux;
int matriz[3][3];
int ficha, ficham, dest=0;
bool x=false,o=false;



int main(){
	system("color 5F");
	system("cls");
	escojerFichas();
	do{
		mostrarMatriz();
		pedirDato1();
		comprobarVictoria();
		system("cls"); if(dest==1) break;
		mostrarMatriz();
		pedirDato2();
		comprobarVictoria();
		system("cls"); if(dest==1) break;
		fflush(stdin);
	}while(matriz!=NULL);
	mensaje();
	getch();
	return 0;
}

void escojerFichas(){
	
	cout<<"\tCon que fichas deseas jugar\n\n\tX   O\n\t     -->"; cin>>aux; 
	ficha=(aux='x'||'X')? -1:1; system("cls");
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
	int x,y; char aux1;
	system("color 5A");
	 
	aux1=(aux='x'||'X')? 'X':'O';
	cout<<"\tJugador 1 --> "<<aux1<<endl;
	cout<<"\tEscoje la casilla que deseas "<<ficha<<" --> [x][y]"<<endl;
	cout<<"  -> x:  "; cin>>x;
	cout<<"  -> y:  "; cin>>y;
	if(matriz[x][y]==NULL){
		cmatriz[x][y]=(ficha==-1)? 'X':'O';
		matriz[x][y]=ficha;
	}else{cout<<endl;return pedirDato1();}
	if(x&&y<3){
		cmatriz[x][y]=(ficha==-1)? 'X':'O';
		matriz[x][y]=ficha;
	}else{cout<<endl;return pedirDato1();}
}

void pedirDato2(){
	int x,y; char aux2;
	system("color 5B");
	ficham=(ficha==-1)? 1:-1;
	aux2=(ficham==1)? 'O':'X';
	cout<<"\tJugador 1 --> "<<aux2<<endl;
	cout<<"\tEscoje la casilla que deseas "<<ficha<<" --> [x][y]"<<endl;
	cout<<"  -> x:  "; cin>>x;
	cout<<"  -> y:  "; cin>>y;
	if(matriz[x][y]==NULL){
		cmatriz[x][y]=(ficha==-1)? 'O':'X';
		matriz[x][y]=ficham;
	}else{cout<<endl;return pedirDato2();}
	if(x&&y<3){
		cmatriz[x][y]=(ficha==-1)? 'O':'X';
		matriz[x][y]=ficham;
	}else{cout<<endl;return pedirDato2();}
		
}

int comprobarVictoria(){
	int var=0, i=0, empate=0;
	char auxx;
	
	while(i<3){
		i=0;
		for(int j=0; j<3; j++){		//columnas
			var+=matriz[i][j];
		}
		x=(var=3)? true:false;
		o=(var=-3)? true:false;
		if(var=3||-3) break;
		var=0;
		i++;
	}
	while(i<3){
		i=0;
		for(int j=0; j<3; j++){		//filas
			var+=matriz[j][i];
		}
		x=(var=3)? true:false;
		o=(var=-3)? true:false;
		if(var=3||-3) break;
		var=0;
		i++;
	}
	while(i<3){						//diagonal decha->abajo
		i=0; int j=0;
		var+=matriz[i][j];
		i++; j++;
		x=(var=3)? true:false;
		o=(var=-3)? true:false;
		if(var=3||-3) break;
	}var=0;
	while(i<3){						//diagonal izq->abajo
		i=3; int j=0;
		var+=matriz[i][j];
		i--; j++;
		x=(var=3)? true:false;
		o=(var=-3)? true:false;
		if(var=3||-3) break;
	}var=0;
	if(x||o==true){
		dest=1;
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(matriz[i][j]!=NULL){
				empate++;
			}
		}
	}
	if(empate==9){
		cout<<"\tHa habido un empate...\n\n\t   Desea volver a jugar?(S|N)\n\t    --> "; cin>>auxx;
	return (auxx=='s'||'S')? main():getch();
	}
}

int mensaje(){
	char auxx;
	win=(x==true)? 'X':'O';
	if(win=='X') cout<<"\t//El ganador es\\ \n\n"<<"\tX       X\n\t  X   X\n\t    X\n\t  X   X\n\tX       X"<<endl;
	else cout<<"\t//El ganador es\\\n\n"<<"\t OOOO \n\tO    O\n\tO    O\n\tO    O\n\t OOOO "<<endl;
	
	cout<<"\n\tDesea volver a jugar?(S|N)\n\t    --> "; cin>>auxx;
	return (auxx='s'||'S')? main():getch();
}
















//LA OPCION ANTIGUA

/*#include <iostream>
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
}*/
