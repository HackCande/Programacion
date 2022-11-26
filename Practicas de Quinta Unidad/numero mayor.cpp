/*dado dos numeros enteros diferentes, devolver el numero mayor */

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Ingrese un valor: "; cin>>n1;
	cout<<"Ingrese otro valor: "; cin>>n2;
	
	if(n1>n2){
		cout<<"\nEl numero mayor es: "<<n1<<endl;
		
	}else{
		cout<<"\nEl numero mayor es: "<<n2<<endl;
	}
	
	
	system("pause");
	return 0;
}
