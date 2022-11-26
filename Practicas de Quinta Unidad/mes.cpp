/* realice un programa que lea por teclado un numero entero entre 1 y 12 correspondiente al de un mes e imprima
el numero de dias correspondientes a dicho mes*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	switch(numero){
		case 1 : 
		cout<<"\nEl mes de enero tiene 31 dias"<<endl; break;
		case 2 : 
		cout<<"\nEl mes de febrero tiene 28 dias"<<endl; break;
		case 3 : 
		cout<<"\nEl mes de marzo tiene 31 dias"<<endl; break;
		case 4 : 
		cout<<"\nEl mes de abril tiene 30 dias"<<endl; break;
		case 5 : 
		cout<<"\nEl mes de mayo tiene 31 dias"<<endl; break;
		case 6 : 
		cout<<"\nEl mes de junio tiene 30 dias"<<endl; break;
		case 7 : 
		cout<<"\nEl mes de julio tiene 31 dias"<<endl; break;
		case 8 : 
		cout<<"\nEl mes de agosto tiene 31 dias"<<endl; break;
		case 9 : 
		cout<<"\nEl mes de septiembre tiene 30 dias"<<endl; break;
		case 10 : 
		cout<<"\nEl mes de octubre tiene 31 dias"<<endl; break;
		case 11 : 
		cout<<"\nEl mes de noviembre tiene 30 dias"<<endl; break;
		case 12 : 
		cout<<"\nEl mes de diciembre tiene 31 dias"<<endl; break;
		default : 
		cout<<"\nError"<<endl; break;
		
		
	}
	system("pause");
	return 0;
}
