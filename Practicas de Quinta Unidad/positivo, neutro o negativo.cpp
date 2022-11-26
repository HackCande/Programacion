/*determinar si un numero entero es positivo, negativo o neutro*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero>0){
		cout<<"\nEl numero es positivo"<<endl<<endl;
	}
	else if(numero==0){
		cout<<"\nEl numero es neutro"<<endl<<endl;
	}
	else if(numero<0){
		cout<<"\nEl numero es negativo"<<endl<<endl;
	}
	
	
	system("pause");
	return 0;
}
