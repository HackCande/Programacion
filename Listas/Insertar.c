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
	Nodo *primernodo=malloc(sizeof(Nodo));
	primernodo->dato=5;
	
	Nodo *segundonodo=malloc(sizeof(Nodo));
	segundonodo->dato=12;
	
	agregar(primernodo);
	agregar(segundonodo);
	
	Nodo *i=primernodo;
	while(i!=NULL){
		printf("%i \n", i->dato);
		i=i->sig;
	}
	
	return 0;
}
