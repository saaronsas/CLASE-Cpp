#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	string palabra; int suma=0, numero;
	cout<<"Introduzca su numero:   "; cin>>palabra; cout<<"\n";
	for(int i=0; i<=palabra.length(); i++){
		numero = palabra[i];
		suma = suma+numero;
	}
	cout<<"El resultado de la suma es "<<suma;
	cout<<"\n\n";	
	system("pause");
	return 0;
}
