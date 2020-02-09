#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra[4][30], vocales[]={'a','e','i','o','u'};
	int nvocales=0;
	
	for(int i=0; i<4; i++){
		cout<<"Introduzca su palabra: "; cin.getline(palabra[i],30,'\n');
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<strlen(palabra[i]); j++){
			for(int z=0; z<5; z++){
				if(palabra[i][j]==vocales[z]){
					palabra[i][j]='u';
					nvocales++;
				}
			}
		}
		cout<<palabra[i]<<endl;
	}
	
	cout<<"Numero de Vocales: "<<nvocales;
	getch();
	return 0;
}
