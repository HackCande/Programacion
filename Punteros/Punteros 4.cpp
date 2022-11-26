#include<iostream>
#include<stdlib.h>

using namespace std;

void pedir_datos();
void mostrar_datos();

int numcalif, *dir_num;

int main(){
	pedir_datos();
	mostrar_datos();
	
	delete[] dir_num;
	
	
	system("pause");
	return 0;
}

void pedir_datos(){
	cout<<"Ingrese el numero de arreglos: "; cin>>numcalif;
	
	dir_num= new int[numcalif];
	
	for(int i=0; i<numcalif; i++){
		cout<<"Ingrese un numero: "; cin>>dir_num[i];
	}
}

void mostrar_datos(){
	cout<<"\n\nMostrando las notas:\n";
	
	for(int i=0; i<numcalif; i++){
		cout<<"La calificacion es: "<<dir_num[i]<<endl;
	}
}
