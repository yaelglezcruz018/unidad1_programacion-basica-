#include "iostream"
using namespace std;
int main ()
{
//mensaje de bienvenida 
cout << "hola! Este programa 1.6 Escribe los datos en orden inverso"<<"\n";
// se declaran los numeros que se sumaran (pueden ser decimales)
int A,B,C,D;
//se pide el primer numero 
cout <<"por favor ingrese el primer valor A: " <<"\n";
//se asigna el primer valor a A 
cin >> A;
// se pide el segundo numero
cout <<"por favor ingrese el segundo valor B: " << "\n";
cin >> B;
//se pide el tercer numero 
cout << "por favor ingrese el tercer valor C: " << "\n";
// se asigna el tercer valor a C 
cin >> C;
//se pide el cuarto valor 
cout<< "por favor ingrese el cuarto valor D: " << "\n";
//se asigna el cuarto valor a D 
cin >> D;
//se muestra el resultado.
cout << D << "," << C << "," << B << "," << A <<"endl";

 return 0;
}
