#include<iostream>

using namespace std;

void intercambio(float *, float *);



int main(){
	float num1=23.4, num2=12.45;
	intercambio(&num1, &num2);
	
	cout<<"El valor de num1 es: "<<num1<<endl;
	cout<<"El valor de num2 es: "<<num2<<endl;
	
	cout<<"\n\nLos nuevos valores son:\n\n";
	cout<<"El nuevo valor de num1 es: "<<num2<<endl;
	cout<<"El nuevo valor de num2 es: "<<num1<<endl;
	
	system("pause");
	return 0;
}

void intercambio(float *dirnum1, float *dirnum2){
	float aux;
	
	aux= *dirnum1;
	*dirnum1=*dirnum2;
	*dirnum2=aux;
}



