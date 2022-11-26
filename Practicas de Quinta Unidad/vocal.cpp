/*realice un programa que verifica si un determinado caracter es vocal o una constante*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Ingrese una letra: "; cin>>letra;
	
	switch(letra){
		case 'a' : 
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' : cout<<"\nEs una vocal"<<endl; break;
		default : cout<<"\nEs una constante"<<endl; break; 
	}
	
	system("pause");
	return 0;
}


