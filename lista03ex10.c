#include <stdio.h>
#include <stdlib.h>
/* 10. Construa um programa que efetue o cálculo fatorial de um número (N) 
que o usuário irá digitar. Exemplo: Fatorial do número 5. 5!=5x4x3x2x1=120. */
main()
{
	int n,fato,cont;
	printf("Digite um numero:\n");
	scanf("%i",&n);
	cont=n;
	fato=n;
	while(cont>=2){
		cont=cont-1;
		fato=fato*cont;
		printf("%i\n",fato);
	}
	printf("%i!=%i",n,fato);
}

