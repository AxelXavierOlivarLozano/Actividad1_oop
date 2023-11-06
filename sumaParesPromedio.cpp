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
int suma = 0;

    for (int i = 0; i <= 100; i += 2) {
        suma += i;
    }

  // retorna la suma de todos los pares
    return suma ;
}


// Función que calcula el promedio todos los números enteros pares entre el 0 y el 100.
int promedioPares( ){
  // 1.  Declararación de variables
   int suma = sumaPares();
    int cantidadPares = 51; 
    int promedio = suma / cantidadPares;

  // retorna el promedio
    return promedio ;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "Suma de todos los números pares entre 0 y 100" << sumaPares( ) << endl;
    cout <<"Promedio de todos los números pares entre 0 y 100:" << promedioPares( ) << endl;
    
    return 0;
}
