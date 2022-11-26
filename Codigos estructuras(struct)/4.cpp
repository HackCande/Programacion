#include<iostream>

using namespace std;

struct info_direccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[40];
	struct info_direccion dir_empleado;
	int salario;
}empleado[2];

int main(){
	
	for(int i=0; i<2;i++){
	cout<<"Nombre: "; cin.getline(empleado[i].nombre, 40,'\n');
	cout<<"Direccion: "; cin.getline(empleado[i].dir_empleado.direccion, 20, '\n');
	cout<<"Ciudad: "; cin.getline(empleado[i].dir_empleado.ciudad, 20,'\n');
	cout<<"Provincia: "; cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
	cout<<"Salario: "; cin>>empleado[i].salario;
	cout<<"\n";
}
	
	for(int i=0; i<2;i++){
	fflush(stdin);
	cout<<"\nNombre: "<<empleado[i].nombre<<endl;
	fflush(stdin);
	cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
	cout<<"ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
	cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
	cout<<"Salario: "<<empleado[i].salario<<endl;
	cout<<"\n";
}
	system("pause");
	return 0;
}
