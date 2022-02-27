#include <iostream>

using namespace std;


void Print(string message)
{
    cout << message << endl;
}

int obtenerSuma(int valor1, int valor2)
{
    return valor1 + valor2;
}
int obtenerResta(int valor1, int valor2)
{
    return valor1 - valor2;
}
int obtenerMulti(int valor1, int valor2)
{
    return valor1 * valor2;
}
int obtenerDivi(int valor1, int valor2)
{
    return valor1 / valor2;
}
int main()
{
    int numero1 = 10;
    int numero2  = 5;

    Print ("Calculadora suma");
    int suma = obtenerSuma(numero1 , numero2);
    Print("El resultado de la suma es de:  ");
    cout << suma << endl;

    Print ("Calculadora resta");
    int resta = obtenerResta(numero1 , numero2);
    Print("El resultado de la resta es de:  ");
    cout << resta << endl;

    Print ("Calculadora Multiplicacion");
    int multiplicacion = obtenerMulti(numero1 , numero2);
    Print("El resultado de la multiplicacion es de:  ");
    cout << multiplicacion << endl;

    Print ("Calculadora division");
    int divi = obtenerDivi(numero1 , numero2);
    Print("El resultado de la division es de:  ");
    cout << divi << endl;


    return 0;
}
