#include<iostream>

using namespace std;

class cuenta{
	private:
		int saldo_act, retiro=0, deposito, hacer;
	public:
		void credit();
		void cargar();
		void obtener_saldo();
};

void cuenta::credit(){
	cout<<"Ingrese el saldo actual: "; cin>>saldo_act;
	cout<<"1.- Depositar"<<endl;
	cout<<"2.- Retirar"<<endl;
	cout<<"Que deseas hacer: "; cin>>hacer;
	if(hacer==1){
		cout<<"\nCuanto depositaras: "; cin>>deposito;
	saldo_act+=deposito;
	cout<<"El deposito ha sido un exito"<<endl;
	}
}
void cuenta::cargar(){
	if(hacer==2){
		cout<<"\nCuanto retiraras: "; cin>>retiro;
		saldo_act=saldo_act-retiro;
		if(saldo_act>=0){
	    cout<<"El retiro a sido un exito"<<endl;
		}
		else if(saldo_act<0){
		cout<<"El monto a cargar excede el saldo en la cuenta";
	}
}
	
}
void cuenta::obtener_saldo(){
	cout<<"\nTu saldo es de: "<<saldo_act<<endl;
}
int main(){
	cuenta c;
	c.credit();
	c.cargar();
	c.obtener_saldo();
	
	system("pause");
	return 0;
}
