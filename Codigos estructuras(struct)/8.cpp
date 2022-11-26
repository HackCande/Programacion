/*Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
nota1, nota2, nota3; y otro llamado alumno que tendra los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los dastos para un alumno, luego calcular su promedio
y por ultimo imprimir todos los datos incluidos el promedio.*/

#include<iostream>

using namespace std;

struct promedio{
	float nota1, nota2, nota3;
};

struct alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct promedio prom;
}alumno1;

int main(){
	float promedio;
	
	fflush(stdin);
	cout<<"Ingrese el nombre: "; cin.getline(alumno1.nombre,20,'\n');
	cout<<"Ingrese su edad: "; cin>>alumno1.edad;
	fflush(stdin);
	cout<<"Ingrese el sexo: "; cin.getline(alumno1.sexo,10,'\n');
	fflush(stdin);
	cout<<"Ingrese tus calificacion: "; cin>>alumno1.prom.nota1>>alumno1.prom.nota2>>alumno1.prom.nota3;
	
	promedio=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	cout<<"\nNombre: "<<alumno1.nombre<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	
	system("pause");
	return 0;
}

