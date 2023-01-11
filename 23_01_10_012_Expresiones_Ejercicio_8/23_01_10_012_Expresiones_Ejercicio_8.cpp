// 23_01_10_012_Expresiones_Ejercicio_8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida 

#include <iostream>

using namespace std;

int main()
{
    float c1, c2, hipotenusa;

    cout << "Digita cateto 1:"; cin >> c1;
    cout << "Digita cateto 2:"; cin >> c2;

    hipotenusa = c1*c1 + c2*c2;

    cout << "\nLa hipotenusa es:" << hipotenusa << endl;

    return 0;
}