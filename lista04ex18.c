#include <stdio.h>
#include <stdlib.h>
/*18. Escreva um programa que leia 15 pares de valores a,
 b, todos inteiros e positivos, um par de cada vez, e com a < b, escreve os inteiros de a até b.*/
main()
{
	int c,a,b,v;
	for(c=1;c<=15;c++){
		printf("\n\nEscreva o numero 'a':\n");
		scanf("%i",&a);
		printf("\nEscreva o numero 'b'(deve ser maior do que a):\n");
		scanf("%i",&b);
		if(a<b){
			printf("numeros de a ate b:\n");
			for(v=a;v<=b;v++){
				printf(" %i ",v);
			}
		}
	}
}

