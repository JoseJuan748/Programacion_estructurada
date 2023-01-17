// 23_01_17_026_Estructuras_Condicionales_Ejercicio_10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Mostrar los meses del año, pidiendole al usuario un numero entre (1-12), y mostrar el mes al que corresponde 

#include <iostream>

using namespace std;

int main()
{
    int numero, meses;

    cout << "Digite un numero entre (1-12): ";
    cin >> numero;

    meses = numero % 13; numero /= 13; 

    switch (meses)
    {
    case 1: cout << "Enero"; break;
    case 2: cout << "Febrero"; break;
    case 3: cout << "Marzo"; break;
    case 4: cout << "Abril"; break;
    case 5: cout << "Mayo"; break;
    case 6: cout << "Junio"; break;
    case 7: cout << "Julio"; break;
    case 8: cout << "Agosto"; break;
    case 9: cout << "Septiembre"; break;
    case 10: cout << "Octubre"; break;
    case 11: cout << "Noviembre"; break;
    case 12: cout << "Diciembre"; break;
    default: cout << "Ingrese un numero en el rango de (1-12) porfavor";  break;
    }

    return 0;
}