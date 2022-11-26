/*elaborara un programa en c++ que permite ingresar el numero de partidos ganados, perdidos y empatados
por algun equipo en el torneo de apertura, se debe de demostrar su puntaje total, 
teniendo en cueta que por cada partido ganado obtendra tres puntos, empatado 1 punto y perdido 0 puntos.*/

#include<iostream>

using namespace std;

int main(){
	int ganados, perdidos, empatados, valor1=3, valor2=1, valor3=0, total;
	
	
	cout<<"Ingrese el numero de partidos ganados: "; cin>>ganados;
	cout<<"Ingrese el numero de partidos empatados: "; cin>>empatados;
	cout<<"Ingrese el numero de partidos perdidos: "; cin>>perdidos;
	
	ganados*=valor1;
	empatados*=valor2;
	perdidos*=0;
	
	
	total= ganados+empatados+perdidos;
	

	cout<<"\nEl puntaje final es: "<<total<<endl;
		
		if(total>50){
		cout<<"\nSu equipo PASA a la siguiente ronda...!!FELICIDADES¡¡"<<endl<<endl;
	}
	else{
		cout<<"\nSu equipo NO PASA a la siguiente ronda."<<endl<<endl;
	}
	
	
	system("pause");
	return 0;
}
