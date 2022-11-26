#include<stdio.h>
//espiral win win
struct alumno{
	char nombre[30], n_control[10], semestre[15];
	float cal_pr1[3], cal_pr2[3], cal_pr3[3], cal_pr4[3];
}a;

int main(){
	int i;
	float e_final[3], e_parcial[3], prom_final; 
	
	printf("Nombre: "); gets(a.nombre);
	printf("Numero de control: "); gets(a.n_control);
	fflush(stdin);
	printf("Semestre: "); gets(a.semestre);
	//fflush(stdin);
	
	for (i=0; i<=3; i++){
	printf("Calificacion de la practica 1: "); scanf("%f", &a.cal_pr1[i]);
	//fflush(stdin);
	printf("Calificacion de la practica 2: "); scanf("%f", &a.cal_pr2[i]);
	//fflush(stdin);
	printf("Calificacion de la practica 3: "); scanf("%f", &a.cal_pr3[i]);
	//fflush(stdin);
	printf("Calificacion de la practica 4: "); scanf("%f", &a.cal_pr4[i]);
	}
	
	
	//e_parcial= (a.cal_pr1+a.cal_pr2+a.cal_pr3+a.cal_pr4)/4;
	//e_final= ();
	
	printf("\n\nMostrando Datos: \n\n");
	printf("\nLa calificacion del parcial es: %.2f \n\n", e_parcial);
	
	system("pause");
	return 0;
}
