/*crear una clase llamada cubo el cual tendra como datos miembros area y volumen, la clase cubo tiene dos
 funciones, calcular volumen y calcular area e imprimir el valor resultante*/
 
 #include<iostream>//es la libreria estandar(entrada y salida de datos)
 #include<math.h>//es la libreria que permite llamar la funcion pow.
 //v=a3     a=6.a2
 using namespace std;//esto reconoce las palabras reservadas cout y cin
 
 class cubo{//aqui declaro mi clase como cubo
 	private://sirve para trabajar internamente y de forma privada, terceras personas no podran configurar nada
 		int aristas, area, volumen;//declaro mis variables a utilizar.
 	public://sirve para que terceras personas puedan trabajar externamente en el programa
 	void calcular_area();//en las lineas 13 y 14 declaro las funciones que mi clase tendra
 	void calcular_volumen();
 };
 void cubo::calcular_area(){//aqui declaro que la funcion calcular_area pertenece a la clase cubo
 	cout<<"Ingrese el numero de aristas: "; cin>>aristas;
 	area=((6)*(pow(aristas, 2)));//en las lineas 18 , 21 y 26 ingreso la operacion que el programa realizara
 	cout<<"\nel area es: "<<area<<endl;//en las lineas 19 , 22 y 27 imprimir el resultado de la operacion
 	
 	volumen=(pow(aristas,3));
 	cout<<"\nEl volumen es: "<<volumen<<endl;
 }
 void cubo::calcular_volumen(){//declaramos que la funcion calcular_volumen pertence a la clase cubo
 	cout<<"Ingrese el numero de aristas: "; cin>>aristas;//añadimos y guardamos etiquetas
 	volumen=pow(aristas,3);
 	cout<<"\nEl volumen es: "<<volumen<<endl;
 	
	 }
 int main(){//la funcion principal
 	cubo cubo1;//cree un objetos desde la clase cubo
 	
 	cubo1.calcular_area();//en las lineas 33 y 34 enlazamos la clase cubo con las funciones
 	cubo1.calcular_volumen();
 	
 	system("pause");
 	return 0;
 }
