#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"digite una vocal: "; cin>>letra;
	
	switch(letra){
		case 'a': //cout<<"\nla letra es una minuscula"; break;
		case 'e': //cout<<"\nla letra es una minuscula"; break;
		case 'i': //cout<<"\nla letra es una minuscula"; break;
		case 'o': //cout<<"\nla letra es una minuscula"; break;
		case 'u': cout<<"\nla vocal es una minuscula"; break;
		case 'A': //cout<<"\nla vocal es una minuscula"; break;
		case 'E': //cout<<//"\nla vocal es una minuscula"; break;
		case 'I': //cout<<//"\nla vocal es una minuscula"; break;
		case 'O': //cout<<//nla vocal es una minuscula"; break;
		case 'U': cout<<"\nla vocal es una MAYUSCULA"; break;
		default : cout<<"\nNo es una vocal"; break;
	}
	
	
	
	return 0;
}
