#include "iostream"
using namespace std; 

int main ()
{
	float ALTURA,BASE;
	float SUPERFICIE, PERIMETRO;
	//menaje de bienvenida 
	cout << "hola! Este programa 1.10 calcula la superficie y el perimetro de un rectangulo" << "endl";
	
	//se declaran los numeros que se sumaran (pueden ser decimales)
	
	//se pide el primer numero 
	cout << "por favor ingrese el valor de la base: " << "endl";
	//se asigna el primer valor a base
	cin >> BASE;
	//se pide el segundo numero 
	cout << "por favor ingrese el valor de la altura: " << "endl";
	//se asigna el segundo valor a altura 
	cin >> ALTURA;
	
	SUPERFICIE= BASE*ALTURA;
	PERIMETRO=2*(BASE*ALTURA);
	
	//se muestra el resultado.
	printf ("endl La superficie del rectangulo es %5.2f endl", SUPERFICIE);
	printf ("endl El perimetro del rectangulo es es %5.2f endl"),PERIMETRO;
	return 0;
	
}
