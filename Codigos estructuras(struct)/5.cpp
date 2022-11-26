/*Hacer una estructura llamada alumno, en la cual se tendran
los siguientes campos: nombre, edad, promedio, pedir datos al 
usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor 
promedio y posteriormente imprimir los datos del alumno.*/

#include<iostream>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
	
}alumnos1, alumnos2, alumnos3;

int main(){
//	for(int i=0; i<3; i++){
     fflush(stdin);
	cout<<"Ingrese el nombre: "; cin.getline(alumnos1.nombre,20,'\n');
	cout<<"Ingrese la edad: "; cin>>alumnos1.edad;
	cout<<"Ingrese el promedio: "; cin>>alumnos1.promedio;
	cout<<"\n";
	
	fflush(stdin);
	cout<<"Ingrese el nombre: "; cin.getline(alumnos2.nombre,20,'\n');
	cout<<"Ingrese la edad: "; cin>>alumnos2.edad;
	cout<<"Ingrese el promedio: "; cin>>alumnos2.promedio;
	cout<<"\n";
	
	fflush(stdin);
	cout<<"Ingrese el nombre: "; cin.getline(alumnos3.nombre,20,'\n');
	cout<<"Ingrese la edad: "; cin>>alumnos3.edad;
	cout<<"Ingrese el promedio: "; cin>>alumnos3.promedio;
	cout<<"\n";
	
	
    if((alumnos1.promedio>alumnos2.promedio)&&(alumnos1.promedio>alumnos3.promedio)){
		cout<<"\nNombre: "<<alumnos1.nombre<<endl;
		cout<<"Edad: "<<alumnos1.edad<<endl;
		cout<<"Promedio: "<<alumnos1.promedio<<endl;
	}else if((alumnos2.promedio>alumnos1.promedio)&&(alumnos2.promedio>alumnos3.promedio)){
		cout<<"\nNombre: "<<alumnos2.nombre<<endl;
		cout<<"Edad: "<<alumnos2.edad<<endl;
		cout<<"Promedio: "<<alumnos2.promedio<<endl;
	}else if((alumnos3.promedio>alumnos1.promedio)&&(alumnos3.promedio>alumnos2.promedio)){
		cout<<"\nNombre: "<<alumnos3.nombre<<endl;
		cout<<"Edad: "<<alumnos3.edad<<endl;
		cout<<"Promedio: "<<alumnos3.promedio<<endl;
	}

system("pause");
return 0;	
}
