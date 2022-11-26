/*escribe un programa que lea de la entrada estandar tres numeros.Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos
con anterioridad.*/

#include<iostream>

using namespace std;

int main(){
	int n4;
	
	/*cout<<"digite el valor de n1: "; cin>>n1;
	cout<<"digite el valor de n2: "; cin>>n2;
	cout<<"digite el valor de n3: "; cin>>n3;*/
	cout<<"digite el valor de n4: "; cin>>n4;
	
	switch(n4){
		case 1: cout<<"\nEs el numero 1"; break;
		case 4: cout<<"\nEs el numero 4"; break;
		case 7: cout<<"\nEs el numero 7"; break;
		default: cout<<"\nNo esta en los valores asignados"; break;
	}
	
	return 0;
}
