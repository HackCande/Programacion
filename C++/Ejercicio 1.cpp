/*Dados tres números calcule: 
? La suma de los tres
? El promedio de los tres
? El producto de los tres 
Además determine:
? El menor de los tres*/
#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, suma, numero, promedio, menor, producto;
	
	cout<<"Ingrese tres numeros: "; cin>>n1>>n2>>n3;
	
	if(n1%2==0){
		cout<<"\nEl numero es par"<<endl<<endl;
	}
	else{
		cout<<"\nEl numero es impar"<<endl<<endl;
	}
	suma= n1+n2+n3;
	cout<<"\nLa suma total es: "<<suma<<endl;
	
	promedio=(n1+n2+n3)/3;
	cout<<"\nEl promedio es: "<<promedio<<endl;
	
	producto=n1*n2*n3;
	cout<<"\nEl producto total es: "<<producto<<endl;
	
	if((n1<n2&&n3)){
		cout<<"\nEl numero menor es: "<<n1<<endl;
	}else if(n2<n1&&n3){
		cout<<"\nEl numero menor es: "<<n2<<endl;
	}else if(n3<n1&&n2){
		cout<<"\nEl numero menor es: "<<n3<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
