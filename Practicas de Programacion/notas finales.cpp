#include<iostream>

using namespace std;

int main(){
	float proyecto, apuntes, participacion, nota_final;
	
	cout<<"digite el valor de proyecto: "; cin>>proyecto;
	cout<<"digite el valor de apuntes: "; cin>>apuntes;
	cout<<"digite el valor de participacion: "; cin>>participacion;
	
	proyecto*= 0.40;
	apuntes*=0.45;
	participacion*=0.15;
	
	nota_final= proyecto+apuntes+participacion;
	
	cout<<"\nla nota final es: "<<nota_final<<endl;
	
	
	return 0;
}
