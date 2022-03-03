#include <stdio.h>
#define N 6

main()
{
int v1 [N] = {0, 1, 2, 3, 4, 5};
int v2 [N] = {11, 22, 33, 44, 55, 66};
int x = 0;


for(x=0; x <N; x++)
printf("%d  , ", v1[v1[x]]);

printf("\n");

for(x=0; x <N; x++)
printf("%d ,  ", v2[v1[x]]);
}

//El programa solamente necesitará un diagrama de flujo.
