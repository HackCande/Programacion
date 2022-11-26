/*dado dos numeros determinar si son iguales o diferentes.*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	cout<<"Ingrese otro numero: "; cin>>n2;
	
	if(n1==n2){
		cout<<"\nLos dos numeros son iguales"<<endl<<endl;
	}
	else{
		cout<<"\nLos dos numeros son diferentes"<<endl<<endl;
	}
	system("pause");
	return 0;
}
