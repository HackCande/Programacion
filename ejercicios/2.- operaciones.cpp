/*1. escribe un programa que lea de la entrada estandar 
dos numeros y muestre en la salida estandar su suma, resta, 
multiplicacion y disision.*/

#include<iostream>

using namespace std;

int main(){
	float n1,n2, suma, resta, multiplicacion, divicion;
	
	
	cout<<"digite un numero: "; cin>>n1;
	cout<<"digite otro numero: "; cin>>n2;
	
	suma= n1 + n2;
	resta= n1 - n2;
	multiplicacion= n1 * n2;
	divicion= n1 / n2;
	
	cout<<"\nla suma es: "<<suma<<endl;
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"la divicion es: "<<divicion<<endl;	
	
	
	system("pause");
	return 0;
}
