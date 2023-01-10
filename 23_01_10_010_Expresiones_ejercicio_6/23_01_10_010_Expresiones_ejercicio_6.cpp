// 23_01_10_010_Expresiones_ejercicio_6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado;

    cout << "Digital la nota del alumno 1:"; cin >> a;
    cout << "Digital la nota del alumno 2:"; cin >> b;
    cout << "Digital la nota del alumno 3:"; cin >> c;
    cout << "Digital la nota del alumno 4:"; cin >> d;

    resultado = ((a + b + c + d)/4);

    cout << "\nLa media es:" << resultado << endl;

    return 0;
}
