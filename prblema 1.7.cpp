#include "iostream"
using namespace std;

int main()
{    //problema 1.7 construya un diagrama de flujo tal que dado como datos de los tres lados de un triangulo altura
//pueda determinar su area.
//L1,L2,L3 representan los tres lados del triangulo

float L1,L2,L3,S,AREA;
const float PI=3.141592;

//entrada de datos 
cout<<"escribe la medida del lado uno del triangulo"<<"endl";
cin>>L1;

cout <<"escribe la medida del segundo lado del triangulo"<<"endl";
cin>>L2;

cout <<"escribe la medida del tercer lado del triangulo"<<"endl";
cin>>L3;

//calculo
S=(L1+L2+L3)/2;
AREA=(S*(S-L1)*(S-L2)*(S-L3));

//se imprime resultados
cout<<" el area del triangulo "<<AREA<<"endl";

return 0;
	
}
