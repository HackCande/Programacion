#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma, cuadrado;
	
	for(int i=1; i<=10; i++){
		cuadrado= i*i;
		suma+= cuadrado;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}
