/*escribe un programa que calcule el valor de: 2^1+2^2+2^3+...2^n.*/

#include<iostream>

using namespace std;

int main(){
	int numero=2, elevado, cuadrado;
	
	cout<<"Ingrese un numero: "; cin>>elevado;
	
	for(int i=1; i<=elevado; i++){
	 cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	
	system("pause");
	return 0;
}
