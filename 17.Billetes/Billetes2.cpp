#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	const char *billetes[] = {"b500","b200","b100","b50","b20","b10","b5","m2","m1"};
	const char *numero[] = 	{"500","200","100","50","20","10","5","2","1"};
	int dinero,resto,gasto,coste;
	cout<<"Introduzca la cantidad de dinero:   "; cin>>dinero; cout<<"\n\n"; int dinero2=dinero;
	cout<<"Tienes: ";
	for(int i=0; i<9; i++){
		string x=numero[i];
		if(dinero/atoi(x.c_str())>=0){
			int var = dinero/atoi(x.c_str());
			resto = dinero-var*atoi(x.c_str()); 
			cout<<var<<" de "<<numero[i]<<", ";
			dinero=resto;
		} 
	}
	cout<<"\n\nIntroduzca la cantidad de dinero a gastar:   "; cin>>coste; cout<<"\n\nTe devolveran: ";gasto = dinero2-coste;
	for(int i=0; i<9; i++){
		string x=numero[i];
		if(gasto/atoi(x.c_str())>=0){
			int var = gasto/atoi(x.c_str());
			resto = gasto-var*atoi(x.c_str()); 
			cout<<abs(var)<<" de "<<numero[i]<<", ";
			gasto=resto;
		} 
	}       	
	cout<<"\n\n";	
	system("pause");
	return 0;
}
