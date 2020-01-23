#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

bool VerificarCubo(int ***);
void CrearCubo();
void ImprimirCubo(int ***);

int ***cubo, num;

int main(){
	CrearCubo();
	ImprimirCubo(cubo);
	
	for(int i=0; i<3; i++){
		delete[] cubo[i];
		for(int j=0; j<3; j++){
			delete[] cubo[j];
		}
	} delete[] cubo;
	
	getch();
	return 0;
}

void CrearCubo(){
	cubo = new int**[3]; 	//filas --> x
	for(int x=0; x<3; x++) {
		cubo[x] = new int*[3]; 	//columnas --> y
		for(int y=0; y<3; y++){
			cubo[3][3] = new int[3]; //plano --> z
		}
	}
	for(int x=0; x<3; x++){
		for(int y=0; y<3; y++){
			num = '0'+(rand()%9);
			for(int z=0; z<3; z++){
				*(*(*(cubo+x)+y)+z) = num+48;
			}
		}
	}	
}

void ImprimirCubo(int ***cubo){
	for(int a=0; a<6; a++){
		if(a==1||6){
			cout<<a<<"...\n\n";
			while(int z=0 != 2){
				for(int x=0; x<3; x++){
					for(int y=0; y<3; y++){
						cout<<"  "<<*(*(*(cubo+x)+y)+z);
					}
					cout<<"\n";
				}
				z+=2;
			}
		} else if(a==2||5){
			cout<<a<<"...\n\n";
			while(int x=0 != 2){
				for(int z=0; z<3; z++){
					for(int y=0; y<3; y++){
						cout<<"  "<<*(*(*(cubo+x)+y)+z);
					}
					cout<<"\n";
				}
				x+=2;
			}
		} else if(a==3||4){
			cout<<a<<"...\n\n";
			while(int y=0 != 2){
				for(int z=0; z<3; z++){
					for(int x=0; x<3; x++){
						cout<<"  "<<*(*(*(cubo+x)+y)+z);
					}
					cout<<"\n";
				}
				y+=2;
			}
		}
	}
	
}
