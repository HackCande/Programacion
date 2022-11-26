
/*crear una clase llamada libro el cual tendra como datos miembros: titulo, autor, paginas, 
codigo, editorial. la clase libro tiene dos funciones miembros: capturar e imprimir datos.*/

#include<iostream>//es la libreria estandar(entrada y salida de datos)

using namespace std;//sirve para reconocer las palabras reservadas (cout y cin)

class libro{//aqui declararemos nuestra clase.
	private://es la configuracion interna, solo pueden ser llamados o modificados por metodos de la misma clase.
		string titulo, autor, editorial;// en las lineas 10 y 11 declaramos las variables que usaremos.
		int paginas, codigo;
	public://son las partes externas que el usuario podra ver y modificar.
		void capturar_datos();//en las lineas 13 y 14 declararemos lo que el programa va a realizar.
		void mostrar_datos();
};
void libro::capturar_datos(){//resolucion de ambito. capturar_datos pertenece a la clase libro. 
	cout<<"Ingrese el titulo del libro: "; cin>>titulo;/*las lineas 18 al 22 pondremos las preguntas para asi
	obtener la informacion requerida*/
	cout<<"Ingrese el nombre del autor del libro: "; cin>>autor;
	cout<<"Ingrese la editorial del libro: "; cin>>editorial;
	cout<<"Ingrese el numero  de paginas: "; cin>>paginas;
	cout<<"Ingrese el codigo del libro: "; cin>>codigo;
}
void libro::mostrar_datos(){//capturar_datos pertenece a la clase libro.
	cout<<"\nEl titulo es: "<<titulo<<endl;//las lineas 26 al 30 imprimiremos los datos.
	cout<<"\nEl nombre del libro es: "<<titulo<<endl;
	cout<<"\nLa editorial es: "<<titulo<<endl;
	cout<<"\nEl numero de paginas es: "<<titulo<<endl;
	cout<<"\nEl codigo es: "<<titulo<<endl;
}

int main(){//funcion principal
	libro u;//aqui cree un objeto desde la clase libro
	u.capturar_datos();//enlazar la clase con la funcion para asi poder imprimirla.
	u.mostrar_datos();//mostrar los datos recabados
	system("pause");
	return 0;
}
