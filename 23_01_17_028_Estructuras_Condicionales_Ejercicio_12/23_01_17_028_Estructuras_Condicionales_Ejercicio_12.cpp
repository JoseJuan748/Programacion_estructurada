// 23_01_17_028_Estructuras_Condicionales_Ejercicio_12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Hacer un menu que considere las siguientes opciones: Caso 1: Cubo de un numero, Caso 2: Numero par o impar, Caso 3: Salir

#include <iostream>

using namespace std;

int main()
{
    int num, num2, opc;

    cout << "Bienvenido a la calculadora: " << endl;
    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "Digite un numero: ";
        cin >> num;
        num2 = num * num * num;
        cout << "El resultado es: " << num2; break;

    case 2:
        cout << "Digite un numero: ";
        cin >> num;

        if (num / 2 == 0)
        {
            cout << "El numero es par"; 
        }

        else (num / 2 == 1);
        {
            cout << "El numero es impar"; break;
        }

    case 3: cout << "Vuelva pronto"; break;

    }

    return 0;
}

