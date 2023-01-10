// 23_01_10_011_Expresiones_Ejercicio_7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    float practica, teorica, participacion, nota_final;

    cout << "Digital la nota de practica:"; cin >> practica;
    cout << "Digital la nota teorica:"; cin >> teorica;
    cout << "Digital la nota de participacion:"; cin >> participacion;

    practica *= 0.30; //practica = practica * 0.30
    teorica *= 0.60;
    participacion *= 0.10;

    nota_final = practica + teorica + participacion; 

    cout << "\nLa media es:" << nota_final << endl;

    return 0;
}