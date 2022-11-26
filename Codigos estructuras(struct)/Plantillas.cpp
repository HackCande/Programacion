#include<iostream>

using namespace std;

template <class tipod>
void mostrarabs(tipod numero);

int main(){
	int numero1= -12;
	float numero2= 12.23;
	double numero3= -23.43563;
	
	mostrarabs(numero1);
	mostrarabs(numero2);
	mostrarabs(numero3);
	
	
	system("pause");
	return 0;
}

template <class tipod>
void mostrarabs(tipod numero){
    if(numero<0){
	numero=numero*-1;
	}
	cout<<"El valor absoluto es: "<<numero<<endl;
}
