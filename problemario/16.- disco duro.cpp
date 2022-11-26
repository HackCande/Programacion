/*diseñe un prgrama en c++ que exprese la capacidad de un disco duro en megabytes(mb), 
expresar en mb, kb, b., conociendo la capacidad la capacidad de disco duro en gb. considere que:
un b= 8 b
un kb= 1024 b
un mb= 1024 kb
un gb= 1024 mb.*/

#include<iostream>

using namespace std;

int main(){
	int b=8 , kb= 1024 , mb= 1024, gb= 1024, total, capacidad;
	
	cout<<"Ingrese la capacidad del disco duro en Gb: "; cin>>capacidad;
	
	mb*=capacidad;
	kb*=mb;
	b*=kb;
	
	cout<<"\nEl valor de la capacidad del disco duro en Mb es: "<<mb<<endl;
	cout<<"El valor de la capacidad del disco duro en Kb es: "<<kb<<endl;
	cout<<"El valor de la capacidad del disco duro en B es: "<<b<<endl;
	
	
	
	system("pause");
	return 0;
}


