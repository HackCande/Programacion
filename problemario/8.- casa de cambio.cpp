#include<iostream>

using namespace std;

int main(){
	float cantidad, valor, cantidad_final;
	
	cout<<"Ingrese la cantidad de dolares: "; cin>>cantidad;
	cout<<"Ingrese el valor de dolares en pesos: "; cin>>valor;
	
	cantidad_final=cantidad*valor;
	
	cout<<"\nLa cantidad en pesos es: "<<cantidad_final<<endl;
	
	system("pause");
	return 0;
}
