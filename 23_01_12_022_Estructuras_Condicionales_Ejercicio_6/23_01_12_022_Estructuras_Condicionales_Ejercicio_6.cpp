// 23_01_12_022_Estructuras_Condicionales_Ejercicio_6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escriba un programa que lea de la de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocall.

#include <iostream>
using namespace std;

int main()
{

    char letra;

    cout << "Digite un numero: ";
    cin >> letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout << "Es una vocal minuscula "; break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout << "Es una vocal mayuscula "; break;
    default: cout << "No es una vocal "; break;
    }

    return 0;
}