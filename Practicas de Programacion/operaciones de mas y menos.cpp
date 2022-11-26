//hacer un programa que realize la siguiente operacion: 1-2+3-4+5-6+...n+.

#include<iostream>

using namespace std;

int main(){
	int numero, suma, suma2, sumat;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
	suma= i+2;
	suma2=-i+3;
	sumat= suma+suma2;
	}
	
	cout<<"\nEl resultado es: "<<sumat<<endl;
	system("pause");
	return 0;
}
