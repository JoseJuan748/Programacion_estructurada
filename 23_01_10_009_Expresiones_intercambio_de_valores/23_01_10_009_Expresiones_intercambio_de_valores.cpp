// 23_01_10_009_Expresiones_intercambio_de_valores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int x, y, aux;

    cout << "Digital el valor de x:"; cin >> x;
    cout << "Digital el valor de y:"; cin >> y;

    /*
    x = 5
    y = 10
    */

    aux = x;
    x = y;
    y = aux; 

    cout << "\nEl nuevo valor de x es:" << x << endl;
    cout << "\nEl nuevo valor de y es:" << y << endl;

    return 0;
}