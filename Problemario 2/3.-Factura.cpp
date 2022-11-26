#include<iostream>

using namespace std;

class factura{
	private:
		string codigo, descripcion;
		int cantidad, precio;
	public:
		void establecer_datos();
		void obtener_datos();
		void obtener_monto_factura();
};
void factura::establecer_datos(){
	cout<<"Ingrese el codigo de barras del producto: "; cin>>codigo;
	cout<<"Ingrese la descripcion del producto: "; cin>>descripcion;
	cout<<"Ingrese la cantidad de productos: "; cin>>cantidad;
	cout<<"Ingrese el precio del producto: "; cin>>precio;
}
void factura::obtener_datos(){
	cout<<"\nEl codigo de barras es: "<<codigo<<endl;
	cout<<"\nLa descripcion es: "<<descripcion<<endl;
	cout<<"\nLa cantidad de productos es: "<<cantidad<<endl;
	cout<<"\nEl precio por producto es: "<<precio<<endl;
	if(precio<0){
		precio=0;
	}
}
void factura::obtener_monto_factura(){
	precio*=cantidad;
	if(precio<0){
		precio=0;
	}
	cout<<"\nTotal a pagar es: "<<precio<<endl;
}

int main(){
	factura f;
	f.establecer_datos();
	f.obtener_datos();
	f.obtener_monto_factura();
	
	system("pause");
	return 0;
}
