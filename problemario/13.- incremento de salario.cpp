#include<iostream>

using namespace std;

int main(){
	float salario, incremento, nuevo;
	
	cout<<"Ingrese su salario: "; cin>>salario;
	
	incremento=salario/100*25;
	nuevo=incremento+salario;
	
	cout<<"\nEl nuevo salario es: "<<nuevo<<endl;
	system("pause");
	
	
	
	return 0;
}
