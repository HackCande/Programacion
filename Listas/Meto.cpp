#include<iostream>

using namespace std;

int main(){
	int array[5], aux;
	
	for(int i=0; i<5; i++){
		cout<<"Ingrese un numero: "; cin>>array[i];
	}


	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		if(array[j]>array[j+1]){
			aux=array[j];
			array[j]=array[j+1];
			array[j+1]=aux;
		}
		}
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<5; i++){
		cout<<array[i+1] <<endl;
	}
	
	
	return 0;
}
