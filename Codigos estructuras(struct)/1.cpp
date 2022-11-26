/* Hacer una estructura llamada corredor, en la cual
se tendran los siguientes campos: nombre, edad, sexo, club, pedir datos
al usuario para un corredor, y asignarle una categoria de competicion:
- Juvenil <= 18 años
- señor <=40 años
- veterano >40 años
posteriormente imprimir todos los datos del corredor, incluyendo
su categoria de competicion.*/

#include<iostream>
#include<string.h>

using namespace std;

struct corredor{
	char nombre[25];
	int edad;
	char sexo[15];
	char club[15];
}c1;

int main(){
	char categoria[15];
	
	cout<<"Nombre: "; cin.getline(c1.nombre, 25, '\n');
	cout<<"Edad: "; cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: "; cin.getline(c1.sexo, 15, '\n');
	cout<<"Club: "; cin.getline(c1.club, 15, '\n');
	
	if(c1.edad<=18){
		strcpy(categoria, "juvenil");
	}else if(c1.edad<=40){
		strcpy(categoria, "adulto");
	}else{
		strcpy(categoria, "veterano");
	}
	
	cout<<"\n\nNombre: " <<c1.nombre<<endl;
	cout<<"Edad: " <<c1.edad<<endl;
	cout<<"Sexo: " <<c1.sexo<<endl;
	cout<<"Club: " <<c1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	
	system("pause");
	return 0;
}
