#include<iostream>

using namespace std;

int main(){
	float base, altura, area= 0;
	
	cout<<"El valor de la base es: "; cin>>base;
	cout<<"El valor de la altura es: "; cin>>altura;
	
	area= base*altura/2;
	
	cout<<"\nEl area es: "<<area<<endl;
	
	system("pause");
	
	return 0;
}
