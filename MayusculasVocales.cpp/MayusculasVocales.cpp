#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	char vocales[] = {'a','e','i','o','u'}, frase[300];
	cout<<"Introduzca su frase:   "; cin.getline(frase,300,'\n');
	for(int i=0; i<4; i++){
		for(int j=0; j<strlen(frase);j++){
			if(frase[j]==vocales[i]){
				frase[j] = frase[j]-32;
			}	
		}
	}
	cout<<frase<<"\n\n";
	system("pause");
	return 0;
}
