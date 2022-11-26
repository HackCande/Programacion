#include<iostream>

using namespace std;

int main(){
	int n, suma;
	
	cout<<"Ingrse el numero de elementos: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		suma+=i;
	}
	
	cout<<"\nEl resultado es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
