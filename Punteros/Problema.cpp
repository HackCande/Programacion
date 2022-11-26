/*escribe un programa que en un estructura guarde los datos de un alumno 
nombre, apellido, edad, domicilio, telefono y las notas correspondientes a una determinada asigntura;*/


#include<stdio.h>

struct alumno{
	char nombre[30], apellido[30], domicilio[20];
	int edad, telefono; 
	
}a;

int main(){
	float uni1, uni2, uni3;
	float evi, tra, trabajo=0.6, evidencia=0.4, prom;
	
	printf("\n\n\tDATOS DE LA UNIDAD 1: \n\n");
	printf("Calificacion de la evidencia: "); scanf("%f", &evi);
	fflush(stdin);
	printf("Califiaccion del trabajo: "); scanf("%f", &tra);
	
	evi*=evidencia;
	tra*=trabajo;
	
	uni1=evi+tra;
	
	printf("\n\n\tDATOS DE LA UNIDAD 2: \n\n");
	printf("Calificacion de la evidencia: "); scanf("%f", &evi);
	fflush(stdin);
	printf("Califiaccion del trabajo: "); scanf("%f", &tra);
	
	evi*=evidencia;
	tra*=trabajo;
	
	uni2=evi+tra;
	
	printf("\n\n\tDATOS DE LA UNIDAD 3: \n\n");
	printf("Calificacion de la evidencia: "); scanf("%f", &evi);
	fflush(stdin);
	printf("Califiaccion del trabajo: "); scanf("%f", &tra);
	
	evi*=evidencia;
	tra*=trabajo;
	
	uni3=evi+tra;
	
	
	printf("\n\n\tCalificaciones de las unidades: \n\n");
	printf("El resultado de la unidad 1 es: %.2f \n", uni1);
	printf("El resultado de la unidad 2 es: %.2f \n", uni2);
	printf("El resultado de la unidad 3 es: %.2f \n", uni3);
	
	prom=(uni1+uni2+uni3)/3;
	
	printf("\n\n\tPromedio general: \n\n");
	printf("El resultado del promedio general es: %.2f \n", prom);
	
//	system("pause");
	return 0;
}
