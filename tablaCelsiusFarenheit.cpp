//
//  main.cpp
//  
//
//  Created by Ma. Guadalupe Roque Díaz de León on 26/10/22.
//
/*

El programa deberá solicitar al usuario los siguientes
- Datos de entrada:
• El valor inicial en Celsius.
• El número de conversiones que se harán.
• El incremento entre los valores Celsius (valor entero).

Proceso:
usa la fórmula para convertir de celsius a  farenheit = (9.0/5.0) celsius + 32
 
- Datos de salida debe ser la siguiente tabla con todas las temperaturas en celsius y farenheit: 
 
                       CELSIUS FARENHEIT
                       valor1_c valor1_f
                       .....

                       valorN_c valorN_f

Caso de prueba1:
Datos de entrada:
40
5
20

Datos de salida:
CELSIUS FARENHEIT
40 104
45 113
50 122
55 131
60 140
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int valor_inicial_celsius;
    int numero_conversiones;
    int incremento;

    // Solicita al usuario los datos de entrada
    cout << "Ingrese el valor inicial en Celsius: ";
    cin >> valor_inicial_celsius;

    cout << "Ingrese el número de conversiones que se harán: ";
    cin >> numero_conversiones;

    cout << "Ingrese el incremento entre los valores Celsius (valor entero): ";
    cin >> incremento;

    // Imprime la cabecera de la tabla
    cout << "CELSIUS   FAHRENHEIT" << endl;

    // Realiza las conversiones y muestra la tabla
    for (int cont = 1; i < numero_conversiones; cont++) {
        int celsius = valor_inicial_celsius + i * incremento;
        fahrenheit = (9.0 / 5.0) * valor_inical_celsius + 32;
        cout << valor_inicial_celsius << "         " << fahrenheit << endl;
    }

    return 0;
}
