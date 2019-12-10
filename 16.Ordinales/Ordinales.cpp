#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    const char *unidades[] =
        {"primero", "segundo", "tercero" ,"cuarto" ,"quinto" ,"sexto" ,
         "septimo" ,"octavo" ,"noveno" ,"decimo"};
    const char *decenas[] =
        {"decimo","vigesimo", "trigesimo","cuadragesimo",
         "quintuagesimo","sexagesimo", "septuagesimo", 
         "octogesimo", "nonagesimo"};
    const char *centenas[] =
        {"centesimo","ducentesimo", "tricentesimo","cuadringentesimo",
         "quingentesimo", "sexcentesimo", "septingentesimo", 
         "octingentesimo", "noningentesimo"};
    int numero;
    
    cout<<"Introduzca su numero:  "; cin>>numero;  cout<<"\n\n";
    int centena = int(numero/100);
    int decena = int((numero-centena*100)/10);
    int unidade = int(numero-centena*100-decena*10);
    
    cout<<"El numero "<<numero<<" es igual a '"<<centenas[centena-1]<<" "<<decenas[decena-1]<<" "<<unidades[unidade-1]<<"'\n";
    
    cout<<"\n\n";
    system("pause");
    return 0;
    }
