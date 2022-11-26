#include<iostream>

using namespace std;

int main(){
	float hombres, mujeres, total, porcentajeh= 0, porcentajem= 0;
	
	cout<<"El total de hombres es: "; cin>>hombres;
	cout<<"El total de mujeres es: "; cin>>mujeres;
	//cout<<"El total de hombres y mujeres es: "; cin>>total;
	
	total= hombres+mujeres;
	porcentajeh= hombres*100/total;
	porcentajem= mujeres*100/total;
	
	cout<<"\nEl porcentaje de hombres es: "<<porcentajeh<<endl;
	cout<<"El porcentaje de mujeres es: "<<porcentajem<<endl;
	
	
	
	
	return 0;
}
