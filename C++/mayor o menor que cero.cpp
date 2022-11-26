/*Realiza un programa que lea de la entrada estandar numeros hasta que se introduzca un cero.
 En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores de cero leidos*/
 
 #include<iostream>
 
 using namespace std;
 
 int main(){
 	int n1;
 	
 	do{
 		cout<<"Ingrese un numero: "; cin>>n1;
	 }while((n1>0)||(n1<0));
	 
	 if(n1==0){
	 	for(int i=1; i<=10; i++){
	 		cout<<" n1>0"<<" + "<<i<<" = "<<"n1>0"+i<<endl;
		 }
	 }
 	
 	system("pause");
 	return 0;
 }
