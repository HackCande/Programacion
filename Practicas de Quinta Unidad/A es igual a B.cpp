/*dado dos numeros enteros a y b, determinar cual es mayor con respecto al otro
A es mayor que B
B es mayor que A
A es igual a B*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Ingrese el valor de A: "; cin>>n1;
	cout<<"Ingrese el valor de B: "; cin>>n2;
	
	if(n1>n2){
		cout<<"\nA es mayor que B"<<endl<<endl;
	}else if(n2>n1){
	    cout<<"\nB es mayor que A"<<endl<<endl;
	}else if(n1==n2){
		cout<<"\nA es igual que B"<<endl<<endl;
	}
	
	
	system("pause");
	return 0;
}
