/*escriba un programa que lea tres numeros y determine cual de ellos
es el mayor*/

#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4;
	
	cout<<"Digite el primer valor: "; cin>>n1;
	cout<<"Digite el segundo valor: "; cin>>n2;
	cout<<"Digite el tercer valor: "; cin>>n3;
	cout<<"Digite el cuarto valor: "; cin>>n4;
	
	if(n1>n2, n1>n3, n1>4){
		cout<<"\nEl mayor es: "<<n1;
	}
	else if(n2>n1, n2>n3, n2>n4){
		cout<<"\nEl mayor es: "<<n2;
	}	
	else if(n3>n1, n3>n2, n3>n4){
		cout<<"\nEl mayor es: "<<n3;
	}
	else if(n4>n1, n4>n2, n4>n3){
		cout<<"\nEl mayor es: "<<n4;
	}	
	
	return 0;
}
