// 23_01_12_018_Estructuras_Condicionales_Ejercicio_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escribe un programa que lea tres numeros y determine cual de ellos es el mayor

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Digite 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 == n2 && n1 == n3 && n2 == n3)
    {
        cout << "Todos los numeros son iguales";
    }

    else if (n1 > n2 && n1 > n3)
    {
        cout << "El numero mayor es " << n1;
    }

    else 
    {
        if (n2 > n1 && n2 > n3)
        {
            cout << "El numero mayor es " << n2;
        }

        else 
        {
            cout << "El numero mayor es " << n3;
        }
    }
    return 0;
}