#include<iostream>

using namespace std;

int main(){

	float precio, total, ganancia;
	
	cout<<"Digite el precio del producto: "; cin>>precio;
	
	ganancia=precio/100*30;
	total=ganancia+precio;
	
	cout<<"\nEl precio a vender es: "<<total<<endl;
	
	system("pause");
	
	
	
	return 0;
}
