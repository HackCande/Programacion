/*hacer un programa en c++ que lea por teclado unos numeros, hasta que introduzcamos un numero negativo y calcular su media.*/

#include<iostream>
#include<time.h>

using namespace std;

int main(){
	float  n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, suma, contador=0;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	
	if(n1>0){
		cout<<"Ingrese un numero: "; cin>>n2;
		if(n2<0){
			suma=(n1+n2)/2;
			cout<<"\nLa media es: "<<suma<<endl;
		}
	if(n2>0){
			cout<<"Ingrese un numero: "; cin>>n3;
			if(n3<0){
				suma=(n1+n2+n3)/3;
				cout<<"\nLa media es: "<<suma<<endl;
			}
	if(n3>0){
			        cout<<"Ingrese un numero: "; cin>>n4;
			         if(n4<0){
				        suma=(n1+n2+n3+n4)/4;
				        cout<<"\nLa media es: "<<suma<<endl;
				    }
	if(n4>0){
			          	cout<<"Ingrese un numero: "; cin>>n5;
		if(n5<0){
				suma=(n1+n2+n3+n4+n5)/5;
				cout<<"\nLa media es: "<<suma<<endl;
			}
	if(n5>0){
			        cout<<"Ingrese un numero: "; cin>>n6;
			        if(n6<0){
				        suma=(n1+n2+n3+n4+n5+n6)/6;
				        cout<<"\nLa media es: "<<suma<<endl;
				}
	if(n6>0){
		cout<<"Ingrese un numero: "; cin>>n7;
		if(n7<0){
			suma=(n1+n2+n3+n4+n5+n6+n7)/7;
			cout<<"\nLa media es: "<<suma<<endl;
		}
	if(n7>0){
		cout<<"Ingrese un numero: "; cin>>n8;
		if(n8<0){
			suma=(n1+n2+n3+n4+n5+n6+n7+n8)/8;
			cout<<"\nLa media es: "<<suma<<endl;
		}
	if(n8>0){
		cout<<"Ingrese un numero: "; cin>>n9;
		if(n9<0){
			suma=(n1+n2+n3+n4+n5+n6+n7+n8+n9)/9;
			cout<<"\nLa media es: "<<suma<<endl;
		}
	if(n9>0){
		cout<<"Ingrese un numero: "; cin>>n10;
		if(n10<0){
			suma=(n1+n2+n3+n4+n5+n6+n7+n8+n9+10)/10;
			cout<<"\nLa media es: "<<suma<<endl;
		}
	
	}
	}
	}
	}
}
}
}
}
}

	system("pause");
	return 0;
}
