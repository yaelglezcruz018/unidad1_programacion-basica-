#include "iostream"
using namespace std;
int main ()
{
	int MAT;
	float PRO,CAL1, CAL2, CAL3, CAL4, CAL5;
	//mensaje de bievenida 
	cout << "hola! Este programa 1.8 promedio calificaciones" << "endl";
	//se pide la MATRICULA DEL ALUMNO
	cout << "por favor ingrese la matricula del alumno:" << "endl";
	//se asigna el primer valor a MAT
	cin >> MAT;
	//se pide la primera calificacion 
	cout << "por favor ingrese la primera calificacion:" << "endl";
	//se asigna el primer valor a CAL1
	cin >> CAL1;
	//se pide la segunda calificacion
	cout << "por favor ingrese la segunda calificacion:" << "endl";
	//se asigna el primer valor a CAL2
	cin >> CAL2;
	//se pide la tercera calificacion 
	cout << "por favor ingrese la tercera calificacion:" << "endl";
	//se asigna el primer valor a CAL3
	cin >> CAL3;
	//se pide la cuarta calificacion
	cout << "por favor ingrese la cuarta calificacion:" << "endl";
	//se asigna el primer valor a CAL4
	cin >> CAL4;
	//se pide la quinta calificacion 
	cout << "por favor ingrese la quinta calificacion:" << "endl";
	//se asigna el primer valor a CAL5
	cin >> CAL5;
	PRO=(CAL1 + CAL2 + CAL3 + CAL4 + CAL5)/5.0;
	//se muestra el resultado.
	printf ("endl el promedio del alumno con matrucula &d es %5.2f endl", MAT,PRO);
	cout << "endl el promedio del alumno con matricula " << MAT <<" es "<<PRO <<"endl";
	return 0;
}
