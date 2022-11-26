#include<iostream>

using namespace std;

class grafica{
	private:
		int x, y;
	public:
		punto();
		void setpunto(int,int);
		int getpuntox();
		int getpuntoy();
};
grafica::punto(){
}
void grafica::setpunto(int _x, int _y){
	x=_x;
	y=_y;
}

int grafica::getpuntox(){
	return x;
}
int grafica.getpuntoy(){
	return y;
}

int main(){
	grafica graf;
	
	graf.setpunto(10, 15);
	cout<<graf.getpuntox()<<endl;
	cout<<graf.getpuntoy()<<endl;
	
	
}
