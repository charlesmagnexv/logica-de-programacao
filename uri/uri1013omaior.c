#include <stdio.h>
#include <stdlib.h>

main()
{
	int a,b,c,maior_a_b,maior_c;
	scanf("%i %i %i",&a,&b,&c);
	maior_a_b=(a+b+abs(a-b))/2;
	maior_c=(maior_a_b+c+abs(maior_a_b-c))/2;
	printf("%i eh o maior\n",maior_c);
}

