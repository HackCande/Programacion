/*Rellenar un numero con n numeros, posteriormente con punteros y determinar
cual es el numero menor.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void pedir_datos();
void mostrar_datos();

int *dir_num,n, numeromenor=100;

int main(){
	pedir_datos();
	mostrar_datos();
	
	delete[] dir_num;
	
	
	system("pause");
	return 0;
}

void pedir_datos(){
	cout<<"Ingrese el numero de arreglos: "; cin>>n;
	
	dir_num= new int[n];
	cout<<endl<<endl;
	for(int i=0; i<n; i++){
		
		cout<<"Ingrese un numero: "; cin>>dir_num[i];
	}
}

void mostrar_datos(){
	cout<<"\nMostrando el numero menor\n";
	
	for(int i=0; i<n; i++){
		if(*dir_num<numeromenor){
			numeromenor=*dir_num;
		}
		dir_num++;
	}
	
	cout<<"El numero menor es: "<<numeromenor<<endl;
}

