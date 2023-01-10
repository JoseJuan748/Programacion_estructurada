// 23_01_10_007_Expresiones_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado = 0;

    cout << "Digital el valor de a:"; cin >> a;
    cout << "Digital el valor de b:"; cin >> b;
    cout << "Digital el valor de c:"; cin >> c;
    cout << "Digital el valor de d:"; cin >> d;
    cout << "Digital el valor de e:"; cin >> e;
    cout << "Digital el valor de f:"; cin >> f;

    resultado = (a + (b/c)) / (d + (e/f));

    cout.precision(2);
    cout << "\nEl resultado es:" << resultado << endl;

    return 0;
}