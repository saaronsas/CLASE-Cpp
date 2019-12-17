#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int dia,mess,years; char mes;
	cout<<"Introduzca su fecha:\nDia: "; cin>>dia; cout<<"mes: "; cin>>mes; cout<<"año: "; cin>>years;
	if(mes=="enero"){mess="1";} else if(mes=="febrero"){mess="2";} else if(mes=="marzo"){mess="3";}
	else if(mes=="abril"){mess="4";} else if(mes=="mayo"){mess="5";} else if(mes=="junio"){mess="6";} 
	else if(mes=="julio"){mess="7";} else if(mes=="agosto"){mess="8";} else if(mes=="septiembre"){mess="9";}
	else if(mes=="octubre"){mess="10";} else if(mes=="noviembre"){mess="11";} else if(mes=="diciembre"){mess="12";} else{cout<<"El mes introducido no extiste";}
	cout<<"Su fecha es: "<<dia<<" / "<<mess<<" / "<<years; cout<<"\n\n";
	system("pause");
	return 0;
}
