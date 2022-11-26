/*Hacer un arreglo de estructuras llamada atleta para N atletas que contengan
los siguientes campos: nombre, pais, numero de medallas. y que devuelva los datos
(Nombre, pais) del atleta que ha ganado el mayor numero de medallas.*/

#include<iostream>

using namespace std;

struct atletas{
	char nombre[20];
	char pais[15];
	int n_medallas;
}atleta[100];

int main(){
	int n, mayor, nmayor;
	cout<<"Ingrese el numero de atletas: "; cin>>n;
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<"\nIngrese el nombre: "; cin.getline(atleta[i].nombre,20,'\n');
		cout<<"Ingrese el pais: "; cin.getline(atleta[i].pais,15,'\n');
		cout<<"Ingrese el numero de medallas: "; cin>>atleta[i].n_medallas;
		
		if(atleta[i].n_medallas>mayor){
			mayor=atleta[i].n_medallas;
			nmayor=i;
		}
	}
	cout<<"\nNombre: "<<atleta[nmayor].nombre<<endl;
	cout<<"Pais: "<<atleta[nmayor].pais<<endl;
	
	
	system("pause");
	return 0;
}
