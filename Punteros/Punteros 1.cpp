#include<iostream>

using namespace std;

int main(){
	int num, *dir_num;
	
	cout<<"Ingrese un numero: "; cin>>num;
	
	dir_num= &num;
	
	if(*dir_num%2==0){
		cout<<"El numero "<<*dir_num<<" es par"<<endl;
		cout<<"La direccion: "<<dir_num<<endl;
	}else{
		cout<<"El numero "<<*dir_num<<" es impar"<<endl;
		cout<<"Direccion: "<<dir_num<<endl;
	}
	
	system("pause");
	return 0;
}
