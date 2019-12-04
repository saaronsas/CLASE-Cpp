#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero;
	cout<<"Introduzca su numero:   "; cin>>numero; cout<<"\n\n";
	for(int i=numero-1; i>numero-4; i--){cout<<i<<",";}
	cout<<" y ";
	for(int i=numero+1; i<numero+4; i++){cout<<i<<",";}
	cout<<"\n\n";
	system("pause");
	return 0;
}
