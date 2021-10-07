#include <stdio.h>
#include <stdlib.h>

main()
{
	int valor,nota100,nota50,nota20,nota10,nota5,nota2,nota1,valorlido;
	float resto;
	scanf("%i",&valor);
	valorlido=valor;
	
	nota100=valor/100;
	if(nota100>0){
		valor=valor-(100*nota100);
	}
	nota50=valor/50;
	if(nota50>0){
		valor=valor-(50*nota50);
	}
	nota20=valor/20;
	if(nota20>0){
		valor=valor-(20*nota20);
	}
	nota10=valor/10;
	if(nota10>0){
		valor=valor-(10*nota10);
	}
	nota5=valor/5;
	if(nota5>0){
		valor=valor-(5*nota5);
	}
	nota2=valor/2;
	if(nota2>0){
		valor=valor-(2*nota2);
	}
	nota1=valor/1;
	
	printf("%i\n",valorlido);
	printf("%i nota(s) de R$ 100,00\n",nota100);
	printf("%i nota(s) de R$ 50,00\n",nota50);
	printf("%i nota(s) de R$ 20,00\n",nota20);
	printf("%i nota(s) de R$ 10,00\n",nota10);
	printf("%i nota(s) de R$ 5,00\n",nota5);
	printf("%i nota(s) de R$ 2,00\n",nota2);
	printf("%i nota(s) de R$ 1,00\n",nota1);
}

