/*comprobar si un numero digitado por el usuario 
es positivo o negativo*/

#include<iostream>

using namespace std;

int main(){
	float numero;
	
	cout<<"digite un numero: "; cin>>numero;
	
	if(numero>=0){
		cout<<"\nel numero es positivo";
	}
	else{
		cout<<"\nel numero es negativo";
		
	}
	
	
	
	return 0;
}
