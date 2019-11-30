#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int j; float a,b;
	cout<<"Elija un modo:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n:"; cin>>j; cout<<"\n";
	if(j==1){cout<<"SUMA\n****\na: "; cin>>a; cout<<"b: "; cin>>b; cout<<"\na+b= "<<a+b;}
	else if(j==2){cout<<"RESTA\n*****\na: "; cin>>a; cout<<"b: "; cin>>b; cout<<"\na-b= "<<a-b;}
	else if(j==3){cout<<"MULTIPLICACION\n**************\na: "; cin>>a; cout<<"b: "; cin>>b; cout<<"\na*b= "<<a*b;}
	else if(j==4){cout<<"DIVISION\n*****\na: "; cin>>a; cout<<"b: "; cin>>b; cout<<"\na/b= "<<a/b;}
	else{cout<<"Introduzca una opcion valida";}
	cout<<"\n\n";
	system("pause");
	return 0;
}
