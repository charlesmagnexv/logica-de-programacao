#include <stdio.h>
#include <stdlib.h>
/*
Jo�o n�o � muito bom em Matem�tica mas aprendeu que a m�dia de dois n�meros � o valor da soma desses
dois n�meros dividido por dois. Ou seja, a m�dia de dois n�meros A e B � M =
A+B
---
 2
.
A professora de C�lculo I contou para Jo�o as notas que ele tirou nas duas provas j� realizadas. As duas
notas s�o n�meros inteiros entre 0 e 100. Jo�o prontamente calculou a m�dia das duas provas, que tamb�m
resultou em um n�mero inteiro.
Mas Jo�o � muito esquecido, e agora n�o consegue lembrar-se das duas notas que tirou na prova. Ele
consegue se lembrar de apenas uma das notas das provas. Por sorte, ele consegue se lembrar tamb�m da m�dia
entre as duas notas.
Voc� pode ajudar Jo�o a determinar a nota da outra prova?
Entrada
A primeira linha cont�m um n�mero inteiro A (0 = A = 100), indicando a nota de uma prova. A segunda
linha cont�m um n�mero inteiro M (0 = M = 100), indicando a m�dia entre as duas notas das provas.
Sa�da
Seu programa deve produzir uma �nica linha com um n�mero inteiro representando a nota da outra prova,
que Jo�o n�o consegue recordar
*/
main(){
	int nota1,media;
	scanf("%i", &nota1);
	scanf("%i", &media);
	printf("%i\n",2*media-nota1);
}

