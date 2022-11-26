#include<iostream>

using namespace std;

class empleado{
private:
	string nombre, apellido;
    int salario, salarion;
public:
	void establecer_datos();
	void obtener_datos();
};
void empleado::establecer_datos(){
	cout<<"Ingrese el nombre: "; cin>>nombre;
	cout<<"Ingrese el apellido paterno: "; cin>>apellido;
	cout<<"Ingrese el salario mensual: "; cin>>salario;
	if(salario<0){
		salario=0;
	}
	salario*=12;
}
void empleado::obtener_datos(){
	cout<<"\n"<<nombre<<" "<<apellido<<" tiene: ";
	cout<<"\nEl salario anual es: "<<salario<<endl;
	salarion=salario/100*10;
	salarion+=salario;
	cout<<"El salario total es: "<<salarion<<endl;
}
int main(){
	empleado e;
	e.establecer_datos();
	e.obtener_datos();
	
	system("pause");
	return 0;
}

