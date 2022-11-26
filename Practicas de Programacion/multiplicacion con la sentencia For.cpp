#include<iostream>

using namespace std;

int main(){
	int numero;
	
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
	}while(numero>=20);
	
	for(float i=1; i<=20; i++){
		cout<<numero<<" / "<<i<<" = "<<numero/i<<endl<<endl;
		
		cout.precision(3);
	}
	
	system("pause");
	return 0;
}
