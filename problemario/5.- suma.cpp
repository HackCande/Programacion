#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, suma=0, total;
	
	cout<<"Ingrese los primeros numeros positivos esteros: "; cin>>n1>>n2>>n3;
	
	total=n1+n2+n3;
	
	suma= total*(total+1)/2;
	
	cout<<"\nEl resultado total es: "<<suma<<endl;
	
	system("pause");
	
	
	
	return 0;
}
