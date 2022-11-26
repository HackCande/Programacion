/*escriba un programa que calcule el valor de: 1!+2!+3!+...+n!
(suma de factoriales.)*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero, factorial=1;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		cout<<numero<<" * "<<i<<" = "<<numero+i<<endl;
          factorial= factorial+i;	
	}
	cout<<"El resultado es: "<<factorial<<endl;
	
	getch();
	return 0;
}

