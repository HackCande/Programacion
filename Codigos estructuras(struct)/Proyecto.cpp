#include<iostream>

using namespace std;

class television{
private:
	char apagar1;
    int apagar;
public :
	void teclaoff()const;
	void teclaoff(int apagar, char apagar1)const;
	   	
};

void television::teclaoff()const{
     cout<<"Iniciando"; 
}
void television::teclaoff(int apagar, char apagar1)const{
	void teclaoff=(15,'segundos' );
     cout<<"\nApagando en "<<endl;
}
int main(){
	television tele;
	tele.teclaoff();
	tele.teclaoff();
	
	system("pause");
	return 0;
}
