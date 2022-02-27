#include <iostream>

using namespace std;

int main()

{

int i= 1;
int potencia= 1;

cout <<"Ingrese la base:  ";
int x;
cin >> x;

cout<< "Ingrese el exponente:  ";
int y;
cin >> y;

while (i<= y)
{
    potencia *=x;
    ++i;
}
 cout<< potencia<< endl;

}



