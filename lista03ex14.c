#include <stdio.h>
#include <stdlib.h>
/* 14. Construa um programa que gere a sequencia de números perfeitos entre 1 e 800. 
Um número perfeito é aquele que é igual a soma dos seus divisores. 
(Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).*/
main()
{
	int cont=2/*numeros entre 2 e 800*/,resto=0,total=0,contd=1;
	while(cont<=800){
		while(contd<cont){
			resto=cont%contd;
			if(resto==0){
			total=total+contd;
		}
		contd++;
		}
			if(total==cont){
				printf("%i\n",total);
			}
		resto=0;
		total=0;
		contd=1;
		cont++;
	}
}

