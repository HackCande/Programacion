/*hacer un programa que simule un cajero automatico
con un saldo inicial de 1000 dolares.*/

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial=1000, opc;
	float ingresar, retiro, saldo=0;
	cout<<"\tBienvenido a su Cajero Virtual"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Que deseas hacer: ";
	cin>>opc;
	
	switch(opc){
		case 1 :
			cout<<"\nCuanto dinero va a ingresar: "; cin>>ingresar;
			
			saldo=saldo_inicial+ingresar;
			
			cout<<"\nTu saldo es: "<<saldo;break;
			
		case 2 :
			cout<<"\nCuanto dinero desea retirar: "; cin>>retiro;
						
			if(retiro>saldo_inicial){
				cout<<"\nNo tienes el dinero suficiente para hacer el retiro";	
			}
			else{
				saldo = saldo_inicial-retiro;
				cout<<"\nTu saldo es: "<<saldo;break;
			}
			
			
		case 3 : break;	
		
		system("pause");
	}
	//system("pause");
	
	return 0;
	
}
