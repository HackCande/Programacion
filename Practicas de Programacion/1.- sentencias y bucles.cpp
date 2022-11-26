#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float area, seguro, volumen, area_t, base, altura, pi=3.1416, radio, inclinacion; 
	int opc, entrar=1, salir=2;
	char hacer;

	cout<<"\n\tBienvenido al menu principal del Programa Matematico"<<endl;
	cout<<"\nPara elegir las opciones, escribe el numero que contiene..."<<endl;
	cout<<"\n1.- entrar"<<endl;
	cout<<"2.- salir"<<endl;
	
	do{
		cout<<"\nQue desea hacer? "; cin>>hacer;
	}while((hacer<entrar)||(hacer>2)||(int(hacer)>=65)||(int(hacer)<=122)||(int(hacer)<91)||(int(hacer)>96)||(int(hacer)<49)||(int(hacer)>50));
	
	
	
	if(hacer==entrar){
		cout<<"\n\tAbriendo contenido del Programa Matematico"<<endl;
		
		cout<<"\n1.- Sacar el area de un tringulo"<<endl; 
	    cout<<"2.- Sacar el volumen de un triangulo"<<endl;
	    cout<<"3.- Sacar el area de un cilindro"<<endl;
	    cout<<"4.- Sacar el volumen de un cilindro"<<endl;
	    cout<<"5.- Sacar el area de una esfera"<<endl;
	    cout<<"6.- Sacar el volumen de una esfera"<<endl;
	    cout<<"7.- Sacar el area de un cono"<<endl;
	    cout<<"8.- Sacar el volumen de un cono"<<endl;
	    cout<<"9.- Sacar el area de un cubo"<<endl;
	    cout<<"10.- Sacar el volumen de un cubo"<<endl;
	
	    cout<<"\nQue deseas hacer: "; 
	    cin>>opc;
	
	switch(opc){
		
		
	
		case 1 :
			cout<<"\n\tUsted sacara el area del triangulo"<<endl;
			cout<<"\nIngrese el valor de la base: "; cin>>base;
			cout<<"Ingrese el valor de la altura: "; cin>>altura;
			
			area_t= base*altura/2;
			
			cout<<"\nEl area del triangulo es: "<<area_t<<endl;break;
		
		case 2 :
			cout<<"\n\tUsted sacara el volumen del triangulo"<<endl;
			cout<<"\nIngrese el valor de base: "; cin>>base;
			cout<<"Ingrese el valor de altura: "; cin>>altura;
			
			volumen=base*altura;
			
			cout<<"\nEl volumen del triangulo es: "<<volumen<<endl; break;
		
		case 3 : 
		    cout<<"\n\tUsted sacara el area del cilindro"<<endl;
			cout<<"\nIngrese el valor del radio: "; cin>>radio;
		    cout<<"Ingrese el valor de altura: "; cin>>altura;
		    
		    area= (2*pi)*radio*(altura+radio);
		    
		    cout<<"\nEl area del cilindro es: "<<area<<endl; break;
		    
		case 4 : 
		    cout<<"\n\tUsted sacara el volumen del cilindro"<<endl;
			cout<<"\nIngrese el valor de radio: "; cin>>radio;
		    cout<<"Ingrese el valor de la altura: "; cin>>altura;
		    
		    volumen=pi*(pow(radio,2))*altura;
		    
		    cout<<"\nEl volumen del cilindro es: "<<volumen<<endl; break;
		    
		case 5 : 
	        cout<<"\n\tUsted sacara el area de la esfera"<<endl;
			cout<<"\nIngrese el valor de radio: "; cin>>radio;
	        
	        area=(4*pi)*(pow(radio,2));
	        
	        cout<<"\nEl area de la esfera es: "<<area<<endl; break;
	        
	    case 6 :
	    	cout<<"\n\tUsted sacara el volumen de la esfera"<<endl;
			cout<<"\nIngrese el valor de radio: "; cin>>radio;
	    	
	    	volumen=(4/3*pi)*(pow(radio,3));
	    	
	    	cout<<"\nEl volumen de la esfera es: "<<volumen<<endl; break;
	    	
	    case 7 :
	    	cout<<"\n\tUsted sacara el area del cono"<<endl;
			cout<<"\nIngrese el valor de radio: "; cin>>radio;
	    	cout<<"Ingrese el valor de la inclinacion: "; cin>>inclinacion;
	    	
	    	area= pi*(pow(radio,2))+pi*radio*inclinacion;
	    	
	    	cout<<"\nEl area del cono es: "<<area<<endl; break;
	    	
		case 8 :
			cout<<"\n\tUsted sacara el volumen del cono"<<endl;
			cout<<"\nIngrese el valor de radio: "; cin>>radio;
			cout<<"Ingrese el valor de la altura: "; cin>>altura;
			
			volumen= (pi*(pow(radio,2))*altura)/3;
			
			cout<<"\nEl volumen del cono es: "<<volumen<<endl; break;
			
		case 9 : 
		    cout<<"\n\tUsted sacara el area del cubo"<<endl;
			cout<<"\nIngrese el valor de altura: "; cin>>altura;
		    
		    area= 6*(pow(altura,2));
		    
		    cout<<"\nEl area del cubo es: "<<area<<endl; break;
		    
		case 10 :
			cout<<"\n\tUsted sacara el volumen del cubo"<<endl;
			cout<<"\nIngrese el valor de altura: "; cin>>altura;
			
			volumen= (pow(altura,3));
			
			cout<<"\nEl volumen del cubo es: "<<volumen<<endl; break;
			
		
		    
	}
	
	}
	else if(hacer==salir) {
		cout<<"\n\tUsted esta SALIENDO del Programa"<<endl;
		
    }
    system("pause");
    return 0;
}
