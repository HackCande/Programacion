/*realize un programa que lea de la entrada estandar numeros
hasta que se intruduzca un cero. En ese caso el programa debe terminar
y mostrar en la salida estandar el numero de valores 
mayores que cero leidos.*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
		
	}while(numero>=1);
	
	if(numero<=0){
		cout<<"numero"<<numero;
	}
	
	
	
	system("pause");
	return 0;
}
