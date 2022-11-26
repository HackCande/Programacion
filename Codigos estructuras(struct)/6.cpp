/*Realizar un programa que lea un arreglo de estructuras de los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor o menor salario.*/

#include<iostream>

using namespace std;

struct empleados{
	char nombre[20];
	int edad;
	int salario;
}empleadosn[100];

int main(){
	int n, nmayor=0, nmenor=0;
	float mayor=0, menor=99999999;
	
	cout<<"Cuantos empleados son: "; cin>>n;
	
	for(int i=0; i<=n;i++){
		fflush(stdin);
		cout<<"\n"<<i+1<<".-Ingrese el nombre: "; cin.getline(empleadosn[i].nombre,20,'\n');
		cout<<"Ingrese la edad: "; cin>>empleadosn[i].edad;
		cout<<"Ingrese su salario: "; cin>>empleadosn[i].salario;
		cout<<"\n";
	
	if(empleadosn[i].salario>mayor){
		mayor=empleadosn[i].salario;
		nmayor=i;
	}
	if(empleadosn[i].salario<menor){
		menor=empleadosn[i].salario;
		nmenor=i;
	}
}

    
	cout<<"\nDatos de Empleado con mayor salario\n";
	cout<<"Nombre: "<<empleadosn[nmayor].nombre<<endl;
	cout<<"Edad: "<<empleadosn[nmayor].edad<<endl;
	cout<<"Salario: "<<empleadosn[nmayor].salario<<endl;
	
	
	cout<<"\nDatos de Empleado con menor salario\n";
	cout<<"Nombre: "<<empleadosn[nmenor].nombre<<endl;
	cout<<"Edad: "<<empleadosn[nmenor].edad<<endl;
	cout<<"Salario: "<<empleadosn[nmenor].salario<<endl;
	

system("pause");
return 0;	
}
