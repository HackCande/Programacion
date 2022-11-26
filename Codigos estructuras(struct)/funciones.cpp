#include<iostream>

using namespace std;

int encontrarmayor(int x, int y);

int main(){
	int n1, n2;
	
	cout<<"Ingrese dos numeros: "; cin>>n1>>n2;
	
	cout<<"\nEl numero mayor de los dos numeros es: "<<encontrarmayor(n1, n2)<<endl;
	
	
	system("pause");
	return 0;
}

int encontrarmayor(int x, int y){
	int numeromayor;
	
	if(x>y){
		numeromayor=x;
	}else{
		numeromayor=y;
	}
}
