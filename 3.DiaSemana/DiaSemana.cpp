#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int dia;
	cout<<"Introduzca su dia de la semana\nDia: "; cin>>dia;
	if(dia==1){cout<<"Lunes";}
	else if(dia==2){cout<<"Martes";}
	else if(dia==3){cout<<"Miercoles";}
	else if(dia==4){cout<<"Jueves";}
	else if(dia==5){cout<<"Viernes";}
	else if(dia==6){cout<<"Sabado";}
	else if(dia==7){cout<<"Domingo";}
	else{cout<<"Introduzca algo valido";}
	cout<<"\n\n";
	system("pause");
	return 0;
}
