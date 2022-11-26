#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float radio, altura, pi=3.1416, area, volumen;
	
	cout<<"Digite el valor de radio: "; cin>>radio;
	cout<<"Digite el valor de altura: "; cin>>altura;
	
	area=pi*(pow(radio,2))*altura;
	volumen=2*pi*radio*altura;
	
	cout<<"\nEl volumen es: "<<volumen<<endl;
	cout<<"\nEl area es: "<<area<<endl;

	
	
	system("pause");
	return 0;
}
