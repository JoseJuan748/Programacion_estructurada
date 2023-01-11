// 23_01_11_014_Expresiones_Ejercicio_10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escribe un programa que calcule las soluciones de una ecuacion de segundo grado de la formacion ax^2 + bx + c = 0

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, x1, x2;

    cout << "Digite el valor de a:"; cin >> a;
    cout << "Digita el valor de b:"; cin >> b;
    cout << "Digita el valor de c:"; cin >> c;

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "\nEl resultado de x1 es:" << x1 << endl;
    cout << "\nEl resultado de x2 es:" << x2 << endl;


    return 0;
}
