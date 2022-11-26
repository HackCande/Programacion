#include<iostream>

using namespace std;

int main(){
	int numero, suma;
	
	do{
		cout<<"ingrese  un numero: "; cin>>numero;
		suma+=numero;
	}while(((numero<20)|| (numero>30)&&(numero!=0)));
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
