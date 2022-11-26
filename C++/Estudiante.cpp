/*Crear una clase estudiante, datos miembros nombre, edad, semestre y promedio.
la clase estudiante tiene 3 funcones miembros , capturar datos, calcular promedio y mostrar datos,*/

#include<iostream>//es la libreria estandar(entrada y salida de datos)

using namespace std;//esto reconoce las palabras reservadas cout y cin
class estudiante{//declaro la clase a utilizar 
	private://sirve para trabajar internamente y de forma privada, terceras personas no podran configurar nada
		char nombre [20];//declaro las variables a utilizar
		int edad;//declaro las variables a utilizar
		char semestre[15];//declaro las variables a utilizar
		double c1, c2, c3, c4, c5, promedio;//declaro las variables a utilizar
	public://sirve para que terceras personas puedan trabajar externamente en el programa
		void capturar_datos();//en las lineas 15, 16 y 17 declaro las funciones que la clase calcular tendra.
		double calcular_promedio();
		void imprimir_datos();
};
void estudiante::capturar_datos(){//aqui declaro que la funcion capturar_datos pertenece a la clase estudiante
	cout<<"Ingrese el nombre del estudiante: "; cin.getline(nombre, 20);
	cout<<"Ingrese la edad del estudiante: "; cin>>edad;//en las lineas 21 a la 24 ingresare los datos requeridos
	cout<<"Ingrese el semestre del estudiante: "; cin>>semestre;
	cout<<"Ingrese las 5 calificaciones del estudiante: "; cin>>c1>>c2>>c3>>c4>>c5;
}

double estudiante::calcular_promedio(){//aqui declaro que la funcion calcular_datos pertenece a la clase estudiante
	  promedio=(c1+c2+c3+c4+c5)/5;//realizo la operacion necesario para sacar el promedio del estudiante
}

void estudiante::imprimir_datos(){//aqui declaro que la funcion imprimir_datos pertenece a la clase estudiante
	cout<<"\n\tLos datos del estudiante son:"<<endl;
	cout<<"\n\nEl nombre del estudiante es: "<<nombre<<endl;
	cout<<"La edad es de: "<<edad<<endl;//En las lineas de  la 33 a la 37 imprimire los datos recabados
	cout<<"El semestre que cursa es de: "<<semestre;cout<<" semestre"<<endl;
	cout<<" El promedio es de: "<<promedio<<endl;
}

int main(){
	estudiante e;//cree un objeto desde la clase estudiante
	e.capturar_datos();//en las lineas 42 a la 44 enlazamos la clase estudiante con las funciones
	e.calcular_promedio();
	e.imprimir_datos();

	system("pause");
	return 0;
}
