//
//  serie.cpp
//  
//
//  Created by Ma. Guadalupe Roque Díaz de León on 26/10/22.
//
/* una serie aritmetica permite modelar problemasque pueden modelar fenómenos físicos y se define por:

a + (a + d) + (a + 2d) + (a + 3d) + ... + [(a + (n - 1)d]

Donde a es el primer término, d es la "diferencia común" y n es el número de términos que se van a sumar.
Diseña e implementa un programa en c++ que calcule la suma de la serie aritmética.
si se tiene a = 1, d=3 y n = 25

al finalizar la suma el programa debe desplegar la suma total de la serie.

Casos de Prueba:
Datos de entrada:
a
d
n

Dato de salida:
la suma de la serie aritmética anterior.
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
#include <iostream>
    int a, d, n;
    double suma = 0;
    cin >> a;
    cin >> d;
    cin >> n;

    // Calcula la suma de la serie aritmética
    for (int i = 0; i < n; i++) {
        suma += a + i * d;
    }
  cout << "La suma de la serie aritmética es: " << suma << std::endl;

    return 0;
}

