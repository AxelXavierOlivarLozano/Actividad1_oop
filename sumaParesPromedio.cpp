//
//  sumaParesPromedio.cpp
//  Prueba
//
//  Created by Ma. Guadalupe Roque Díaz de León on 26/10/22.
//

#include <iostream>
#include <string>
using namespace std;

// Función que sume todos los números enteros pares entre el 0 y el 100.
int sumaPares( ){
 //1.  Declararación de variables
    int sumaPares = 0;
    for(int i = 0; i<= 100;){
        sumaPares = sumaPares+i;
        i=i+2;
    }
  // retorna la suma de todos los pares
    return sumaPares;
}


// Función que calcula el promedio todos los números enteros pares entre el 0 y el 100.
int promedioPares( ){
  // 1.  Declararación de variables
    double suma = 0;
    int contador = 0;
    for(int i = 0; i<=100; i += 2){
        suma += i;
        contador++;
    }
  // retorna el promedio
    return suma/contador;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    cout << sumaPares( ) << endl;
    cout << promedioPares( ) << endl;

    return 0;
}
