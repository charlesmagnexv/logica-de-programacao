#include <stdio.h>
#include <stdlib.h>
/*21. A s�rie de RICCI difere da s�rie de FIBONACCI porque os dois primeiros termos s�o 
fornecidos pelo usu�rio. Os demais termos s�o gerados da mesma forma que a s�rie de FIBONACCI.
Criar um programa que escreva os N primeiros termos da s�rie de RICCI e a soma dos termos impressos.*/
main()
{
	int c,natual,nanterior,nproximo,termo1,termo2,soma=0,n;
	printf("Quantos termos voce quer?:\n");
	scanf("%i",&n);
	n=n-2;
	printf("Digite o primeiro termo:\n");
	scanf("%i",&termo1);
	printf("Digite o segundo termo:\n");
	scanf("%i",&termo2);
	printf("Serie:\n");
	printf("%i\n",termo1);
	printf("%i\n",termo2);
	nanterior=termo1;
	natual=termo2;
	for(c=1;c<=n;c++){
		nproximo=natual+nanterior;
		printf("%i\n",nproximo);
		nanterior=natual;
		natual=nproximo;
		soma+=nproximo;
		nproximo=0;
	}
	printf("Soma dos termos: %i",soma+termo1+termo2);
}

