//Escriba un programa  que calcule el valor de: 1+2+3...+n

#include<iostream>

using namespace std;

int main(){
	int n1, suma;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
		suma+=i;	
	}
	cout<<"\n El resultado total es de: "<<suma<<endl;
	
	
	system("pause");
	return 0;
}
