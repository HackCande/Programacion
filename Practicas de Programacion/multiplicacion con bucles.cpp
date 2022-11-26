#include<iostream>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Ingrese el valor de numero: "; cin>>numero;
	}while((numero<=0)||(numero>=11));
	
	for(int i=1; i<=20; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	
	system("pause");
	return 0;
}
