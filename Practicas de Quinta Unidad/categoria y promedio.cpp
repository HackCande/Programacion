/*determine el importe a pagar para el examen de admision de una universidad , cuyo valor depende del nivel socioacademico
y el colegio de procedencia.

promedio                 categoria

entre 0 y 5              pesimo
entre 6 y 10             malo
entre 11 y 15            regular
entre 18 y 20            excelente

se requiere que el usuario ingrese  el promedio, luego el sistema verifica y devuelva la categoria.
*/

#include<iostream>

using namespace std;

int main(){
	float pesimo, malo, regular, excelente, cal;
	int cal1;
	
	cout<<"Ingrese tu promedio: "; cin>>cal1;
	
	switch(cal1){
		case 1 : 
		cout<<"\nTu categoria es Bajo"<<endl; break;
		case 2 :
		cout<<"\nTu categoria es Bajo"<<endl; break;
		case 3 : 
		cout<<"\nTu categoria es Bajo"<<endl; break;
		case 4 :
		cout<<"\nTu categoria es Bajo"<<endl; break;
		case 5 : 
		cout<<"\nTu categoria es Bajo"<<endl; break;
		case 6 :
		cout<<"\nTu categoria es Malo"<<endl; break;
		case 7 : 
		cout<<"\nTu categoria es Malo"<<endl; break;
		case 8 :
		cout<<"\nTu categoria es Malo"<<endl; break;
		case 9 : 
		cout<<"\nTu categoria es Malo"<<endl; break;
		case 10 :
		cout<<"\nTu categoria es Malo"<<endl; break;
		case 11 : 
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 12 :
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 13 : 
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 14 :
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 15 : 
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 16 :
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 17 : 
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 18 :
		cout<<"\nTu categoria es Regular"<<endl; break;
		case 19 : 
		cout<<"\nTu categoria es Excelente"<<endl; break;
		case 20 :
		cout<<"\nTu categoria es Excelente"<<endl; break;
		
		default :
			cout<<"\nError, Error, Error"<<endl; break;
	}
	
	system("pause");
	return 0;
}
