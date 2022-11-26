/*4.- en una universidad se ha establecido los siguientes puntajes de ingreso a sus respectivas facultades:

facultad                    puntaje minimo

sistemas                    100
electronica                 90
industrial                  80
administracion              70

de acuerdo al puntaje obtenido por un postulante determinar la facultad a la cual ingreso o dar un mensaje correspondiente 
para el caso que no ingrese.*/

#include<iostream>

using namespace std;

int main(){
	int promedio;
	
	cout<<"Ingrese su Promedio: "; cin>>promedio;
	
			if((promedio>=70)&&(promedio<=79)){
				cout<<"\nLa facultad en la que ingresaras es Administracion"<<endl;
			}else if((promedio>=80)&&(promedio<=89)){
				cout<<"\nLa facultad en la que ingresaras es Industrial"<<endl;
			}else if((promedio>=90)&&(promedio<=99)){
				cout<<"\nLa facultad en que ingresaras es Electronica"<<endl;
			}else if(promedio==100){
				cout<<"\nLa facultad en que ingresaras es en Sistemas"<<endl;
			}else if(promedio<=69){
				cout<<"\No puedes ingresar a ninguna facultad"<<endl;
			}
	
	system("pause");
	return 0;
}
