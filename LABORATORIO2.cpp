#include <iostream>

using namespace std;

int main()

{
    int mate = 0;
    int derecho = 0;
    int progra = 0;
    int admin = 0;
    int calculo = 0;
    int clase;

cout << "Ingrese un numero para elegir el curso deseado\n";
    cout << "1- matematicas \n";
    cout << "2- derecho informatico \n";
    cout << "3- programacion \n";
    cout << "4- administracion \n";
    cout << "5- calculo \n";
    cin >> clase;

    switch(clase)

    {
    case 1:
        cout << "--Usted ha elegido matematicas-- \n";
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
cout <<    endl;
return main();

    case 2:

cout << "--Usted ha elegido derecho informatico--\n";
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

cout <<    endl;
return main();
    case 3:

cout << "--Usted ha elegido Programacion--\n";
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
cout <<    endl;
return main();

    case 4:

cout << "--Usted ha elegido Administracion de empresas--\n";
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
cout <<    endl;
return main();

    case 5:

cout << "--Usted ha elegido calculo--\n";
cout << "Ingrese la nota de calculo" << endl;
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
cout <<    endl;
return main();



}









}
