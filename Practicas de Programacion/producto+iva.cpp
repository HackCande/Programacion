/* Escribe un programa que lea de la
entrada estandar el precio de un
producto y muestre en la salida
estandar el precio del producto al
aplicarle el IVA.*/

#include<iostream>

using namespace std;

int main(){
	float valor, iva, porcentaje, total = 0;
	
	cout<<"Ingrese el valor del producto: "; cin>>valor;
	cout<<"Ingrese el iva: "; cin>>iva,
	
	porcentaje = valor / 100 * iva; //cin>>porcentaje;
	total = valor - porcentaje; 
	
	//cout.precision(3);
	cout<<"\nEl total a pagar es: "<<total<<endl;
	
	return 0;
}
