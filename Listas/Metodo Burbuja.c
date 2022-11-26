#include<stdio.h>

int main(){
	int array[5], i, j, aux;
	
	
	for(i=0; i<5; i++){
	printf("Ingrese un numero: "); scanf("%i", &array[i]);
}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(array[j]>array[j+1]){
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
			}
		}
	}
	
	printf("\n\n Orden ascendente:");
	
	for(i=0; i<5;i++){
		printf("%i ", array[i]);
	}
	
	printf("\n\n Orden descendente:");
	
	
	for(i=4; i>=0; i--){
		printf("%i ", array[i]);
	}
	
	return 0;
}
