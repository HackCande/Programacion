
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
 int saldo = 0;
 int tt = 9;
 int valor = 0;

 while ( tt != 0)
 {
  cout << "Tipo de Transacci�n (1=Deposito, 2=Retiro, 0=Salir del Programa): ";
  cin >> tt;
  

  if (tt == 2)
  {
   cout << "\n Valor de Transacci�n: ";
   cin >> valor;
  
   if (valor > saldo)
    cout << "Transacci�n inv�lida. Fondos insuficientes" << endl;
   else
    saldo = saldo - valor;
  }
  else
   if (tt == 1)
   {
    cout << "\n Valor de Transacci�n: ";
    cin >> valor;
    saldo = saldo + valor;
   }
   
   else
    if (tt != 0)
     cout << "Tipo de Transacci�n inv�lido" << endl;
 }

 cout << "Saldo Final: " << saldo << endl;

 system("pause"); 
} 
