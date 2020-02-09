#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
	system("color 1A");
	
	int vector[]={1,5,2,3,4}, *puntero;
	puntero=vector;
	
	
	for(int i=0; i<5; i++){
		cout<<"Vector["<<i<<"] = "<<*puntero++<<" --> "<<puntero<<endl;
	}
	
	
	getch();
	return 0;
}
