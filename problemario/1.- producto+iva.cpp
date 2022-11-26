#include<iostream>

using namespace std;

int main(){
	int valor, descuento=15, porcentaje, total = 0;
	
	cout<<"Ingrese el valor del producto: "; cin>>valor;
	
	
	porcentaje = valor / 100 * descuento; 
	total = valor - porcentaje; 
	
	
	cout<<"\nEl total a pagar es: "<<total<<endl;
	
	system("pause");
	
	return 0;
}
