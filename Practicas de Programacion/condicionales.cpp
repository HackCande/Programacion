/*escribe un programa que lea de la entrada estandar tres numeros.Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos
con anterioridad.*/

#include<iostream>

using namespace std;

int main(){
	int n1 = 2, n2= 6, n3 = 45 , n4=0;
	
	/*cout<<"digite el valor de n1: "; cin>>n1;
	cout<<"digite el valor de n2: "; cin>>n2;
	cout<<"digite el valor de n3: "; cin>>n3;*/
	cout<<"digite el valor de n4: "; cin>>n4;
	
	
	if(n4==n1){
		cout<<"\nel valor de n4 si coincide con el valor de n1"<<endl;
	}
	else{
		cout<<"\nel valor de n4 no coincide con el valor de n1"<<endl;
		
	}
	
	if(n4==n2){
		cout<<"\nel valor de n4 si coincide con el valor de n2"<<endl;
	}
	else{
		cout<<"\nel valor de n4 no coincide con el valor de n2"<<endl;
	}
	
	if(n4==n3){
		cout<<"\nel valor de n4 si coincide con el valor de n3"<<endl;
	}
	else{
		cout<<"\nel valor de n4 no coincide con el valor de n3"<<endl;
	}
	
	
	return 0;
}
