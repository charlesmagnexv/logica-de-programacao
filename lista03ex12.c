#include <stdio.h>
#include <stdlib.h>
/* 12. Escreva um programa que leia um número n, que indica quantos valores devem ser lidos a seguir. 
Para cada número lido, mostre o fatorial deste valor.*/
main()
{
	int n,nl=0,cont=1,fato=0,contfato=0;
	printf("Digite quantos numeros devem ser lidos a seguir:\n");
	scanf("%i",&n);
	while(cont<=n){
		printf("Digite o numero:\n");
		scanf("%i",&nl);
		fato=nl;
		contfato=nl;
		while(contfato>=2){
			contfato--;
			fato=fato*contfato;
		}
		printf("Fatorial de %i:%i\n",nl,fato);
		cont++;
	}
}

