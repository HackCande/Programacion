/*dado la edad de una persona determinar si es mayor de edad o menor de edad, considere que mayor
de edad es mayor o igual a 18.*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Ingrese la edad de la persona: "; cin>>edad;
	
	if(edad>=18){
		cout<<"\nLa persona es mayor de edad"<<endl<<endl;
	}else{
		cout<<"\nLa persona es menor de edad"<<endl<<endl;
	}
	
	system("pause");
	return 0;
}
