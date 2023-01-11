// 23_01_11_017_Estructuras_Condicionales_Ejercicio_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Digite 2 numero: ";
    cin >> n1 >> n2;

    if (n1==n2)
    {
        cout << "Ambos numeros son iguales" ;
    }

    else if(n1 > n2)
    {
        cout << "El mayor es " << n1;
    }

    else
    {
        cout << "El mayor es " << n2;
    }

    return 0;
}