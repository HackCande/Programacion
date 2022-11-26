// determinar si un numero es primo o no, con punteros y ademas indicar la posicion

#include<iostream>

using namespace std;

int main(){
	int num, *dir_num, cont;
	
	cout<<"Ingrese un numero: "; cin>>num;
	
	dir_num=&num;
	
	for(int i=1; i<=5; i++){

	if(*dir_num%i==0){
		cont++;
		if(cont==2){
			cout<<"El numero "<<*dir_num<<" es primo"<<endl;
			cout<<"Direccion: "<<dir_num<<endl;
		}else{
			cout<<"El numero "<<*dir_num<<" no es primo"<<endl;
			cout<<"Direccion: "<<dir_num<<endl;
		}
	//	cout<<cont<<endl;
	}	
	}
	system("pause");
	return 0;
}
