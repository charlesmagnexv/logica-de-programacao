#include <stdio.h>
#include <stdlib.h>
/*15. Fa�a um programa que escreva os n�meros primos entre 92 e 1478.*/
main()
{
	int s=92,c,quant;//n�meros,divisores dos n�meros,quantidade de divisores
	while(s<=1478){
		c=1;
		quant=0;
		while(c<=s){
			if(s%c==0){
				quant++;
			}
			c++;
		}
		if(quant==2){
			printf("Primo:%i\n",s);
		}
		s++;
	}
}
