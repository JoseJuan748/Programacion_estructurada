// 23_01_12_019_Estructuras_Condicionales_Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int numero; 

    cout << "Digite un numero: ";
    cin >> numero;

    if (numero == 0)
    {
        cout << "El numero es 0: ";
    }

    else if (numero%2 == 0)
    {
        cout << "El numero es par ";
    }

    else
    {
        cout << "El numero es impar ";
    }

    return 0;
}