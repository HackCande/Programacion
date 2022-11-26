#include<iostream>

using namespace std;

int main(){
	int lunes, martes, miercoles, jueves, viernes, sabado;
	
	cout<<"Ingrese la produccion de unidades logradas en el dia lunes: "; cin>>lunes;
	cout<<"Ingrese la produccion de unidades logradas en el dia martes: "; cin>>martes;
	cout<<"Ingrese la produccion de unidades logradas en el dia miercoles: "; cin>>miercoles;
	cout<<"Ingrese la produccion de unidades logradas en el dia jueves: "; cin>>jueves;
	cout<<"Ingrese la produccion de unidades logradas en el dia viernes: "; cin>>viernes;
	cout<<"Ingrese la produccion de unidades logradas en el dia sabado: "; cin>>sabado;
	
	if((lunes||martes||miercoles||jueves||viernes||sabado<=100)){
	cout<<"\nNo recibiras insentivos"<<endl<<endl;
	}else{
		cout<<"\nSi recibiras insentivos"<<endl<<endl;
	}
	
	system("pause");
	return 0;
}
