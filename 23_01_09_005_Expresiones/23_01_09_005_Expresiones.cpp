// 23_01_09_005_Expresiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    float a, b, resultado = 0;

    cout << "Digital el valor de a:"; cin >> a;
    cout << "Digital el valor de b:"; cin >> b;

    resultado = (a / b) + 1;

    cout << "/nEl resultado es:" << resultado << endl;

    return 0;
}
