#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	//Escribir cadena de caracteres
		char palabra[10];
		
		cin.getline(palabra,10,'\n');
	
	//Longitud cadena de caracteres - funcion strlen()
		int longitud=0;
	
		longitud=strlen(palabra);
	
		cout<<palabra;	
	
	//Copiar el contenido de una cadena a otra - funcion strcpy()
		char nombre[]="Oscar";
		char nombre2[20];
	
		strcpy(nombre2,nombre);
	
		cout<<nombre2;
	
	//Comparar cadenas - funcion strcmp()
		char palabra1[];
		char palabra2[];
	
		if(strcmp(palabra1,palabra2)==0){}; //Ambas palabras son iguales
		if(strcmp(palabra1,palabra2)!=0){}; //Ambas palabras son diferentes
		if(strcmp(palabra1,palabra2)<,>0){}; //palabra1 es < o > que palabra2
	
	//Añadir o concatenar una cadena con otra - funcion strcat()
		har cad1[]="Esto es una cadena";
		char cad2[]=" de ejemplo";
		char cad3[30];
	
		strcpy(cad3,cad1); //cad3= "Esto es una cadena"
		strcat(cad3,cad2);) //cad3= "Esto es una cadena de ejemplo"
	
		cout<<cad3;
	
	//Invertir una cadena - funcion strrev()
		char cad[]="hola";
		
		strrev(cad);
		
		cout<<cad;//olah
		
	//Pasar una palabra a MAYUSCULA - funcion strupr()
		char palabra[]="oscar";
		
		strupr(palabra);
		
		cout<<palabra;//OSCAR
		
	//Pasar una palabra a minusculas - funcion strlwr()
		char palabra[]="OSCAR";
		
		strlwr(palabra);
		
		cout<<palabra;//oscar
		
	//Transformar una cadena a numeros - funcion atoi() y atof()
		#include<stdlib.h>
		char cad[]="123";
		int numero;
		
		numero=atoi(numero); cout<<numero;//123
		
		char cad[]="123.456";
		
		numero=atof(numero); cout<<numero;//123.456
		
	//Contar vocales
		char palabra[20];
		int vocal_a=0,...
		
		for(int i=0;int<20;i++){
			switch(palabra[i]){
				case 'a': vocal_a++;
				...
			}
		}
	
	
	getch();
	return 0;
}
