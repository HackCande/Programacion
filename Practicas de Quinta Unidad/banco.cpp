/*dados los siguientes datos de entrada: saldo interior, tipo de movimiento R(retiro) o 
D(deposito) y monto de la transicion, obtener como salida el saldo actual*/

#include<iostream>

using namespace std;

int main(){
	int saldo=1000, retiro=2, retiro2, deposito=3,saldo2=1, monto, hacer, final;
	
	cout<<"\n\tBienvenido a tu Banco"<<endl;
	cout<<"1.- Checar saldo"<<endl;
	cout<<"2.- Hacer un retiro"<<endl;
	cout<<"3.- Hacer un deposito"<<endl;
	
	
	do{
		cout<<"\nQue deseas hacer?"; cin>>hacer;
	}while((hacer<1)||(hacer>3));
	
	if(hacer==saldo2){
		cout<<"\n\tUsted checara su saldo actual"<<endl;
		cout<<"\nSu saldo actual es: "<<saldo<<endl<<endl;
	}else if(hacer==retiro){
		cout<<"\n\tUsted hara un retiro"<<endl;
		cout<<"\n¿Cuanto dinero retirara? "; cin>>retiro2;
		
		if(retiro2>saldo){
			cout<<"\nNo cuentas con ese dinero"<<endl<<endl;
		}else{
			saldo-=retiro2;
			
			cout<<"\nTu saldo actual es: "<<saldo<<endl;
		}
	}else if(hacer==deposito){
		cout<<"\n\tUsted hara un desposito";
		cout<<"\n¿Cuanto dinero va a depositar? "; cin>>monto;
		
		monto+=saldo;
		
		cout<<"\nTu saldo actual es: "<<monto<<endl;
	}
	
	
	system("pause");
	return 0;
}

