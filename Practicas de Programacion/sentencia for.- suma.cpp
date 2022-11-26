//escriba un programa que calcule el valor de: 1+2+3...+n.

#include<iostream>

using namespace std;

int main(){
	int numero, suma;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
	suma+=i;
	}
	
	cout<<"\n\nEl resultado es: "<<suma<<endl<<endl;
	
	system("pause");
	return 0;
}
