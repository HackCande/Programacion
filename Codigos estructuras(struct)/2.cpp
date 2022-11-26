#include<iostream>

using namespace std;

struct persona{
	char nombre[20];
	int edad;
	
}persona1{"candelario", 19},
persona2{"jose", 20};

int main(){
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"\n";
	
	cout<<"Nombre: "<<persona2.nombre<<endl;
	cout<<"Edad: "<<persona2.edad<<endl;
	
	system("pause");
	return 0;
}
