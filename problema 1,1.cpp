#include "iostream"

using namespace std;

int main()
{    //problema 1.1
     //construya un diagrama de flugo que dado el costo de un articulo vendido y la cantidad 
     //de dinero entraga por el cliente, calcule e imprima el cambio que debe entregar
     
     
     //declaracion de variables 
     float PRECIOPRODUCTO, DEVOLUCION;
     float PAGO;
     
     //entrega de datos 
     
     cout<<"escriba el costo del arculo "<<"endl";
     cin >> PRECIOPRODUCTO;
     
     cout<<"escriba cuanto fue el pago del articulo "<<"endl";
     cin>>PAGO;
     
     //calculo de devolucion
     
     DEVOLUCION= PAGO-PRECIOPRODUCTO;
     
     //se imprime resultados 
     cout<<"el cambio del cliente es " <<DEVOLUCION;
     return 0;
	
}

