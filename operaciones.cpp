//
//  operaciones.cpp
//
//  Created by Ma. Guadalupe Roque Díaz de León on 26/10/22.
//
#include <iostream>
#include <string>
using namespace std;

void operaNumeros() {
    // 1. Declaración de variables
    int num1, num2;
    char option;

    // 2. Leer 2 números por teclado
    cin >> num1;
    cin >> num2;

    // 3. Leer la opción - sin mostrar los mensajes
    cin >> option;

    // Determinar la opción elegida y llevar a cabo la operación aritmética, para
    // desplegar el resultado
    switch (option) {
        case 'S':
        case 's':
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case 'R':
        case 'r':
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case 'M':
        case 'm':
            cout << "Product: " << num1 * num2 << endl;
            break;
        default:
            cout << "Opción incorrecta." << endl;
    }
}

int main() {
    // Call the function to perform the operations
    operaNumeros();
    return 0;
}

