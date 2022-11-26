#include<stdio.h>

struct coleccion{
	char titulo[50];
	char artista[35];
	int n_cancion;
	float precio;
	char fecha;
}cd;
int main(){
	
	printf("Titulo de la cancion: ");  scanf("%s", &cd.titulo); fflush(stdin);
	printf("Nombre del artista: "); gets(cd.artista);
	printf("Numero de cancion: "); scanf("%i", &cd.n_cancion);
	printf("Precio: "); scanf("%f", &cd.precio);
	printf("Fecha de compra: "); gets(cd.fecha);
	
	printf("\n\nImprimiendo Datos\n");
	printf("\nTitulo: %s \n", cd.titulo);
	printf("Nombre del artista: %s \n", cd.artista);
	printf("Numero  de cancion: %i \n", cd.n_cancion);
	printf("Precio del cd: %f \n", cd.precio);
	printf("Fecha de compra: %s \n", cd.fecha);
	
	system("pause");
	return 0;
}
