#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra[10], *p, *aux;
	
	for(int i=0; i<10; i++){
		fflush(stdin);
		cout<<"Palabra "<<i+1<<": "; cin>>palabra[i];
	}	
	p=palabra;
	for(int i=0; i<10; i++){
		for(int j=0; j<9; j++){
			if(strlen(*(p+j))>strlen(*(p+j+1))){
				*aux=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=*aux;
			}
		}
	}
	for(int i=0; i<10; i++){
		cout<<*(p+i)<<"  ";
	}
	getch();
	return 0;
}
