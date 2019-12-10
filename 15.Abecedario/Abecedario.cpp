#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
	string palabra;
	cout<<"Introduzca su palabra:   "; cin>>palabra; cout<<"\n";
	for(char i='a'; i<'z'; i++){
		if(char(palabra[0])==i){cout<<"La primera letra de la palabra es la "<<i;}
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
