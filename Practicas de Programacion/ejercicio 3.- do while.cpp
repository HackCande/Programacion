#include<iostream>

using namespace std;

int main(){
	int numero, suma;
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
	}while((numero<20)||(numero>30)&&(numero!=0));	
		if(numero>0){
			suma+=numero;
		}
	
	
	cout<<"la suma es: "<<suma<<endl<<endl;
	system("pause");
	return 0;
}
