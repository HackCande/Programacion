#include<iostream>

using namespace std;

int main(){
	float practicas, apuntes, participacion, nota_final;
	
	cout<<"Digite la nota de practicas: "; cin>>practicas;
	cout<<"Digite la nota de apuntes: "; cin>>apuntes;
	cout<<"Digite la nota de participacion: "; cin>>participacion;
	
	practicas*= 0.30;
	apuntes *= 0.60;
	participacion *= 0.10;
	
	nota_final = practicas+ apuntes+ participacion;
	
	cout<<"\nLa nota final es: "<<nota_final;
	
	return 0;
}
