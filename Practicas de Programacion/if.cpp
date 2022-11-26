/*escriba un programa que solicite una edad ( un numero)
 e indique en la salida estandar si la edad esta en
 el rango de[18-25]*/
 
 #include<iostream>
 
 using namespace std;
 
 int main(){
 	float numero;
 	
 	cout<<"Ingrese el valor de numero: "; cin>>numero;
 	
 	if((numero>=18)&&(numero<=25)){
 		cout<<"\nEl numero  esta dentro del rango[18-25]";
	 }
 	else{
 		cout<<"\nEl numero no esta dentro del rango[18-25]";
	 }
 	
 	return 0;
 }
