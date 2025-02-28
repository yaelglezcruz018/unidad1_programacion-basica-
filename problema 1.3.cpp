#include "iostream"
using namespace std;

int main()
{   //problema 1.3 Escribe un programa tal que dado como datos, nombre del dinosaurio 
   //su peso y su longuitud, expresado estos ultimos en libras y pies respectivamente
   //escriba el nombre del dinosaurio,su peso expresado en kilogramos y la longitud expresada en metros
   
   //declarcion de variables 
   string NOMBRE;
   float PESOLIBRAS, LONGITUDENPIES;
   float PESOENKILOS, LONGITUDENMETROS;
   
   //entrada de datos
   
   cout<<" esbribe el nombre del dinosaurio "<<"endl";
   cin >>NOMBRE;
   
   cout<<"escribe el peso del dinosaurioen libras "<<"endl";
   cin>>PESOLIBRAS;
   
   
   cout<<"escribe la longitud del dinosaurio en pies "<<"endl";
   cin>>LONGITUDENPIES;
   
   
   //calculo
   PESOENKILOS=PESOLIBRAS*1000;
   LONGITUDENMETROS=LONGITUDENPIES*0.3047;
   
   
   //se imprime resultados 
   cout<<" el peso en kilos del dinosaurio "<<NOMBRE<< "es" <<PESOENKILOS<<" y la longitud en metros es" <<LONGITUDENMETROS<<"endl";
   return 0;
}


