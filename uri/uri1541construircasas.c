#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int lado1,lado2,porcentagem,total,x;
	float res;
	while(1){
		scanf("%i",&lado1);
		if(lado1==0) break;//caso o valor seja 0, eu paro o programa
		else{
			scanf("%i %i",&lado2,&porcentagem);//leio o primeiro valor para ver se será 0, se for, o programa para
			total= lado1*lado2;//acho os metros quadrados
			x=(total*100)/porcentagem;//de acordo com a procentagem, acho o tamanho máximo do terreno para que se use o tamanho do "total"
			
			res=sqrt(x);//como o tamanho total foi dado em metros quadrados, agora basta eu calcular a raíz a fim de achar o tamanho dos lados
			printf("%i\n",(int)res);//printo o resultado
		}
		
		
	}
}

