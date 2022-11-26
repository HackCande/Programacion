/*escriba un programa que solicite su edad e indique 
en la salida estandar si la edad esta en el rango de [18-25]*/

#include<iostream>

using namespace std; 

int main(){
	int edad;
	
	cout<<"Digite su edad: "; cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"\nSu edad esta en dicho rango de [18-25]";
		
	}
	else{
		cout<<"\nSu edad no esta en dicho rango de [18-25]"<<endl;
		
	}
	
	
	return 0;
}
