/*dado 3 longitudes, si forman  un triangulo, devolver el tipo de triangulo
segun sus lados.
T. Equilatero.- son tres lados iguales
T. Isoceles.- 2 lados iguales
T.Escaleno.- 3 lados diferentes*/

#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3;
	
	cout<<"Ingrese una longitud: "; cin>>n1;
	cout<<"Ingrese otra longitud: "; cin>>n2;
	cout<<"Ingrese otra longitud: "; cin>>n3;
	
	if((n1==n2)&&(n1==n3)){
		cout<<"\nEs un Triangolo Equilatero"<<endl;
	}else if((n1==n2)&&(n1!=n3)||(n1==n3)&&(n1!=n2)||(n2==n3)&&(n2!=n1)||(n2==n1)&&(n2!=n3)||(n3==n1)&&(n3!=n2)||(n3==n2)&&(n3!=n1)){
	    cout<<"\nEs un Triangulo Isoceles"<<endl;
	}else if((n1!=n2&&n3)||(n2!=n3&&n1)||(n3!=n2&&n1)){
		cout<<"\nEs un Triangulo Escaleno"<<endl;
	}
	
	system("pause");
	return 0;
}
