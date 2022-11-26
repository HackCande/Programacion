/*crear una clase llamada calcular el cual tendra como clases  miembros radio
area y longitud, la clase calcular tiene dos funciones miembros: entrada y salida de datos.
se trata de calcular el area y longitud de una circunferencia.*/

#include<iostream>//es la libreria estandar(entrada y salida de datos)
#include<math.h>//es la libreria que permite llamar la funcion pow.

using namespace std;//esto reconoce las palabras reservadas cout y cin

class calcular{//declaro la clase a utilizar 
	private://sirve para trabajar internamente y de forma privada, terceras personas no podran configurar nada
		int radio, area, longitud, area1, longitud1;//declaro las variables a utilizar
	public://sirve para que terceras personas puedan trabajar externamente en el programa
		void entrada_datos();//en las lineas 14 y 15 declaro las funciones que la clase calcular tendra.
		void salida_datos();
};
void calcular::entrada_datos(){//aqui declaro que la funcion entrada_datos pertenece a la clase cubo
	cout<<"Ingrese el radio de la circunferencia: "; cin>>radio;//aqui agrege una etiqueta

	//l=pi*d    a=pi*r2
}
void calcular::salida_datos(){//aqui declaro que la funcion salida_datos pertenece a la clase cubo
	area1=((3.1416)*pow(radio,2));//en las lineas 23 y 26 declaro la operacion
	cout<<"\nEl area es: "<<area1<<endl;//en las lineas 23 y 27 imprimiremos los resultados
	
	longitud1=((3.1416)*(radio*2));
	cout<<"\nLa longitud es: "<<longitud1<<endl;
	
}
int main(){//funcion principal
	calcular c;//cree un objetos desde la clase cubo
	c.entrada_datos();//en las lineas 32 y 33 enlazamos la clase cubo con las funciones
	c.salida_datos();
	
	
	system("pause");
	return 0;
}
