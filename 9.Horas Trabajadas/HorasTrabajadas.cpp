#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int horas; float coste;
	cout<<"Introduzca las horas que ha trabajado:   "; cin>>horas; cout<<"\nIntroduzca el coste por horas:   "; cin>>coste; cout<<"\n\n";
	if(horas<=40){cout<<"El trabajador cobrara "<<horas*coste<<" euros por "<<horas<<" trabajadas\n";}
	else{cout<<"El trabajador cobrara "<<(horas-40)*(1.5*coste)+40*coste<<" euros por "<<horas<<" trabajadas\n";}
	cout<<"\n\n";
	system("pause");
	return 0;
}
