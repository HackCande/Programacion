/*dado un numero entero, devolver el doble del numero si el numero es positivo, el triple del numero si es
negativo, y cero si el numero es neutro.*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero>0){
		numero+=numero;
		
		cout<<"\nEl resultado es: "<<numero<<endl;
	}else if(numero<0){
		numero+=numero+numero;
		
		cout<<"\nEl resultado es: "<<numero<<endl;
	}else if(numero==0){
		numero+=0;
		
		cout<<"\nEl resultado es: "<<numero<<endl;
	}
	system("pause");
	return 0;
}
