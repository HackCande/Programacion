/*dada la cantidad de horas trabajadas, la categoria y la antiguedad de un empleado,
calcular el sueldo teniendo en cuenta que cobra $5 adicionales por cada año trabajando.
el valor por cada categoria es:

 categoria 1.- $5
 categoria 2.- $6
 categoria 3.- $4.5
 categoria 4.- $10
 categoria 5.- $9
 */
 
#include<iostream>

using namespace std;

int main(){
	float ht, c, c1=5, c2=6, c3=4.5, c4=10, c5=9, a, total;
	int hacer;
	
	cout<<"Ingrese las horas trabajadas: "; cin>>ht;
	cout<<"Ingrese la antiguedad de estar trabajando: "; cin>>a;
	cout<<"1.- Categoria 1"<<endl;
	cout<<"2.- Categoria 2"<<endl;
	cout<<"3.- Categoria 3"<<endl;
	cout<<"4.- Categoria 4"<<endl;
	cout<<"5.- Categoria 5"<<endl;
	cout<<"Que categoria es usted? "; cin>>hacer;
	
	
	switch(hacer){
		case 1 : 
		a*=5;
		total=ht+a+c1;
		
		cout<<"\nEl total del sueldo es: "<<total<<endl; break;
	    case 2 :
	    a*=5;
	    total= ht+a+c2;
	    
	    cout<<"\nEl total del sueldo es: "<<total<<endl; break;
	    case 3 :
	    a*=5;
	    total=ht+a+c3;
	    
	    cout<<"\nEl total del sueldo es: "<<total<<endl; break;
	    case 4 :
	    a*=5;
	    total=ht+a+c4;
	    
	    cout<<"\nEl total del sueldo es: "<<total<<endl; break;
	    case 5 :
	    a*=5;
	    total=ht+a+c5;
	    
	    cout<<"\nEl total del sueldo es: "<<total<<endl; break;
	}
	
	
	
	
	
	system("pause");
	return 0;
}


