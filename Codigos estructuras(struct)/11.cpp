#include<iostream>

using namespace std;

struct carro{
	char color[15];
	int anio;
}car;

int main(){
	cout<<"ingrese el color del carro: "; cin.getline(car.color,15,'\n');
	cout<<"ingrese el anio: "; cin>>car.anio;
	
	cout<<"Color: "<<car.color<<endl;
	cout<<"Anio: "<<car.anio<<endl;
	
	system("pause");
	return 0;
}
