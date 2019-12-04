#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	string palabra1,palabra2;
	cout<<"Introduzca su primera palabra:   "; cin>>palabra1; cout<<"\nIntroduzca su segunda palabra:   "; cin>>palabra2;
	if(palabra1[0]==palabra2[0]){cout<<"\nLa primera letra de cada palabra son iguales y esta es la "<<palabra1[0];}
	else{cout<<"\nLa primera letra de las palabras son distintas ya que una es "<<palabra1[0]<<" y la otra es "<<palabra2[0];}
	cout<<"\n\n";
	system ("pause");
	return 0;
}
