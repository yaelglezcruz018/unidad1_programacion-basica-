#include <iostream>
using namespace std;
int main()
{
  int NUM,CUA,CUB;   //mensaje de bienvenida 
  cout << "hola! este programa 1.9 calcular el cudrado y el cubo de un numero positivo" <<" endl";
  
  //se pide el valor de NUM
  cout <<"por favor ingrese el valor de NUM:"<<"endl";
  //se asigna el valor de A
  cin >>NUM;
  
  //resolvemos la formula del problema 
  CUA=NUM*NUM;
  CUB=NUM*CUA;
  //enviamos el resultado de CUA y CUB a la pantalla
  cout <<"el cuadrado de "<<NUM<< "es:" <<CUA<<" y el cubo es:"<<CUB<<endl;
   return 0;
}
