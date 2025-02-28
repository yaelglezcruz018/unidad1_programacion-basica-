#include "iostream"
using namespace std;

int main()
{  //problema 1.4 construya un diagrama de flujo que resuelva el problema que tienen en una 
   //gasolinera. los surtidores de la misma registran lo que "surten"en galones, el precio de la gasolina
   //esta fijado en "litros. el programa debe calcular e imprimir lo que hay que cobrarle al cliente.
   //cada galon tiene 3.785,y el precio del litro es 8.20
   //declaracion de variables 
   
   float GALONES, TOTAL;
   const float GALON=3.785, PRECIOLITRO=8.20;
   
   //entreda de datos 
   
   cout<<"escribre cantidad de galones comprados "<<"endl";
   cin >> GALONES;
   
   
   //calculo 
   TOTAL= GALONES*GALON*PRECIOLITRO;
   
   //se imprime resultados
   cout<<"hay que cobrar al cliente por" <<GALONES<<"galones"<<"debe pagar"<<TOTAL<<"pesos"<"endl";
   return 0;
}
