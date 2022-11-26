/*al ingresar el dia y el numero de un mes, devolver la estacion del año de acuerdo a la sig. tabla

estacion                   tiempo

invierno            del 21 de diciembre al 20 de marzo
primavera           del 21 de marzo al 21 de junio
verano              del 22 de junio al 22 de septiembre
otoño               del 23 de septiembre al 20 de diciembre

se requiere que el usuario ingrese el dia y el mes, luego el sistema verifica y devuelva la estacion.*/

#include<iostream>

using namespace std;

int main(){

	int dia, mes, enero=1, febrero=2, marzo=3, abril=4, mayo=5, junio=6, julio=7, agosto=8, septiembre=9, octubre=10, noviembre=11, diciembre=12;
	
	cout<<"Ingrese el dia: "; cin>>dia;
	cout<<"Ingrese en el mes: "; cin>>mes;
	
    switch(mes){
    	case 1 :
    		if(dia<=31){
    			cout<<"\nUsted esta en el Invierno"<<endl;
			}else{
				cout<<"\nError, el mes de Enero solo cuenta con 31 dias"<<endl; break;
			}
    		
		case 2 : 
		    if(dia<=28){
    			cout<<"\nUsted esta en el Invierno"<<endl;
			}else{
				cout<<"\nError, el mes de Febrero solo cuenta con 28 dias"<<endl; break;
			}
    		
		case 3 :
			if((mes==marzo)&&(dia<=20)){
				cout<<"\nUsted esta en el Invierno"<<endl; break;
			}else if((mes==3)&&(dia>=21)&&(dia<=31)){
				cout<<"\nUsted esta en la primavera"<<endl; break;
			}else{
				cout<<"\nError, El mes de marzo solo cuenta con 31 dias"<<endl; break;
			}
	
		case 4 :
			if(dia<=30){
    			cout<<"\nUsted esta en la primavera"<<endl;
			}else{
				cout<<"\nError, el mes de Abril solo cuenta con 30 dias"<<endl; break;
			}
		case 5 :
		if(dia<=31){
    			cout<<"\nUsted esta en la primavera"<<endl;
			}else{
				cout<<"\nError, el mes de mayo solo cuenta con 31 dias"<<endl; break;
			}
		case 6 :
			if((mes==6)&&(dia<=21)){
				cout<<"\nUsted esta en la primavera"<<endl; break;
			}else if((mes==6)&&(dia>=22)&&(dia<=30)){
				cout<<"\nUsted esta en el verano"<<endl; break;
			}else{
				cout<<"\nError, el mes de Junio solo cuenta con 30 dias"<<endl; break;
			}
		
		case 7 :
			if(dia<=31){
    			cout<<"\nUsted esta en el verano"<<endl;
			}else{
				cout<<"\nError, el mes de julio solo cuenta con 31 dias"<<endl; break;
			}
		case 8 :
			if(dia<=31){
    			cout<<"\nUsted esta en el verano"<<endl;
			}else{
				cout<<"\nError, el mes de agosto solo cuenta con 31 dias"<<endl; break;
			}
		case 9 :
			if((mes==9)&&(dia<=22)){
				cout<<"\nUsted esta en el verano"<<endl; break;
			}else if((mes==9)&&(dia>=23)&&(dia<=30)){
				cout<<"\nUsted esta en el otoño"<<endl; break;
			}
			
		case 10 :
			if(dia<=31){
    			cout<<"\nUsted esta en el otoño"<<endl;
			}else{
				cout<<"\nError, el mes de octu solo cuenta con 31 dias"<<endl; break;
			}
		case 11 :
			if(dia<=30){
    			cout<<"\nUsted esta en el otoño"<<endl;
			}else{
				cout<<"\nError, el mes de noviembre solo cuenta con 30 dias"<<endl; break;
			}
		case 12 :
			if((mes==12)&&(dia<=20)){
				cout<<"\nUsted esta en el otoño"<<endl; break;
			}else if((mes==12)&&(dia>=21)&&(dia<=31)){
				cout<<"\nUsted esta en el invierno"<<endl; break;
			}else{
				cout<<"\nError, el mes de diciembre solo cuenta con 31 dias"<<endl; break;
			}
		default : 
		    cout<<"\nError, Error, Error"<<endl; break;
		}
	
	
	
	
	system("pause");
	return 0;
}
