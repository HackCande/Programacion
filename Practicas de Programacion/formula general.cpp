/*escriba un programa que calcule las soluciones de una 
ecuacion de segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que.*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c, resultadox1=0, resultadox2=0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	resultadox1= ((-b)+(sqrt(pow(b,2))+(-4*a*c)))/(2+a);
	resultadox2= ((-b)-(sqrt(pow(b,2))+(-4*a*c)))/(2+a);
	
	cout<<"\nEl resultado de x1 es: "<<resultadox1<<endl;
	cout<<"El resultado de x2 es: "<<resultadox2<<endl;
	
	return 0;
}

