#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char *palabra, word[5], aux;
	palabra = new char[5];
	for(int i=0; i<5; i++){
		fflush(stdin);
		cout<<"Introduzca su palabra ["<<i+1<<"]:   "; cin>>word[i];
		*(palabra+i) = word[i];
	}
	
	for(int i=0; i<4; i++){
		if(strlen(palabra+i)<strlen(palabra+i+1)){
			aux=*palabra+i;
			*(palabra+i)=*palabra+i+1;
			*(palabra+i+1)=aux;
		}
	}
	for(int i=0; i<5; i++){
		cout<<" "<<*(palabra+i);
	}
	getch();
	return 0;
}
