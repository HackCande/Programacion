#include<iostream>

using namespace std;

int main(){
	float producto, total_productos, iva;
	
	cout<<"Digite el valor del producto: "; cin>>producto;
	cout<<"Digite la cantidad de productos: "; cin>>total_productos;
	
	
	iva=producto/100*15;//sacar el iva
	iva=iva*total_productos;//multiplicar el iva por la cantidad la cantidad de productos
	total_productos*=producto;//sacar el monto total de los productos por la cantidad de productos
	iva+=total_productos;//sumar el iva total mas el monto total
	
	//ganancia= iva1+producto;
	
	cout<<"\nEl total es: "<<iva<<endl;
	system("pause");
	
	
	return 0;
}
