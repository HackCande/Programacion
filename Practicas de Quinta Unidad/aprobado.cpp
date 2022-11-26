/*despues de ingresar 4 notas, obtener el promedio de las tres mejores notas y el mensaje
aprovado si el promedio es mayor o igual a 11, caso contrario reprovado*/

#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4;
	float promedio;

	cout<<"Ingrese la primera nota: "; cin>>n1;
	cout<<"Ingrese la segunda nota: "; cin>>n2;
	cout<<"Ingrese la tercera nota: "; cin>>n3;
	cout<<"Ingrese la cuarta nota: "; cin>>n4;
	
	if(n1==n2&&n3&&n4){
		promedio=(n1+n2+n3)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprobado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n1>n2)&&(n2>n3)&&(n3>n4)||(n1==n2&&n3)&&(n1>n4)||(n1==n2)&&(n2>n3)&&(n3>n4)||(n1>(n2==n3))&&(n3>n4)||(n1>(n2==n3&&n4))||((n1==n2)>(n3==n4))){
		promedio= (n1+n2+n3)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprovado"<<endl;
		}
	}else if((n1>n3)&&(n1>n2)&&(n2>n4)||(n1==n3&&n2)&&(n1>n4)||(n1==n3)&&(n3>n2)&&(n2>n4)){
		promedio=(n1+n3+n2)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n1>n4)&&(n4>n2)&&(n2>n3)||(n1==n4&&n2)&&(n1>n3)||(n1==n4)&&(n1>n2)&&(n2>n3)){
		promedio=(n1+n4+n2)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n2>n3)&&(n3>n4)&&(n4>n1)||(n2==n3&&n4)&&(n4>n1)||(n2==n3)&&(n2>n4)&&(n4>n1)){
		promedio= (n2+n3+n4)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprovado"<<endl;
		}
	}else if((n2>n4)&&(n4>n1)&&(n1>n3)||(n2==n4&&n1)&&(n1>n3)||(n2==n4)&&(n4>n1)&&(n1>n3)){
		promedio=(n2+n4+n1)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n2>n1)&&(n1>n4)&&(n4>n3)||(n2==n1&&n4)&&(n1>n3)||(n2==n1)&&(n1>n4)&&(n4>n3)){
		promedio=(n2+n1+n4)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n3>n2)&&(n2>n4)&&(n4>n1)||(n3==n2&&n4)&&(n4>n1)||(n3==n2)&&(n2>n4)&&(n4>n1)){
		promedio= (n3+n2+n4)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprovado"<<endl;
		}
	}else if((n3>n4)&&(n4>n1)&&(n1>n2)||(n3==n4&&n1)&&(n1>n3)||(n3==n4)&&(n4>n1)&&(n1>n3)){
		promedio=(n3+n4+n1)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n3>n1)&&(n1>n2)&&(n2>n4)||(n3==n1&&n2)&&(n1>n4)||(n3==n1)&&(n1>n2)&&(n2>n4)){
		promedio=(n3+n1+n2)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n4>n1)&&(n1>n2)&&(n2>n3)||(n4==n1&&n3)&&(n4>n2)||(n4==n1)&&(n1>n3)&&(n3>n2)){
		promedio= (n4+n1+n3)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprovado"<<endl;
		}
	}else if((n4>n2)&&(n2>n3)&&(n3>n1)||(n4==n2&&n3)&&(n3>n1)||(n4==n2)&&(n2>n3)&&(n3>n1)){
		promedio=(n4+n2+n3)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}else if((n4>n3)&&(n3>n1)&&(n1>n2)||(n4==n3&&n1)&&(n1>n2)||(n4==n3)&&(n3>n1)&&(n1>n2)){
		promedio=(n4+n3+n1)/3;
		cout<<"\nEl promedio es: "<<promedio<<endl;
		if(promedio>11){
			cout<<"\nEl alumno esta aprovado"<<endl;
		}else{
			cout<<"\nEl alumno esta reprobado"<<endl;
		}
	}
	
	system("pause");
	return 0;
}
	
