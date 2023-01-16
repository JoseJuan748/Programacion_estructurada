// 23_01_16_023_Estructuras_Condicionales_Ejercicio_7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escriba un programa que solicite una edad edad e indique en la salida estandar si la edad introducida esta en el rango [18-25]

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Dime tu edad: ";
    cin >> edad;

    //18-19-20-21-22-23-24-25
    if ((edad>=18) && (edad<=25))
    {
        std::cout << "Su edad esta en el rango de [18-25]";
    }
    else
    {
        std::cout << "Su edad no esta en dicho rango";
    }

    return 0;
}

