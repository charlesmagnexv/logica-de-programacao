#include <stdio.h>
#include <stdlib.h>
/*
O fatorial de um número inteiro positivo N, denotado por N!, é definido como o produto dos inteiros positivos
menores do que ou iguais a N. Por exemplo 4! = 4 × 3 × 2 × 1 = 24.
Dado um inteiro positivo N, você deve escrever um programa para determinar o menor número k tal que
N = a1! + a2! + . . . + ak!, onde cada ai
, para 1 = i = k, ´e um número inteiro positivo.
Por exemplo, para N = 10 a resposta é 3, pois é possível escrever N como a soma de três números fatoriais:
10 = 3! + 2! + 2!. Para N = 25 a resposta é 2, pois é possível escrever N como a soma de dois números fatoriais:
25 = 4! + 1!.
Entrada
A entrada consiste de uma única linha que contém um inteiro N (1 = N = 10^5
).
Saída
Seu programa deve produzir uma única linha com um inteiro representando a menor quantidade de números
fatoriais cuja soma é igual ao valor de N.
*/
main(){
	/*//aqui,cálculo de fatorial
	int entrada,saida,fatorial,resultado,c;
	scanf("%i",&fatorial);
	resultado=1;
	if(fatorial==0){
		resultado=1;
	}else{
		for(c=1;c<=fatorial;c++){
			
			resultado = resultado*c;
			//printf("%i\n",resultado);
		}
	}
	printf("%i\n",resultado);*/
	int n,soma,fatorial,resultado,c,quantidade=0,resultado2;
	scanf("%i",&n);//li o número N
	fatorial=9;/*farei o fatorial de todos os numeros iguais e menores do que 9, a lógica se baseia em achar o fatorial menor do que o número N digitado, pois só
	assim é possível somar os fatoriais.Escolhi 9 porque está dentro da limitação do N, como explicado no enunciado*/
	while(soma<=n){//farei esta conta enquanto a soma for menor do que n, que é o número dado
		resultado=1;//para iniciar o cálculo de fatorial
		for(c=1;c<=fatorial;c++){
			resultado = resultado*c;//faço o cálculo fatorial do número 9, em seguida, do 9 e assim por diante
		}
		fatorial--;//decremento, no próximo loop, isto permite que eu faça o fatorial do 8, depois do 7 e assim por diante, até o fatorial do 1
		if(resultado<=n){//se o resultado é menor do que o n dado
			soma += resultado;//somo o resultado com a variável que guarda a soma, a fim de atingir o valor n dado com os fatoriais
			quantidade++;//o contador de quantas vezes somei o resultado com a variável "soma", é o que me dará o resultado que o exercício pede
			while(soma<=n){/*(while 02)como é preciso a menor quantidade de números fatoriais para obter o número n dado, tenho de usar o mesmo fatorial se for preciso
			, portanto, farei a soma com o mesmo fatorial enquanto o valor de "soma" for menor que o valor de n, dado no início*/
				soma +=resultado;//faço a tal soma com o mesmo fatorial
				quantidade++;//incremento a quantidade de vezes qe somei
			}
			if(soma>n){/*todavia, a soma ocorrerá uma vez mais, pois o laço while abre espaço para isto e faz com que só seja possível sair dele quando soma for maior
			do que n, para evitar problemas mais a frente...*/
				soma -= resultado;//eu subtraio a última soma feita e o último valor incrementado em "auantidade" no while 02
				quantidade--;
			}
		}
		if(soma==n){//se soma for igual a n, não há por que continuar, portanto, basta dar um comando break, e para a execução do código
			break;
		}
		//printf("%i\n",resultado);//exibe o resultado dos fatoriais, só teve relevância para testes
	}
	printf("%i\n",quantidade);//no fim, exibo o resultado pedido
}

