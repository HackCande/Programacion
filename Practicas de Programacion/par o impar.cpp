/*realiza un programa que lea el valor entero y determine si se trata
de un numero par o impar*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"digite un numero: "; cin>>numero;
	
	if(numero==0){
		cout<<"\nel numero es cero";
	}
	else if(numero%2==0){
		cout<<"\nel numero es par";
	}
	else{
		cout<<"\nel numero es impar";
	}
	
	
	return 0;
}
