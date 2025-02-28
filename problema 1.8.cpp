#include "iostream"
using namespace std;

int main ()
{   //problema 1.8 construya un diagrama de flijo tal que calcule 
//la distancia entre los puntos, dado como datos las coordenadas 
//de los puntos P1,P2.
//X1,X2,Y1,Y2
//X1,Y1 REPRESENTAN LAS COORDENADAS DEL PUNTO P1 EN EL EJE DE LAS X y Y RESPECTIVAMNETE 
//X1,Y1REPRESENTAN LAS COORDENADAS DEL PUNTO P2 EN EL EJE DE LAS X y Y RESPECTIVAMENTE

float X1,Y1,X2,Y2,DIS;

//entrada de datos
cout <<" escribe las coordenada X del primer punto  "<<" endl ";
cin>> X1;

cout <<"escribe las coordenada Y del primer punto "<<" endl ";
cin >> Y1;

cout <<"escribe la coordenada X del segundo punto "<<" endl";
cin >> X2;

cout<<"escribe la coordenada Y del segundo punto "<<" endl ";
cin >> Y2;

//calculo 
DIS=(((X1 - X2),2) +((Y1 - Y2),2));

//se imprime resultados 
cout<<" La distancia entre el punto  "<<X1<<","<<"y el punto "<<X2<<","<<Y2<<"es "<<DIS<<"endl";
return 0;
	
}
