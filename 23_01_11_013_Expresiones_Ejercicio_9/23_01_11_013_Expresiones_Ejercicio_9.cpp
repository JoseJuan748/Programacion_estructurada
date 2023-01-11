// 23_01_11_013_Expresiones_Ejercicio_9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout << "Digite el valor de x:"; cin >> x;
    cout << "Digita el valor de y:"; cin >> y;

    resultado = (sqrt(x))/(pow(y, 2)-1);

    cout << "\nEl resultado es:" << resultado << endl;

    return 0;
}