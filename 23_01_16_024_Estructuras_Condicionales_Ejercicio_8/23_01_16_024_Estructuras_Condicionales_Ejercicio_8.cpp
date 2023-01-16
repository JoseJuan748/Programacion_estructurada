// 23_01_16_024_Estructuras_Condicionales_Ejercicio_8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;

    cout << "Digite primer numero: ";
    cin >> n1;
    cout << "Digite segundo numero: ";
    cin >> n2;
    cout << "Digite tercer numero: ";
    cin >> n3;
    cout << "Digite cuarto numero: ";
    cin >> n4;

    //18-19-20-21-22-23-24-25
    if (n1 == n4 && n2 == n4 && n3 == n4)
    {
    std::cout << "Todos los numeros coinciden";
    }

    else if (n1 == n4 && n2 == n4)
    {
        std::cout << "El cuarto numero coincide con el primer y segundo numero";
    }

    else if (n1 == n4 && n3 == n4)
    {
        std::cout << "El cuarto numero coincide con el primer y tercer numero";
    }

    else if (n2 == n4 && n3 == n4)
    {
        std::cout << "El cuarto numero coincide con el segundo y tercer numero";
    }

    else if (n1 == n4)
    {
        std::cout << "El cuarto numero coincide con el primer numero";
    }

    else if (n2 == n4)
    {
        std::cout << "El cuarto numero coincide con el segundo numero";
    }

    else if (n3 == n4)
    {
        std::cout << "El cuarto numero coincide con el tercer numero";
    }

    else 
    {
        std::cout << "El cuarto numero no coincide con ninguno de los numeros introducidos anteriormente";
    }

    return 0;
}