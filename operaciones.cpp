//
//  operaciones.cpp
//
//  Created by Ma. Guadalupe Roque Díaz de León on 26/10/22.
//

#include <iostream>
#include <string>
using namespace std;

void operaNumeros( ){
    //1.  Declararación de variables
    int num1,num2;
    char opcion;
    //2. leer 2 números x teclado
    cin >> num1;
    cin >> num2;


    // 3. Leer opcion - sin mostrar los mensajes
    //cout << "<S> Mostrar la suma de 2 numeros" << endl <<
    //"<R> Mostrar la resta de 2 numeros" << endl <<
    //"<M> Mostrar la multiplicacion de 2 numeros" << endl;
    cin >> opcion;


    // Determinar la opcion elegida y llevar a acabo la operación aritmética, para
    // desplegar el resultado
    // en caso de ser una operación diferente desplegar "opcion incorrecta"
    if (opcion == 'S'){

        cout<< num1 + num2 << endl;
    }
    else if (opcion == 'R'){

        cout << num1 - num2 << endl;
    }
    else if (opcion == 'M'){

        cout << num1 * num2 << endl;
    }
    else{
        cout << "opcion incorrecta" << endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    operaNumeros();

    return 0;
}


