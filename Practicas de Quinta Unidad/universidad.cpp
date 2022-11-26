/*realice un programa con el siguiente enunciado. el valor del descuento que se le aplica a cada estudiante de una
universidad dependiaendo de la ciudad de procedencia. tome encuenta la siguiente tabla, que permita calcular el 
descuento que se realiza a un estudiante e imprimir cual es la cantidad de dinero que deja de percibir el
administrador de la universidad en concepto de descuento.

clave           ciudad         descuento
1               leon           2%
2              chinandega      10%
3              monagua         15%            el valor de la mensualidad es: $250.67
4             esteli           18%
5             jinotega         20%*/

#include<iostream>

using namespace std;

int  main(){
	int leon=1, mensualidad, chinandega=2, monagua=3, esteli=4, jinotega=5, ciudad, mensualidad2= 250.67, total;
	
	
	cout<<"1.-Leon"<<endl;
	cout<<"2.-Chinandega"<<endl;
	cout<<"3.-Monagua"<<endl;
	cout<<"4.-Esteli"<<endl;
	cout<<"5.-Jinotega"<<endl;
	cout<<"\nEl costo de la mensualidad es: "<<mensualidad2<<endl;
	cout<<"\n�Cual es tu ciudad de procedencia?", cin>>ciudad;
	
	
	switch(ciudad){
		case 1 :
			cout<<"\nTu ciudad de procedencia es Leon"<<endl;
			mensualidad= mensualidad2/100*2;
			total= mensualidad2-mensualidad;
			cout<<"\nLa cantidad a pagar es: "<<total<<endl; break;
		case 2 :
			cout<<"\nTu ciudad de procedencia es Chinandega"<<endl;
			mensualidad= mensualidad2/100*10;
			total= mensualidad2-mensualidad;
			cout<<"\nLa cantidad a pagar es: "<<total<<endl; break;
			
		case 3 :
			cout<<"\nTu ciudad de procedencia es Monagua"<<endl;
			mensualidad= mensualidad2/100*15;
			total= mensualidad2-mensualidad;
			cout<<"\nLa cantidad a pagar es: "<<total<<endl; break;
			
		case 4 :
			cout<<"\nTu ciudad de procedencia es Esteli"<<endl;
			mensualidad= mensualidad2/100*18;
			total= mensualidad2-mensualidad;
			cout<<"\nLa cantidad a pagar es: "<<total<<endl; break;
			
		case 5 :
			cout<<"\nTu ciudad de procedencia es jinotega"<<endl;
			mensualidad= mensualidad2/100*20;
			total= mensualidad2-mensualidad;
			cout<<"\nLa cantidad a pagar es: "<<total<<endl; break;
		
		default : 
			cout<<"\nEse lugar no existe en la base de datos"<<endl; 
			break;
	}
	
	system("pause");
	return 0;
}
