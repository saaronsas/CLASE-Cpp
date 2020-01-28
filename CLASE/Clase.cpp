#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Alumno{
	int nota1, nota2, nota3;float final;
}alumno[30], *punteroAlumno = &alumno[30];

void Menu();
void PedirDatos();
void ImprimirDatos(Alumno *);

int num;

int main(){
	Menu();
	
	getch();
	return 0;
}

void Menu(){
	int aux=0;
	cout<<"\n\n¿Que desea hacer?"<<endl;
	cout<<"-> 1.Escribir Notas\n-> 2.Ver Notas\n-> 3.Salir\n  :   "; cin>>aux;
	if(aux==1){
		PedirDatos();
	} else if(aux==2){
		ImprimirDatos(punteroAlumno);
	} else if(aux==3){
		cout<<"\nHasta la proxima"<<endl;
	} else{
		cout<<"Introduzca una opcion valida (1-3)"<<endl;
		Menu();
	}
}

void PedirDatos(){
	cout<<"\n\nIntroduzca el numero del alumno:   "; cin>>num;
	cout<<"\nAhora vamos a introducir las notas de el alumno "<<num<<":  "<<endl;
	cout<<"\n  Nota 1:  "; cin>>(*(punteroAlumno+num)).nota1;
	cout<<"  Nota 2:  "; cin>>(*(punteroAlumno+num)).nota2;
	cout<<"  Nota 3:  "; cin>>(*(punteroAlumno+num)).nota3;
	(*(punteroAlumno+num)).final=((*(punteroAlumno+num)).nota1+(*(punteroAlumno+num)).nota2+(*(punteroAlumno+num)).nota3)/3;
	Menu();
}

void ImprimirDatos(Alumno *punteroAlumno){
	cout<<"\n\nIntroduzca el numero del alumno:   "; cin>>num;
	cout<<"\n\nEl alumno "<<num<<" ha tenido estas calificaciones:\n\n";
	cout<<"  Nota1:  "<<(*(punteroAlumno+num)).nota1<<endl;
	cout<<"  Nota2:  "<<(*(punteroAlumno+num)).nota2<<endl;
	cout<<"  Nota3:  "<<(*(punteroAlumno+num)).nota3<<endl;
	cout<<"\n  MEDIA:  "<<(*(punteroAlumno+num)).final<<endl;
	Menu();
}
