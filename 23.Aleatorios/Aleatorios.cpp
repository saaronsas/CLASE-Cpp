#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
 
 int main(){
 	char matriz[3][3];
 	for(int i=0; i<3; i++){
 		for(int j=0; j<3; j++){
 			matriz[i][j] = 'A'+(rand()%(3));
 		}
 	}
 	cout<<"Esta es su nueva MATRIZ...\n\n";
 	for(int i=0; i<3; i++){
 		cout<<"   ";
 		for(int j=0; j<3; j++){
 			cout<<" "<<matriz[i][j];
 		}
 		cout<<"\n";
 	}
 	getch();
 	return 0;
 }
