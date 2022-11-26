#include<iostream>

using namespace std;

int main(){
	float horas, tarifa, salario;
	
	cout<<"Digite las horas laboradas en el mes: "; cin>>horas;
	cout<<"Digite la tarifa por hora: "; cin>>tarifa;
	
	salario=horas*tarifa;
	
	cout<<"\nEl salario a ganar es: "<<salario<<endl;
	system("pause");
	
	
	return 0;
}
