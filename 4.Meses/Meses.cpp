#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int mes;
	cout<<"Introduzca el numero de mes: "; cin>>mes;
	if(mes==1){cout<<"Enero";}
	else if(mes==2){cout<<"Febrero";}
	else if(mes==3){cout<<"Marzo";}
	else if(mes==4){cout<<"Abril";}
	else if(mes==5){cout<<"Mayo";}
	else if(mes==6){cout<<"Junio";}
	else if(mes==7){cout<<"Julio";}
	else if(mes==8){cout<<"Agosto";}
	else if(mes==9){cout<<"Septiembre";}
	else if(mes==10){cout<<"Octubre";}
	else if(mes==11){cout<<"Noviembre";}
	else if(mes==12){cout<<"Diciembre";}
	else{cout<<"Introduzca un mes valido";}
	cout<<"\n\n";
	system("pause");
	return 0;
}
