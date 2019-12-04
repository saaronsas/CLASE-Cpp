#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float money,all; int tipo;
	cout<<"Introduzca una cantidad de dinero:   "; cin>>money;	cout<<"\n\nIntroduzca el importe adicional\n";
	cout<<"1.IVA (21%)\n2.IVA General (16%)\n3.IVA reducido (7%)\n4.IVA Supereducido (4%)\n:   "; cin>>tipo;
	if(tipo==1){all=money*0.21;}
	else if(tipo==2){all=money*0.16;}
	else if(tipo==3){all=money*0.07;}
	else if(tipo==4){all=money*0.04;}
	else{cout<<"Introduca una opcion valida";}
	cout<<"El precio de "<<money<<" euros con el IVA aplicado pasa a ser de "<<money+all<<" euros";
	cout<<"\n\n";
	system("pause");
	return 0;
}
