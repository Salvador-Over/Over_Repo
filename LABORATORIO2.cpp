#include <iostream>

using namespace std;

int main()

{
    int mate = 0;
    int derecho = 0;
    int progra = 0;
    int admin = 0;
    int calculo = 0;



cout << "Ingrese la nota de matematicas" << endl;
cin >> mate;

if (mate >=8)
{
    cout << "Felicidades, excelente nota" << endl;
}
else
 if(mate==  6)
{
    cout << "Pasó raspado" << endl;
}
else
    if(mate <= 5)
{
     cout << "Curso reprobado" << endl;
}

cout << "Ingrese la nota de derecho" << endl;
cin >> derecho;

if (derecho >=8)
{
    cout << "Felicidades, excelente nota" << endl;
}
else
 if(derecho==  6)
{
    cout << "Pasó raspado" << endl;
}
else
    if(derecho <= 5)
{
     cout << "Curso reprobado" << endl;
}


cout << "Ingrese la nota de programacion" << endl;
cin >> progra;

if (progra >=8)
{
    cout << "Felicidades, excelente nota" << endl;
}
else
 if(progra==  6)
{
    cout << "Pasó raspado" << endl;
}
else
    if(progra <= 5)
{
     cout << "Curso reprobado" << endl;
}


cout << "Ingrese la nota de administracion" << endl;
cin >> admin;

switch(admin)
{
case 10:
    cout << "Nota perfecta" << endl;
    break;

    case 6:
    cout << "Nota media" << endl;
    break;

    case 5:
    cout << "Curso reprobado"<<  endl  ;
    break;
}

cout << "Ingrese la nota de administracion" << endl;
cin >> calculo;


switch(calculo)
{
case 10:
    cout << "Nota perfecta" << endl;
    break;

    case 6:
    cout << "Nota media" << endl;
    break;

    case 5:
    cout << "Curso reprobado"<<  endl  ;
    break;
}












}
