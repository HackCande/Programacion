#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int dato;
	struct Nodo *sig;
}Nodo;

Nodo *primer=NULL;
Nodo *ultimo=NULL;

void agregar(Nodo *nodo){
	nodo->sig=NULL;
	
	if(primer==NULL){
		primer=nodo;
		ultimo=nodo;
	}else{
		ultimo->sig=nodo;
		ultimo=nodo;
	}
}

int main(){
	int nombre, apellido;
	
	printf("Ingrese un numero: "); scanf("%i",&nombre);
	printf("Ingrese un numero: "); scanf("%i", &apellido);
	
	Nodo *primero=malloc(sizeof(Nodo));
	primero->dato=nombre;
	
	Nodo *segundo=malloc(sizeof(Nodo));
	segundo->dato=apellido;
	
	agregar(primero);
	agregar(segundo);
	
	Nodo *i=primero;
	while(i!=NULL){
		printf("%i \n", i->dato);
		i=i->sig;
	}
	
	system("pause");
	return 0;
}
