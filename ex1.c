#include <stdio.h>

int main(int argc, char argv[])
{
	int a, b ;
	printf("a = ") ;
	scanf("%d",&a);
	printf("\n b = ");
	scanf("%d",&b);

	while(a != b) {
		if (a > b)
			a = a - b ;
		else
			b = b - a ; }


printf("\nPGCD = %d\n",a);
return 0;
} 


