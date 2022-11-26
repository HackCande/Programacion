#include<iostream>

using namespace std;

int main(){
	int cal1, cal2, cal3, cal4, cal5, promedio ;
	
	cout<<"Ingrese la calificacion 1: "; cin>>cal1;
	cout<<"Ingrese la calificacion 2: "; cin>>cal2;
	cout<<"Ingrese la calificacion 3: "; cin>>cal3;
	
	
	promedio=cal1+cal2+cal3; 
	promedio/=3;
	
	cout<<"\nEl promedio es: "<<promedio<<endl<<endl;
	
	if(promedio>70){
		cout<<"\t!!Felicidades, HAS APROVADO¡¡"<<endl<<endl;
	}else{
		cout<<"\n\tlo siento, NO HAS APROVADO"<<endl<<endl;
	}
	
	system("pause");
	
	return 0;
}
