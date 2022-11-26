#include<iostream>

using namespace std;

int main(){
	int lab, resto, total, mul;
	
	cout<<"Ingrese el numero de horas laboradas: "; cin>>lab;
	
	if(lab<=40){
		total=lab*16;
		
		cout<<"\nEl salario total es: "<<total<<endl;
	}else{
		resto=lab-40;
		mul=40*16;
		resto*=20;
		
		total=mul+resto;
		cout<<"\nEl salario total es: "<<total<<endl;
	}
	
	system("pause");
	return 0;
}
