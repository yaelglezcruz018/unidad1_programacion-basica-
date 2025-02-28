#include "iostream"
using namespace std;

int main ()
{  //problema 1.5 construya un diagrama de flujo como datos el radio y la altura
//de un clilindro, calcule e imprima el area y su volumen.

float RADIO, ALTURA, VOLUMEN,AREA;
const float PI=3.141592;

//entrada de datos 
cout<<"escribe la medida del radio "<<"endl";
cin>> RADIO;

cout<< "escribe la medida de la altura"<<"endl";
cin >> ALTURA;


//calculo
VOLUMEN= PI*(RADIO*RADIO)*ALTURA;
AREA=2*PI*RADIO*ALTURA;

//se imprime resultados 
cout<<"el volumen del cilindro es "<<VOLUMEN<<"endl";
cout<<"el area del cilindro es" <<AREA<<"endl";
return 0;
}
	
