#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, suma, resultado=0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	a=(pow(a,2));
	b=(pow(b,2));
	
	suma=a+b;
	resultado= (pow(suma,2))/3;
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	system("pause");
	return 0;
	
}
