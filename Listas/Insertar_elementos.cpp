#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *sig;
};

void menu();
void insertar(Nodo *&, int);
void mostrar(Nodo *);
void buscar(Nodo *Lista, int n);
void eliminar(Nodo *&Lista, int n);


Nodo *Lista=NULL;

int main(){
	
	menu();
	
	return 0;
}

void menu(){
	int dato, opcion;
	
	do{
	cout<<"\n\tMenu Principal";
	cout<<"\n1.- Agregar"<<endl;
	cout<<"2.- Mostrar"<<endl;
	cout<<"3.- Buscar"<<endl;
	cout<<"4.- Eliminar"<<endl;
	cout<<"5.- Salir"<<endl;
	
		cout<<"\nIngrese la opcion: "; cin>>opcion;
		switch(opcion){
			case 1:
			system("cls");
			cout<<"Ingrese un numero: "; cin>>dato;
			insertar(Lista, dato);
			 break;
				
			case 2: 
			if(Lista==NULL){
				cout<<"LISTA VACIA"<<endl;
			}else{
			system("cls");
			mostrar(Lista);
		}
			 break;
			
			case 3:
			if(Lista==NULL){
				cout<<"LISTA VACIA"<<endl;
			}else{
			
			system("cls");
			
			cout<<"Ingrese un numero a buscar: "; cin>>dato;
			buscar(Lista, dato); 
			system("pause");
		}
			break;
			
			case 4:
				cout<<"\nIngrese el numero que desea eliminar: "; cin>>dato;
				
				eliminar(Lista, dato);
				break;
			
			case 5:
			system("cls");
			cout<<"\n\tSaliendo del menu principal "<<endl;
			break;
			
			default : 
			system("cls");
			cout<<"\nNo existe esa opcion"<<endl;
			break;
		}
		system("pause");
		system("cls");
	}while(opcion!=5);
	
}

void insertar(Nodo *&Lista, int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=Lista;
	Nodo *aux2=NULL;
	
	while((aux1!=NULL)&&(aux1->dato < n)){
		aux2=aux1;
		aux1=aux1->sig;
	}
	
	if(Lista==aux1){
		Lista=nuevo_nodo;
	}else{
		aux2->sig=nuevo_nodo;
	}
	
	nuevo_nodo->sig=aux1;
}

void mostrar(Nodo *Lista){
	Nodo *actual= new Nodo();
	actual=Lista;
	while(actual!=NULL){
		cout<<actual->dato<<"-> ";
		actual=actual->sig;
 	}
	cout<<endl;
}

void buscar(Nodo *Lista, int n){
	bool band=false;
	Nodo *actual=new Nodo();
	
	actual=Lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			band=true;
		}
		actual=actual->sig;
	}
	
	if(band==true){
		cout<<"Elemento "<<n<<" Si a sido encontrado en la lista"<<endl<<endl;
	}else{
		cout<<"Elemento "<<n<<" No a sido encontrado en la lista"<<endl<<endl;
	}
}

void eliminar(Nodo *&Lista, int n){
	if(Lista!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		
		aux_borrar=Lista;
		
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->sig;
		}
		
		if(aux_borrar==NULL){
			cout<<"\nEl elemento "<<n<<" No ha sido encontrado"<<endl;
		}else if(anterior==NULL){
			Lista=Lista->sig;
			delete aux_borrar;
		}else{
			anterior->sig=aux_borrar->sig;
			delete aux_borrar;
		}
	}
	
}
