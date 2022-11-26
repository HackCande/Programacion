/*Utilizar las 2 estructuras del ejercicio anterior, pero ahora pedir los datos
para N alumnos, y calcular cual de todos tiene el mejor promedio e imprimir sus datos.*/

#include<iostream>

using namespace std;

struct promedio{
	float nota1, nota2, nota3;
};

struct alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	float promedio;
	struct promedio prom;
}alumno1[100];

int main(){
	int total, promediot=0;

	cout<<"Ingrese el numero de alumnos: "; cin>>total;
	
	for(int i=1; i<=total; i++){
	
	fflush(stdin);
	cout<<"\nIngrese el nombre: "; cin.getline(alumno1[i].nombre,20,'\n');
	cout<<"Ingrese su edad: "; cin>>alumno1[i].edad;
	fflush(stdin);
	cout<<"Ingrese el sexo: "; cin.getline(alumno1[i].sexo,10,'\n');
	fflush(stdin);
	cout<<"Ingrese tus calificacion: "; cin>>alumno1[i].prom.nota1>>alumno1[i].prom.nota2>>alumno1[i].prom.nota3;
	cout<<"\n";
	
	alumno1[i].promedio=(alumno1[i].prom.nota1+alumno1[i].prom.nota2+alumno1[i].prom.nota3)/3;
	
	if(alumno1[i].promedio>promediot){
		promediot=alumno1[i].promedio;
		promediot=i;
	}
	
}
	
	cout<<"\nNombre: "<<alumno1[promediot].nombre<<endl;
	cout<<"Edad: "<<alumno1[promediot].edad<<endl;
	cout<<"Sexo: "<<alumno1[promediot].sexo<<endl;
	cout<<"Promedio: "<<alumno1[promediot].promedio<<endl;
	
	system("pause");
	return 0;
}

