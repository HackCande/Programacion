/*realize un programa que calcule y muestre en la salida estandar la suma
de los cuadrados de los 10 primeros numeros enteros.*/

#include<iostream>

using namespace std;

int main(){
	int suma, cuadrado; 
	
	for(int i=1; i<=10; i++){
		cuadrado= i*i;
		suma+=cuadrado;
	}
	cout<<"El resultado de la suma de los cuadrados es: "<<suma<<endl<<endl;
	
	system("pause");
	return 0;
}
