#include <stdio.h>
#include <stdlib.h>
/*
O fatorial de um n�mero inteiro positivo N, denotado por N!, � definido como o produto dos inteiros positivos
menores do que ou iguais a N. Por exemplo 4! = 4 � 3 � 2 � 1 = 24.
Dado um inteiro positivo N, voc� deve escrever um programa para determinar o menor n�mero k tal que
N = a1! + a2! + . . . + ak!, onde cada ai
, para 1 = i = k, �e um n�mero inteiro positivo.
Por exemplo, para N = 10 a resposta � 3, pois � poss�vel escrever N como a soma de tr�s n�meros fatoriais:
10 = 3! + 2! + 2!. Para N = 25 a resposta � 2, pois � poss�vel escrever N como a soma de dois n�meros fatoriais:
25 = 4! + 1!.
Entrada
A entrada consiste de uma �nica linha que cont�m um inteiro N (1 = N = 10^5
).
Sa�da
Seu programa deve produzir uma �nica linha com um inteiro representando a menor quantidade de n�meros
fatoriais cuja soma � igual ao valor de N.
*/
main(){
	/*//aqui,c�lculo de fatorial
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
	scanf("%i",&n);//li o n�mero N
	fatorial=9;/*farei o fatorial de todos os numeros iguais e menores do que 9, a l�gica se baseia em achar o fatorial menor do que o n�mero N digitado, pois s�
	assim � poss�vel somar os fatoriais.Escolhi 9 porque est� dentro da limita��o do N, como explicado no enunciado*/
	while(soma<=n){//farei esta conta enquanto a soma for menor do que n, que � o n�mero dado
		resultado=1;//para iniciar o c�lculo de fatorial
		for(c=1;c<=fatorial;c++){
			resultado = resultado*c;//fa�o o c�lculo fatorial do n�mero 9, em seguida, do 9 e assim por diante
		}
		fatorial--;//decremento, no pr�ximo loop, isto permite que eu fa�a o fatorial do 8, depois do 7 e assim por diante, at� o fatorial do 1
		if(resultado<=n){//se o resultado � menor do que o n dado
			soma += resultado;//somo o resultado com a vari�vel que guarda a soma, a fim de atingir o valor n dado com os fatoriais
			quantidade++;//o contador de quantas vezes somei o resultado com a vari�vel "soma", � o que me dar� o resultado que o exerc�cio pede
			while(soma<=n){/*(while 02)como � preciso a menor quantidade de n�meros fatoriais para obter o n�mero n dado, tenho de usar o mesmo fatorial se for preciso
			, portanto, farei a soma com o mesmo fatorial enquanto o valor de "soma" for menor que o valor de n, dado no in�cio*/
				soma +=resultado;//fa�o a tal soma com o mesmo fatorial
				quantidade++;//incremento a quantidade de vezes qe somei
			}
			if(soma>n){/*todavia, a soma ocorrer� uma vez mais, pois o la�o while abre espa�o para isto e faz com que s� seja poss�vel sair dele quando soma for maior
			do que n, para evitar problemas mais a frente...*/
				soma -= resultado;//eu subtraio a �ltima soma feita e o �ltimo valor incrementado em "auantidade" no while 02
				quantidade--;
			}
		}
		if(soma==n){//se soma for igual a n, n�o h� por que continuar, portanto, basta dar um comando break, e para a execu��o do c�digo
			break;
		}
		//printf("%i\n",resultado);//exibe o resultado dos fatoriais, s� teve relev�ncia para testes
	}
	printf("%i\n",quantidade);//no fim, exibo o resultado pedido
}

