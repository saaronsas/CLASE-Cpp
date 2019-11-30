#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float euros,dolares; int j;
	cout<<"Que desea pasar\n1.Euros-Dolares\n2.Dolares-Euros\n:";	cin>>j;
	if(j==1){
		cout<<"\nEuros: "; cin>>euros; 
		cout<<"\nEl cambio de "<<euros<<" euros a dolares son "<<euros*1.10<<" dolares";
	}else if(j==2){
		cout<<"\nDolares: "; cin>>dolares; 
		cout<<"\nEl cambio de "<<dolares<<" dolares a euros son "<<dolares/1.10<<" euros";
	}else{
		cout<<"Introduzca una opcion valida";
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
