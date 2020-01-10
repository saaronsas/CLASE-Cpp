#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char matriz[10][10], palabra[10];
    for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			matriz[i][j]= 'A'+(rand()%('Z'-'A'));
		}
	}
    for(int i=0; i<10; i++){
		cout<<"\n   ";
		for(int j=0; j<10; j++){
			cout<<" "<<matriz[i][j];
		}
	}
	cout<<"\n\nIntroduzca una palabra:   "; cin.getline(palabra,10,'\n');
	int x = 10-strlen(palabra); int y = 1+rand()%2; int z = 1+rand()%10; cout<<z;
	switch(y){
		case 1:
			for(int i=x; i<10; i++){	//5
				for(int b=0; b<strlen(palabra);b++){
			        if(strlen(palabra)<=10){
						if(palabra[b]>=97&&palabra[b]<=122){	
							matriz[i][z] = palabra[b]-32;
						}else{
							matriz[i][z] = palabra[b];
						}
			        }
			        else{
			            cout<<"ERROR.	Introduzca una palabra menor a 10"<<endl;
			        }
			    }
			} 
		case 2:
			for(int i=10-x; i>0; i--){	//5
				for(int b=0; b<strlen(palabra);b++){
			        if(strlen(palabra)<=10){
			        	if(palabra[b]>=97&&palabra[b]<=122){	
							matriz[i][z] = palabra[b]-32;
						}else{
							matriz[i][z] = palabra[b];
						}
			        }
			        else{
			            cout<<"ERROR.	Introduzca una palabra menor a 10"<<endl;
			    	}
			    }
			}  
	}
	cout<<"Su nueva SOPA ;)"<<endl;
	for(int i=0; i<10; i++){
		cout<<"\n   ";
		for(int j=0; j<10; j++){
			cout<<" "<<matriz[i][j];
		}
	}
	
    getch();
    return 0;
    }
