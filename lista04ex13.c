#include <stdio.h>
#include <stdlib.h>
/*13. Criar um programa que leia um número (N) e então escreva os múltiplos 
de 3 e 5, ao mesmo tempo, no intervalo de 1 a N.*/
main()
{
	int n,c;
	printf("Digite um numero:\n");
	scanf("%i",&n);
	for(c=1;c<=n;c++){
		if(c%5==0&&c%3==0){
			printf("\n%i multiplo de 5 e 3\n",c);
		}
	}
}

