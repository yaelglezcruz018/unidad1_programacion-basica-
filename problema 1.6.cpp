#include "iostream"
using namespace std;

int main ()
{   //problema 1.6. construya u  diagrama de flijo que calcule e imprima el numero de sugundos 
//que hay en un determinado numero de dias.
int DIAS;
float SEGUNDOS;

//entrada de datos 
cout<<"escribe el numero de dias para calcular los segundos "<<"endl";
cin>> DIAS;

//calculo 
SEGUNDOS=DIAS*24*60*60;

//se imprime resultados 
cout<<"en "<<DIAS<<" dias,hay "<<SEGUNDOS<<" segundos"<<"endl";
cin>>DIAS;
return 0;

	
}
