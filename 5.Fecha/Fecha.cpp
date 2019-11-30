#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int dia,mes,years; char mess;
	cout<<"Introduzca su fecha:\nDia: "; cin>>dia; cout<<"mes: "; cin>>mes; cout<<"año: "; cin>>years;
	if(mes==1){mess="Enero";} else if(mes==2){mess="Febrero";} else if(mes==3){mess="Marzo";}
	else if(mes==4){mess="Abril";} else if(mes==5){mess="Mayo";} else if(mes==6){mess="Junio";} 
	else if(mes==7){mess="Julio";} else if(mes==8){mess="Agosto";} else if(mes==9){mess="Septiembre";}
	else if(mes==10){mess="Octubre";} else if(mes==11){mess="Noviembre";} else if(mes==12){mess="Diciembre";}
	cout<<"Su fecha es: "<<dia<<" / "<<mess<<" / "<<years; cout<<"\n\n";
	system("pause");
	return 0;
}
