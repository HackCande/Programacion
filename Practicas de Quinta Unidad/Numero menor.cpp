/*dado dos numeros enteros, devolver el numero menor.*/

#include<iostream>

using namespace std;

int main(){
	int numero, numero2;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	cout<<"Ingrese otro numero: "; cin>>numero2;
	
	if(numero<numero2){
		cout<<"\nEl numero menor es: "<<numero<<endl;
	}
	else if(numero2<numero){
		cout<<"\nEl numero menor es: "<<numero2<<endl;
	}
	
	system("pause");
	return 0;
}
