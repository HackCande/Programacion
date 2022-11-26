

#include<iostream>

using namespace std;

main(){
	float sueldo, c1, c2, c3, v1, v2, v3, total;
	
	cout<<"Ingrese el sueldo base: "; cin>>sueldo;
	cout<<"Ingrese la venta numero 1: "; cin>>v1;
	cout<<"Ingrese la venta numero 2: "; cin>>v2;
	cout<<"Ingrese la venta numero 3: "; cin>>v3;
	
	c1=v1/100*10;
	c2=v2/100*10;
	c3=v3/100*10;
	
	
	total= sueldo+c1+c2+c3;
	
	cout<<"\nEl sueldo total es: "<<total<<endl<<endl;
	
	system("pause");
	return 0;
}
