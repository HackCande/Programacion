/*comprobar si un numero digitado por el usuario
es positivo o negativo*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese el valor de numero: "; cin>>numero;
	
	if(numero>=0){
		cout<<"\nEl numero es positivo";
	}
	else{
		cout<<"\nEl numero es negativo";
	}
	/*switch(numero){
		case 1 : //cout<<"El numero es positivo"; 
		case 2 : //cout<<"El numero es positivo";
		case 3 : //cout<<"El numero es positivo";
		case 4 : //cout<<"El numero es positivo";
		case 5 : //cout<<"El numero es positivo";
		case 6 : //cout<<"El numero es positivo";
		case 7 : //cout<<"El numero es positivo";
		case 8 : //cout<<"El numero es positivo";
		case 9 : //cout<<"El numero es positivo";
		case 0 : cout<<"\nEl numero es positivo"; break;
		default : cout<<"\nEl numero es negativo"; break;
	}
	*/
	return 0;
}
