// 23_01_12_021_Estructuras_Condicionales_Ejercicio_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

    char letra;

    cout << "Digite un numero: ";
    cin >> letra;

    switch (letra)
    {
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' : cout << "Es una vocal minuscula "; break;
    default: cout << "No es una vocal minuscula"; break;
    }

    return 0;
}