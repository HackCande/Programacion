#include<iostream>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Ingrese un numero: "; cin>>numero;
	}while((numero<5)||(numero>15));
	
	
	for(int i=1; i<=20; i++){
	    cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }  
    
	system("pause");
	return 0;
}
