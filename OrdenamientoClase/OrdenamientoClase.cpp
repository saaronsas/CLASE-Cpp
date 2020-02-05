#include <iostream>
#include <conio.h>

using namespace std;

struct alumnos{
	char nombre[20];
	int amigo;
	int ubicacion;
}alumno[10], *punteroAlumno = &alumno[10];;

void PedirDatos();
void MoverPosiciones(alumnos *);
void ImprimirPosiciones(alumnos *);

int main(){
	PedirDatos();
	MoverPosiciones(punteroAlumno);
	ImprimirPosiciones(punteroAlumno);
	
	getch();
	return 0;
}

void PedirDatos(){
	for(int i=0; i<10; i++){
		fflush(stdin);
		cout<<"Alumno numero "<<i+1<<endl;
		cout<<"Nombre "<<i+1<<": "; cin.getline((*(punteroAlumno+i)).nombre,20,'\n');
		cout<<"Amigo(numero):  "; cin>>(*(punteroAlumno+i)).amigo; 
		(*(punteroAlumno+i)).ubicacion = i;
		cout<<"\n";
	}
}

void MoverPosiciones(alumnos *punteroAlumno){
	int aux;
	for(int j=0; j<10; j++){
		for(int i=0; i<10; i++){
			if((*(punteroAlumno+i)).ubicacion-1 or (*(punteroAlumno+i)).ubicacion+1 != (*(punteroAlumno+(*(punteroAlumno+i)).amigo)).ubicacion){
				if((*(punteroAlumno+i)).ubicacion < (*(punteroAlumno+(*(punteroAlumno+i)).amigo)).ubicacion){
					(*(punteroAlumno+i)).ubicacion++;
					(*(punteroAlumno+i+1)).ubicacion--;
				} else if((*(punteroAlumno+i)).ubicacion > (*(punteroAlumno+(*(punteroAlumno+i)).amigo)).ubicacion){
					(*(punteroAlumno+i)).ubicacion--;
					(*(punteroAlumno+i+1)).ubicacion++;
				}	
			}	
		}
	}
	
}

void ImprimirPosiciones(alumnos *punteroAlumno){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if((*(punteroAlumno+j)).ubicacion == i){
				cout<<"POSICION "<<i+1<<":   "<<(*(punteroAlumno+j)).nombre<<" --> "<<(*(punteroAlumno+(*(punteroAlumno+j)).amigo)).nombre<<endl;
			}	
		}
	
	}
}
