#include<iostream>

using namespace std;

int main(){
	float galones, total_litros, total_cobrar, precio_litro=8.20, equivalencia=3.785;
	
	cout<<"Ingrese la cantidad de galones: "; cin>>galones;
	
	total_litros=equivalencia*galones;
	total_cobrar=total_litros*precio_litro;
	
	cout<<"\nEl total a cobrar es: "<<total_cobrar<<endl;
	
	system("pause");
	
	
	
	return 0;
}
