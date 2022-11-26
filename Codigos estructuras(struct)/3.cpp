#include<iostream>

using namespace std;

struct persona{
	char nombre[20];
	int edad;
}persona1, persona2;

int main(){
	cout<<"Nombre: "; cin.getline(persona1.nombre, 20,'\n');
	cout<<"Edad: "; cin>>persona1.edad;
	
	fflush(stdin);
	cout<<"\nNombre: "; cin.getline(persona2.nombre, 20,'\n');
	cout<<"Edad: "; cin>>persona2.edad;
	
	cout<<"\nNombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	cout<<"\nNombre: "<<persona2.nombre<<endl;
	cout<<"Edad: "<<persona2.edad<<endl;
	
	system("pause");
	return 0;
}

