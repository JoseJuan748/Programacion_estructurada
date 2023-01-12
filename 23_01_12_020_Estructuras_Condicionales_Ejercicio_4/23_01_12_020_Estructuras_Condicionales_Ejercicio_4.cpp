// 23_01_12_020_Estructuras_Condicionales_Ejercicio_4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Comprobar si un numero digitado por el usuario es positivo o negativo

#include <iostream>
using namespace std;

int main()
{
    double numero;

    cout << "Digite un numero: ";
    cin >> numero;

    if (numero == 0)
    {
        cout << "El numero es 0: ";
    }

    else if (numero > 0 )
    {
        cout << "El numero es positivo ";
    }

    else
    {
        cout << "El numero es negativo ";
    }

    return 0;
}
