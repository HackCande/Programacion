#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int edad, altura;
	struct Nodo *sig;
}Nodo;

Nodo *primer=NULL;
Nodo *ultimo=NULL;
Nodo *nodo;

void agregar(Nodo *nodo){
	Nodo *t, *p=(Nodo *)malloc(sizeof(Nodo));
	
	printf("Ingrese la edad: "); scanf("%i", &p->edad);
	printf("\nIngrese la ultura: "); scanf("%i", &p->altura);
	
	nodo->sig=NULL;
	
	if(primer==NULL){
		nodo=p;
		ultimo=p;
	}else{
		 nodo->sig=p;
		 nodo=p;
	}

}

int main(){
	int opcion;
	
	do{
		system("cls");
	printf("Ingrese la opcion: "); scanf("%i", &opcion);
	
	switch(opcion){
		case 1:
			system("cls");
			agregar(nodo); break;
			
	/*	case 2:
			if(nodo==NULL){
				printf("Vacio");
			}else{
			system("cls");
			mostrar(nodo);
			}
			 break;*/
	}
	}while(opcion!=3);
	
	system("pause");
	return 0;
}
