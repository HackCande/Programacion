/*Se necesita un programa que permita manejar transacciones de una cuenta. 
El saldo inicial de la cuenta debe ser de Lps. 0.00
El programa debe solicitar al usuario que indique si desea realizar un depósito o un retiro.
Si el usuario elige hacer un retiro, se solicita un valor y debe verificarse que haya saldo suficiente 
para retirar. De no ser
así se envía un mensaje al usuario notificando esa situación. Si hay saldo suficiente, se resta el 
valor ingresado al saldo.
Si el usuario elige hacer un depósito se solicita un valor y ese valor se suma al saldo.
Al final de cada transacción se pregunta al usuario si desea realizar otra transacción. 
Si contesta afirmativamente, se
repiten las acciones anteriores.Si no,se termina el programa, mostrando el saldo final de la cuenta.*/

#include<iostream>

using namespace std;

int main(){
	float depositar=2, n1, n2, hacer1, retirar=1, saldo= 2000, hacer;
	
	while(1000000!=0){
	
	cout<<"\tBienvenido al Banco Digital"<<endl<<endl;
	
	cout<<"\n1.- Retiro"<<endl;
	cout<<"\n2.- Deposito"<<endl;
	cout<<"\nQue desea hacer? "; cin>>hacer;
	
	if(hacer==1){
		cout<<"\nCuanto desea retirar: "; cin>>n1;
		
		if(n1<saldo){
			
			saldo-=n1;
			cout<<"\nSu retiro fue realizado satisfactoriamente"<<endl;
			cout<<"\nSu saldo actual es de: "<<saldo<<endl;
		}else{
			cout<<"\nSu retiro no puede ser posible, no cuenta con ese dinero"<<endl;
		}
	}
	if(hacer==2){
		cout<<"\nCuanto dinero deseas depositar? "; cin>>n2;
		saldo+=n2;
		cout<<"\nTu deposito fue realizado correctamente"<<endl;
		cout<<"\nTu saldo actual es de: "<<saldo<<endl;
		
	
	
}
}
	system("pause");
	return 0;
}
