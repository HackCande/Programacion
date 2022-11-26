#include<iostream>

using namespace std;

int main(){
	float tiempo, vel=90, distancia;
	
	cout<<"Digite el tiempo que tardo el automovil en movimiento: "; cin>>tiempo;
	
	distancia=tiempo*vel;
	
	cout<<"\nLa distancia recorrida es: "<<distancia<<endl;
	
	system("pause");
	return 0;
}
