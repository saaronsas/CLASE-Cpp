#include <iostream>
#include <stdlib.h>

using namespace std;

void corrector(){
	string dni; int result; string letra;
	cout<<"Introduzca su DNI:   "; cin>>dni; cout<<"\n\n";
	char letras[] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N',
					 'J','Z','S','Q','V','H','L','C','K','E'};
	if(dni.length()==9){		
		result = dni[0,8]%23;
		if(dni[8]==letras[result]){
			cout<<"--> El DNI "<<dni<<" es correcto";}
		else{cout<<"--> El "<<dni<<" no es correcto...\n\n--> Asegurese de haberlo escrito bien";}
	} else {
		cout<<"Asegurese de haberlo escrito bien...";}
}

void letra(){
	string dni; int result; string letra;
	cout<<"Introduzca su DNI (sin numero):   "; cin>>dni; cout<<"\n\n";
	char letras[] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N',
					 'J','Z','S','Q','V','H','L','C','K','E'};
	if(dni.length()==8){		
		result = dni[0,8]%23;
		cout<<"La letra de su DNI es la "<<letras[result]<<" y su DNI es el "<<dni<<letras[result]<<"\n";
	} else {
		cout<<"Asegurese de haberlo escrito bien...";}

}


int main(){
	int opc;
	cout<<"Introduzca que desea hacer:\n\n1.Saber si su DNI es correcto.\n2.Saber la letra de su DNI.\n:   "; cin>>opc; cout<<"\n\n";
	if(opc==1){corrector();} else if(opc==2){letra();}
	cout<<"\n\n\n";
	system("pause");
	return 0;
}


/*string dni; int result; string letra;
	cout<<"Introduzca su DNI:   "; cin>>dni; cout<<"\n\n";
	char letras[] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N',
					 'J','Z','S','Q','V','H','L','C','K','E'};
	if(dni.length()==9){		
		result = dni[0,8]%23;
		if(dni[8]==letras[result]){
			cout<<"El DNI "<<dni<<" es correcto";}
		else{cout<<"El "<<dni<<" no es correcto...\n\n--> Asegurese de haberlo escrito bien";}
	} else {
		cout<<"Asegurese de haberlo escrito bien...";}*/



