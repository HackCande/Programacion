#include <iostream>
#include <cstring>
using namespace std;
 
class cadena {
  public:
   cadena();        // Constructor por defecto
   cadena(const char *c); // Constructor desde cadena c
   cadena(int n);   // Constructor de cadena de n caracteres
   cadena(const cadena &);   // Constructor copia
   ~cadena();       // Destructor

   void Asignar(const char *dest);
   char *Leer(char *c);
 private:
   char *cad;       
// Puntero a char: cadena de caracteres};

