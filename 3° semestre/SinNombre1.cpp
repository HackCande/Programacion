//escriba un rpograma que guaarde los datos de un alumno, nombre, apellido, edad, domicilio 
//y telefono y las notas correspondientes a una asignada asignatura
#include<stdio.h>
struct alumno{
char nombre[30],ape[25],dom[20];
int edad,te;
 
};
struct alumno al;
int main()
{
	
float ex_1,cal_1,ev_1,u_1;
    
	/*printf("\ningrese el nombre del alumno:\n");
	scanf("%s",&al.nombre);
	printf("\ningrese el apellido del alumno:\n");
	scanf("%s",&al.ape);
	printf("\ningrese el numero telefonico del alumno:\n");
	scanf("%d",&al.te);
	printf("\ningrese la edad del alumno:\n");
	scanf("%d",&al.edad);
	printf("\ningrese el domicilio del alumno:\n");
	scanf("%s",&al.dom);*/
	
	printf("\nDATOS DE LAUNIDAD 1 :\n");
	printf("\ningrese la calificacion 1:\n");
	scanf("%f",&ex_1);
	

	ex_1*=0.4;
	
	printf("\ningrese la calificacion de la evidencia:\n");
	scanf("%f",&ev_1);
	
	ev_1*=0.6;
	
	u_1=(ex_1+ev_1);
	
    printf("\nDATOS DEl alumo:\n");
	printf("\nel alumno es:%s\n",al.nombre);
	printf("\nsu apellido es:%s\n",al.ape);
	printf("\nsu numero de telefono es:%d\n",al.te);
	printf("\nsu edad es:%d\n",al.edad);
	printf("\nsu domicilio es:%s\n",al.dom);
	printf("\nsu calificacion de la unidad 1 es:%.2f\n",u_1);
			
}
