#include<stdio.h>
//espiral win win
struct alumno{
	char nombre[30], n_control[10], semestre[15];
	float cal_pr1, cal_pr2, cal_pr3, cal_pr4;
}a;

int main(){
	float e_final, e_parcial1, e_parcial2, e_parcial3, prom_final; 
	
	printf("Nombre: "); gets(a.nombre);
	printf("Numero de control: "); gets(a.n_control);
	fflush(stdin);
	printf("Semestre: "); gets(a.semestre);
	
	printf("\n\n\tCalificaciones del primer parcial:\n\n");
	printf("Calificacion de la practica 1: "); scanf("%f", &a.cal_pr1);
	printf("Calificacion de la practica 2: "); scanf("%f", &a.cal_pr2);
	printf("Calificacion de la practica 3: "); scanf("%f", &a.cal_pr3);
	printf("Calificacion de la practica 4: "); scanf("%f", &a.cal_pr4);
	
	e_parcial1= (a.cal_pr1+a.cal_pr2+a.cal_pr3+a.cal_pr4)/4;
	
	printf("\n\n\tCalificaciones del segundo parcial:\n\n");
	printf("\n\nCalificacion de la practica 1: "); scanf("%f", &a.cal_pr1);
	printf("Calificacion de la practica 2: "); scanf("%f", &a.cal_pr2);
	printf("Calificacion de la practica 3: "); scanf("%f", &a.cal_pr3);
	printf("Calificacion de la practica 4: "); scanf("%f", &a.cal_pr4);
	
	e_parcial2= (a.cal_pr1+a.cal_pr2+a.cal_pr3+a.cal_pr4)/4;
	
	printf("\n\n\tCalificaciones del tercer parcial:\n\n");
	printf("\n\nCalificacion de la practica 1: "); scanf("%f", &a.cal_pr1);
	printf("Calificacion de la practica 2: "); scanf("%f", &a.cal_pr2);
	printf("Calificacion de la practica 3: "); scanf("%f", &a.cal_pr3);
	printf("Calificacion de la practica 4: "); scanf("%f", &a.cal_pr4);
	
	e_parcial3= (a.cal_pr1+a.cal_pr2+a.cal_pr3+a.cal_pr4)/4;
	
	printf("\n\n\tCalificaciones del Examen Final:\n\n");
	printf("\n\nCalificacion del Examen 1: "); scanf("%f", &a.cal_pr1);
	printf("Calificacion del Examen 2: "); scanf("%f", &a.cal_pr2);
	printf("Calificacion del Examen 3: "); scanf("%f", &a.cal_pr3);
	printf("Calificacion del Examen 4: "); scanf("%f", &a.cal_pr4);
	
	e_final= (a.cal_pr1+a.cal_pr2+a.cal_pr3+a.cal_pr4)/4;
	
	prom_final= (e_parcial1+e_parcial2+e_parcial3)/3;
	
	printf("\n\n\tMostrando Datos de los Parciales: \n\n");
	printf("\nLa calificacion del parcial 1 es: %.2f\n", e_parcial1);
	printf("La calificacion de del pacial 2 es: %.2f\n", e_parcial2);
	printf("La calificacion de del pacial 3 es: %.2f\n", e_parcial2);
	
	printf("\n\n\tMostrando Datos del Examen Final: \n\n");
	printf("\nLa calificacion del Examen Final es: %.2f \n\n", e_final);
	
	printf("\n\n\tMostrando Datos del Promedio Final: \n\n");
	printf("\nLa calificacion del Promedio Final es: %.2f \n\n", prom_final);
	
	system("pause");
	return 0;
}
