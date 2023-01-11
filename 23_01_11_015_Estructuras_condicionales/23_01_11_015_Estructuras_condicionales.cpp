// 23_01_11_015_Estructuras_condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5;

    cout << "Digite un numero:"; cin >> numero;

    if(numero <= dato) 
    {
        cout << "El numero es menor o igual a 5:";
    }

    else
    {
        cout << "El numero es mayor a 5:";
    }

    return 0;
}