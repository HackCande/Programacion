/*1. realize un programa que solicite de la entrada estandar un numero 
entero del 1 al 10 y  muestre en la salida estandar su tabla de multiplicar.*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
	}while((numero<1)||(numero>50));
	
	for(int i=1; i<=20; i++){
	cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;	
	}
	
	system("pause");
	return 0;
}
