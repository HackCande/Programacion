/*Realiza un programa que solicite de la entrada estandar un entero del 1 al 10 
y muestre de la salida estandar su tabla de multiplicar*/

#include<iostream>

using namespace std;

int main(){
	int n1;
	
	do{
		cout<<"Ingrese un valor: "; cin>>n1;
	}while((n1<1)||(n1>10));
	
	for(int i=1; i<=20; i++){
		cout<<n1<<" * "<<i<<" = "<<n1*i<<endl;
	}
	
	
	system("pause");
	return 0;
}
