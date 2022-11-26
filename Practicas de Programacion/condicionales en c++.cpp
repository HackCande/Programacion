//escriba un programa que lea dos numeros y determine cual de ellos es el mayor

#include<iostream>

using namespace std;

int main(){
	float n1, n2;
	
	cout<<"digite el primer valor: "; cin>>n1;
	cout<<"digite el segundo valor: "; cin>>n2;
	
	if(n1>n2){
		cout<<"\nel mayor es: "<<n1;
		
	}
	else{
		cout<<"\nel mayor es: "<<n2;
	}
	
	
	
	return 0;
}
