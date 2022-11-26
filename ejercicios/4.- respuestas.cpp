#include<iostream>

using namespace std;

int main(){
	float rc, ri, rb, total, valor1=4, valor2=-1, valor3=0;
	
	cout<<"Digite el total de las respuestas correctas: "; cin>>rc;
	cout<<"Digite el total de respuestas incorrectas: "; cin>>ri;
	cout<<"Digite el total de respuestas en blanco: "; cin>>rb;
	
	valor1*=rc;
	valor2*=ri;
	valor3*=rb;
	
	total=rc+ri+rb;
	
	cout<<"\nEl resultado es: "<<total<<endl;
	system("pause");
	
	return 0;
}
