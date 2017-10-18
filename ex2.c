
#include <stdio.h>

int main(int argc, char argv[])
{
int a,res,i;
scanf("%d",&a);

for( i = 1; i >= a; i += 2)
{ res += i;
}

printf (" la somme est égale à %d ", res);

return 0;
} 

