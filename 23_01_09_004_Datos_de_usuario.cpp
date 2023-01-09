// 23_01_09_004_Datos_de_usuario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;

    cout << "Digite su edad: "; cin >> edad;
    cout << "Digite su sexo:"; cin >> sexo;
    cout << "Digite su altura en metros: "; cin >> altura;

    cout << "\nEdad:" << edad << endl;
    cout << "Sexo:" << sexo << endl;
    cout << "Altura en metros:" << altura << endl;

    return 0;
}
