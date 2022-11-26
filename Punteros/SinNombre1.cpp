#include<iostream>

using namespace std;

int main(){
	int numero[]={1,2,3,4,5};
	int *dir_num;
	
	dir_num=&numero[0];
	
/*for(int i=0; i<5; i++){
	
		cout<<"La dirreccion de memoria de "<<numero[i]<<" es: "<<dir_num++<<endl;
	}*/
	
	for(int i=0;i<5; i++){
		cout<<"\nEl valor del arreglo ["<<i<<"] es: "<<*dir_num++<<endl;
	}
	
	
	system("pause");
	return 0;
}
