#include<iostream>

using namespace std;

class fecha{
	private:
	int mes, dia, anio;
	public:
	void establacer_datos();
	void obtener_datos();
	void mostrar_fecha();
};
void fecha::establacer_datos(){
	cout<<"Ingrese el dia: "; cin>>dia;
	cout<<"Ingrese el mes: "; cin>>mes;
	if((mes<0)||(mes>13)){
		mes=1;
	}
	cout<<"Ingrese el anio: "; cin>>anio;
}
void fecha::obtener_datos(){
	cout<<"\nEl dia es: "<<dia;
	cout<<"\nEl mes es: "<<mes;
	cout<<"\nEl anio es: "<<anio<<endl<<endl;
}
void fecha::mostrar_fecha(){
	cout<<"\n\tLA FECHA ES: ";
	cout<<mes<<" / "<<dia<<" / "<<anio<<endl<<endl<<endl;
}
int main(){
	fecha f;
	f.establacer_datos();
	f.obtener_datos();
	f.mostrar_fecha();
	
	system("pause");
	return 0;
}
