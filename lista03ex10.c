#include <stdio.h>
#include <stdlib.h>
/* 10. Construa um programa que efetue o c�lculo fatorial de um n�mero (N) 
que o usu�rio ir� digitar. Exemplo: Fatorial do n�mero 5. 5!=5x4x3x2x1=120. */
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

