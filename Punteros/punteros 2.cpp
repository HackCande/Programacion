/*Llenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son pares 
y su posicion de memoria.*/

#include<iostream>

using namespace std;

int main(){
	int numero[10], *dir_num;
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese un numero: "; cin>>numero[i];
	}
	
		dir_num=numero;
		
	for(int i=0; i<10; i++){
		if(*dir_num%2==0){
		cout<<"\nEl numero "<<*dir_num<<" es par"<<endl;
		cout<<"La posicion es: "<<dir_num<<endl;
		}
		dir_num++;
	}
	
	system("pause");
	return 0;
}
