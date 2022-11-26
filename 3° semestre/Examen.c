#include<stdio.h>

struct tienda{
	char nombre1[30], nombre2[30], nombre3[30];
	int ven1, ven2, ven3;
	char cod1[15], cod2[15], cod3[15]; 
	float precio1, preci2, precio3;
}t;

int main(){
	float gana, pr1, pr2, pr3;
	
	printf("\n\n\tAgregando datos 1\n\n");
	printf("Ingrese el nombre de la marca: "); scanf("%s", &t.nombre1);
	printf("Ingrese el codigo del producto: "); scanf("%s", &t.cod1);
	printf("Ingrese el precio del producto: "); scanf("%f", &t.precio1);
	printf("Ingrese la cantidad de productos vendidos en el mes: "); scanf("%i", &t.ven1);
	
	
	
	
	printf("\n\n\tAgregando datos 2\n\n");
	printf("Ingrese el nombre de la marca: "); scanf("%s", &t.nombre2);
	printf("Ingrese el codigo del producto: "); scanf("%s", &t.cod2);
	printf("Ingrese el precio del producto: "); scanf("%f", &t.preci2);
	printf("Ingrese la cantidad de productos vendidos en el mes: "); scanf("%i", &t.ven2);
	
	
	
	
	printf("\n\n\tAgregando datos 3\n\n");
	printf("Ingrese el nombre de la marca: "); scanf("%s", &t.nombre3);
	printf("Ingrese el codigo del producto: "); scanf("%s", &t.cod3);
	printf("Ingrese el precio del producto: "); scanf("%f", &t.precio3);
	printf("Ingrese la cantidad de productos vendidos en el mes: "); scanf("%i", &t.ven3);
	
	printf("\n\n\tMostrando Resultados de la marca 1\n\n");
	printf("Marca: %s\n", t.nombre1);
	printf("codigo: %s\n", t.cod1);
	printf("precio: %.2f\n", t.precio1);
	printf("Productos vendidos: %i\n", t.ven1);
	
	printf("\n\n\tMostrando Resultados de la marca 2\n\n");
	printf("Marca: %s\n", t.nombre2);
	printf("codigo: %s\n", t.cod2);
	printf("precio: %.2f\n", t.preci2);
	printf("Productos vendidos: %i\n", t.ven2);
	
	printf("\n\n\tMostrando Resultados de la marca 3\n\n");
	printf("Marca: %s\n", t.nombre3);
	printf("codigo: %s\n", t.cod3);
	printf("precio: %.2f\n", t.precio3);
	printf("Productos vendidos: %i\n", t.ven3);
	
	pr1=(t.precio1*t.ven1);
	pr2=(t.precio1*t.ven2);
	pr3=(t.precio1*t.ven3);
	
	gana=(pr1+pr2+pr3);
	
	printf("\n\nLa ganancia total en todo el  mes es: %.2f", gana);


	return 0;
}
