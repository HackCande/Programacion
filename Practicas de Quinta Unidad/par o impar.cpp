/*determinar si un numero entero es par o impar*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	
	if(numero%2==0){
		cout<<"\nEl numero es par"<<endl<<endl;
	}
	else{
		cout<<"\nEl numero es impar"<<endl<<endl;
	}
	
	system("pause");
	return 0;
}

		
