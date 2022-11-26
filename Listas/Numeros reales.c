#include<stdio.h>
#include<stdlib.h>

typedef struct{
	float numero;
	struct Nodo *sig;
}Nodo;

Nodo *primero=NULL;
Nodo *ultimo=NULL;

void agregar_dato(Nodo *nodo){
	nodo->sig=NULL;
	
	if(primero==NULL){
		primero=nodo;
		ultimo=nodo;
	}else{
		ultimo->sig=nodo;
		ultimo=nodo;
	}
}


int main(){
	float n1, n2, n3;
	
	printf("Ingrese 3 numeros reales: "); scanf("%f %f %f", &n1, &n2, &n3);
	
	Nodo *primernodo=malloc(sizeof(Nodo));
	primernodo->numero=n1;
	
	Nodo *segundo=malloc(sizeof(Nodo));
	segundo->numero=n2;
	
	Nodo *tercer=malloc(sizeof(Nodo));
	tercer->numero=n3;
	
	agregar_dato(primernodo);
	agregar_dato(segundo);
	agregar_dato(tercer);
	
	Nodo *i=primernodo;
	while(i!=NULL){
		printf("%.2f \n",i->numero);
		i=i->sig;
	}
	
	
	return 0;
}
