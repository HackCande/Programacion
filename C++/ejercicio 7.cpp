#include<iostream>

using namespace std;

int main(){
	float n1, suma, promedio;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
		suma+=i;
		promedio=suma*10/n1;
	}
	cout<<"\nEl promedio es: "<<promedio<<endl;
	
	system("pause");
	return 0;
}
