//Escriba un programa que calcule el valor de: 1*2*3*...*n(factorial)

#include<iostream>

using namespace std;

int main(){
	int n1, multiplicacion=1;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
		multiplicacion*=i;
	}
	
	cout<<"\nEl resultado es: "<<multiplicacion<<endl;
	
	system("pause");
	return 0;
}
