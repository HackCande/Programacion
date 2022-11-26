//escriba un programa que calcule el valor de: 2^1;

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numero, numero2=2, elevacion, suma;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		elevacion=(pow(numero2,i));
		suma+=elevacion;
	}

	cout<<"\nEl resultado es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
