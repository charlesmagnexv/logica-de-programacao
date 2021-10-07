#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	unsigned long int c,cont,n,subtra,escadinha=0,na=0,subtrant=0,/*resultado da subtração anterior*/cont2=0;
	scanf("%lu",&c);
	for(cont=1;cont<=c;cont++){
		scanf("%lu",&n);
		subtra=n-na;
		if(subtra==subtrant&&cont2<1){
			escadinha++;
			cont2++;
		}
		if(subtra!=subtrant){
			cont2=0;//a escadinha grande acabou e o cont2 foi zerado
		}
		if(cont2==0){
			escadinha++;//para contar o 5 4 por exemplo
			cont2=1;
		}
		na=n;
		subtrant=subtra;//o "na" guardará o numero anterior apenas depois de todos os processos serem feitos,isto garante seu uso correto no próximo laço
	}
	if(escadinha==1){
		printf("1\n");
	}else
	printf("%lu\n",escadinha-1);
}

