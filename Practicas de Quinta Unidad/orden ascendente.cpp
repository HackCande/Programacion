/*crear un programa que al ingresar tres numeros enteros, devuelvan los numeros ordenados
en forma ascendente y en forma descendente.*/

#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	cout<<"Ingrese otro numero: "; cin>>n2;
	cout<<"Ingrese otro numero: "; cin>>n3;
	
	if((n1>n2)&&(n2>n3)||(n1==n2)&&(n1>n3)||(n1>n2)&&(n2==n3)){
			cout<<"\\tnEl orden descendente es:\n"<<n1<<endl<<n2<<endl<<n3<<endl;
	}else if((n1>n3)&&(n3>n2)||(n1==n3)&&(n1>n2)){
			cout<<"\n\tEl orden descendente es:\n"<<n1<<endl<<n3<<endl<<n2<<endl;
    }else if((n2>n1)&&(n1>n3)||(n2==n1)&&(n1>n3)||(n2>n1)&&(n1==n3)){
		    cout<<"\n\tEl orden ascendente es:\n"<<n2<<endl<<n1<<endl<<n3<<endl;
    }else if((n2>n3)&&(n3>n1)||(n2==n3)&&(n3>n1)){
			cout<<"\n\tEl orden descendente es:\n"<<n2<<endl<<n3<<endl<<n1<<endl;
	}else if((n3>n1)&&(n1>n2)||(n3==n1)&&(n1>n2)){
			cout<<"\n\tEl orden descendente es:\n"<<n3<<endl<<n1<<endl<<n2<<endl;
    }else if((n3>n2)&&(n2>n1)||(n3==n2)&&(n2>n1)||(n3>n2)&&(n2==n1)){
		    cout<<"\n\tEl orden descendente es:\n"<<n3<<endl<<n2<<endl<<n1<<endl;
    }else if((n1==n2)&&(n2==n3)){
			cout<<"\n\tEl orden descendente es:\n"<<n1<<endl<<n2<<endl<<n3<<endl;
}
    
    if((n1>n2)&&(n2>n3)||(n1==n2)&&(n1>n3)||(n1>n2)&&(n2==n3)){
			cout<<"\n\tEl orden ascendente es:\n"<<n3<<endl<<n2<<endl<<n1<<endl<<endl;
	}else if((n1>n3)&&(n3>n2)||(n1==n3)&&(n1>n2)){
			cout<<"\n\tEl orden ascendente es:\n"<<n2<<endl<<n3<<endl<<n1<<endl<<endl;
    }else if((n2>n1)&&(n1>n3)||(n2==n1)&&(n1>n3)||(n2>n1)&&(n1==n3)){
		    cout<<"\n\tEl orden ascendente es:\n"<<n3<<endl<<n1<<endl<<n2<<endl<<endl;
    }else if((n2>n3)&&(n3>n1)||(n2==n3)&&(n3>n1)){
			cout<<"\n\tEl orden ascendente es:\n"<<n1<<endl<<n3<<endl<<n2<<endl<<endl;
	}else if((n3>n1)&&(n1>n2)||(n3==n1)&&(n1>n2)){
			cout<<"\n\tEl orden ascendente es:\n"<<n2<<endl<<n1<<endl<<n3<<endl<<endl;
    }else if((n3>n2)&&(n2>n1)||(n3==n2)&&(n2>n1)||(n3>n2)&&(n2==n1)){
		    cout<<"\n\tEl orden ascendente es:\n"<<n1<<endl<<n2<<endl<<n3<<endl<<endl;
    }else if((n1==n2)&&(n2==n3)){
			cout<<"\n\tEl orden ascendente es:\n"<<n3<<endl<<n2<<endl<<n1<<endl<<endl;
}
	
	system("pause");
	return 0;
}
