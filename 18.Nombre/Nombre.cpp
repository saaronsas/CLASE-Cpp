#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	string nombre,apellido1,apellido2;
	cout<<"Introduzca los siguientes datos acorde a su nombre:\n\nNombre:   "; cin>>nombre; cout<<"\nApellido primero:   ";
	cin>>apellido1; cout<<"\nApellido segundo:   "; cin>>apellido2;
	cout<<"\n\nSu nombre es "<<nombre<<" "<<apellido1<<" "<<apellido2<<".";
	cout<<"\n\n";
	system("pause");
	return 0;
}
