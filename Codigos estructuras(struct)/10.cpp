/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa.
la estructura debe tener tener 3 campos: horas, minutos y segundos. escrba un
programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include<iostream>

using namespace std;

struct tiempo{
	int hora, minutos, segundos;
}ciclista[100];

int main(){
	int n, ht=0, mt=0, st=0;
	
	cout<<"Ingrese la cantidad de etapas: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<"\nIngrese las horas: "; cin>>ciclista[i].hora;
		cout<<"Ingrese los minutos: "; cin>>ciclista[i].minutos;
		cout<<"Ingrese los segundos: "; cin>>ciclista[i].segundos;
		
	ht=ht+ciclista[i].hora;
	mt+=ciclista[i].minutos;
	if(mt>=60){
		mt=-60;
		ht++;
	}
	st+=ciclista[i].segundos;
	if(st>=60){
		st=-60;
		mt++;
	}
	}

	
	cout<<"\nEl tiempo recorrido por el ciclista es:\n"<<endl;
	cout<<ht<<" horas "<<mt<<" minutos "<<st<<" segundos "<<endl<<endl;
	
	system("pause");
	return 0;
}
