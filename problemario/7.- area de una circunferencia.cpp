#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float radio, PI=3.1416, area=0;
	
	cout<<"Digite el valor de radio: "; cin>>radio;
	
	area=(pow(radio,2))*PI;
	
	cout<<"\nEl area de la circunferencia es: "<<area<<endl;
	
	system("pause");
	
	
	
	
	return 0;
}
