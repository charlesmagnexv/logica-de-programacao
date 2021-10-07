#include <stdio.h>
#include <stdlib.h>
/*
João não é muito bom em Matemática mas aprendeu que a média de dois números é o valor da soma desses
dois números dividido por dois. Ou seja, a média de dois números A e B é M =
A+B
---
 2
.
A professora de Cálculo I contou para João as notas que ele tirou nas duas provas já realizadas. As duas
notas são números inteiros entre 0 e 100. João prontamente calculou a média das duas provas, que também
resultou em um número inteiro.
Mas João é muito esquecido, e agora não consegue lembrar-se das duas notas que tirou na prova. Ele
consegue se lembrar de apenas uma das notas das provas. Por sorte, ele consegue se lembrar também da média
entre as duas notas.
Você pode ajudar João a determinar a nota da outra prova?
Entrada
A primeira linha contém um número inteiro A (0 = A = 100), indicando a nota de uma prova. A segunda
linha contém um número inteiro M (0 = M = 100), indicando a média entre as duas notas das provas.
Saída
Seu programa deve produzir uma única linha com um número inteiro representando a nota da outra prova,
que João não consegue recordar
*/
main(){
	int nota1,media;
	scanf("%i", &nota1);
	scanf("%i", &media);
	printf("%i\n",2*media-nota1);
}

