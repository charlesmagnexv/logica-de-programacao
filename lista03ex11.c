#include <stdio.h>
#include <stdlib.h>
/* Construa um programa que efetue o cálculo fatorial dos números 
ímpares situados na faixa de 1 a 10.*/
main()
{
	int cont=1,fato=0,resto=0,contfa=0;
	while(cont<=10){
		resto=cont%2;
		contfa=cont;
		fato=cont;
		if(resto!=0){
			while(contfa>=2){
				contfa--;
				fato=fato*contfa;
			}
			printf("\nFatorial de %i:%i\n",cont,fato);
		}
		cont++;
	}
}

