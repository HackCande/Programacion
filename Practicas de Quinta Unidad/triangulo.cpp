/*dado 3 longitudes, diga si forman un triangulo.
en todo triangulo, cada lado es menor que la suma de los otros dos, pero mayor que
su diferencia*/

#include<iostream>

using namespace std;

int main(){
	float l1, l2, l3, suma, suma2, suma3;
	
	cout<<"Ingrese una longitud: "; cin>>l1;
	cout<<"Ingrese otra longitud: "; cin>>l2;
	cout<<"Ingrese otra longitud: "; cin>>l3;
	
	suma=l1+l2;
	suma2=l1+l3;
	suma3=l2+l3;
	
	if((l1<suma3)&&(l2<suma2)&&(l3<suma)&&(l1!=l2)&&(l1!=l3)&&(l2!=l1)&&(l2!=l3)&&(l3!=l1)&&(l3!=l2)){
			cout<<"\nSi forman un triangulo"<<endl;
  	}else {
			cout<<"\nNo forman un triangulo"<<endl;	
	}


	system("pause");
	return 0;
}
