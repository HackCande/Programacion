/*realiza un programa que solicite la edad de 2 hermanos y muestre un mensaje indicando la edad del mayor 
y cuantos años de diferencia tiene el menor.*/

#include<iostream>

using namespace std;

int main(){
	int hermano1, hermano2, mayor;
	
	cout<<"Ingrese la edad de un hermano: "; cin>>hermano1;
	cout<<"Ingrese la edad de otro hermano: "; cin>>hermano2;
	
	if(hermano1>hermano2){
		cout<<"\nEl primer hermano es mayor que el segundo"<<endl;
	}else{
		cout<<"\nEl segundo hermano es mayor que el primero"<<endl;
	}
	mayor=hermano1-hermano2;
	
	if(mayor>=1){
	cout<<"\nLa diferencia de edad es de: "<<mayor<<endl<<endl;	
	}else {
	mayor= hermano2-hermano1;
		
	cout<<"\nLa diferencia de edad es: "<<mayor<<endl<<endl;
	}
	system("pause");
	return 0;
}
