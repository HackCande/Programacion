//escriba un programa que calcule el valor de: 1*2*3*...n*(factorial)

#include<iostream>

using namespace std;

int main(){
	int numero, factorial=1;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		factorial*=i;
	}
	
	cout<<"\nEl resultado es: "<<factorial<<endl;
	
	
	system("pause");
	return 0;
}
