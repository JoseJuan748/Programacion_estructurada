// 23_01_09_003_Ejercicio_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle IVA

#include <iostream>

using namespace std;

int main()
{
    float n1;

    cout << "Digite un numero: "; cin >> n1;

    n1 = n1 * 1.16;

    cout << "/nEl precio del producto es:" << n1 << endl;
}