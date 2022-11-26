#include<iostream>

using namespace std;

int main(){
	float capital, ganar, razon;
	
	cout<<"Ingrese su capital: "; cin>>capital;
	
	razon=capital/100*2;
	ganar=razon+capital;
	
	cout<<"\nEl saldo total es de: "<<ganar<<endl;
	
	system("pause");
	
	
	return 0;
}
