#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
int numero;

do{
    cout<< "Ingrese un numero: "; cin>>numero;
}while ((numero<1)||(numero>1000));

for(int i=1;i<=5;i++){
    cout<<numero<<"*"<<i<<"="<<numero*i<<endl ;

}
 cout<< "\t\t";
 return main();
}



