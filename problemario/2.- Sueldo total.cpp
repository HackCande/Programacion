#include<iostream>

using namespace std;

int main(){
	float sueldo, porcentaje=10, ganancia1, venta1, ganancia2, venta2, ganancia3, venta3, total=0;
	
	cout<<"Ingrese la ganancia del sueldo base: "; cin>>sueldo;
	cout<<"Ingrese la ganancia de la venta1: "; cin>>venta1;
	cout<<"Ingrese la ganancia de la venta2: "; cin>>venta2;
	cout<<"Ingrese la ganancia de la venta3: "; cin>>venta3;

	
	ganancia1= venta1/100*porcentaje;
	ganancia2= venta2/100*porcentaje;
	ganancia3= venta3/100*porcentaje;
	
	total= sueldo+ganancia1+ganancia2+ganancia3;
	
	cout<<"\nLa ganancia total es: "<<total<<endl;
	
	system("pause");
	
	
	return 0;
}
