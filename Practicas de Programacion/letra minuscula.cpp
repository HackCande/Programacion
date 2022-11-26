/*escriba un programa que lea de la entrada estandar un caracter
e indique en la salida estandar, si el caracter es una vocal minuscula o no.*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"digite una vocal: "; cin>>letra;
	
	switch(letra){
		case 'a': //cout<<"\nla letra es una minuscula"; break;
		case 'e': //cout<<"\nla letra es una minuscula"; break;
		case 'i': //cout<<"\nla letra es una minuscula"; break;
		case 'o':   //cout<<"\nla letra es una minuscula"; break;
		case 'u': cout<<"\nla vocal es una minuscula"; break;
		
		default : cout<<"\nla vocal es una mayuscula"; break;
		
		system("pause");
	}
	
	
	
	return 0;
}
