#include<iostream>

using namespace std;

int main(){
	int n1, suma=0;
	
	for(int i=2; i<=100; i++){
		if(i%2==0){
			suma+=i;
		}
		
	}
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
