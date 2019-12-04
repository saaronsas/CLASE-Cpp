#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int filas;
	cout<<"PIRAMIDE\n********\n\nIntroduzca el numero de filas:  "; cin>>filas; cout<<"\n\n";
	for (int i=1; i<=filas; i++){
		for(int j=1; j<=filas+1-i; j++){
			cout<<"  ";
		}
		for(int j=1; j<(i+1)*2-2; j++){
			cout<<"* ";
		}
	cout<<endl<<"\n";
	}	
	cout<<"\n\n";
	system("pause");
	return 0;
	}
