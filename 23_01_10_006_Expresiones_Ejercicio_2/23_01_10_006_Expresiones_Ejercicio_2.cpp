// 23_01_10_006_Expresiones_Ejercicio_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, resultado = 0;

    cout << "Digital el valor de a:"; cin >> a;
    cout << "Digital el valor de b:"; cin >> b;
    cout << "Digital el valor de c:"; cin >> c;
    cout << "Digital el valor de d:"; cin >> d;

    resultado = (a + b)/(c + d);

    cout.precision(2);
    cout << "\nEl resultado es:" << resultado << endl;

    return 0;
}
