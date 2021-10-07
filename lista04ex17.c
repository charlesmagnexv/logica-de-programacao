#include <stdio.h>
#include <stdlib.h>
/* 17. Faça um programa que leia as três notas de 50 alunos de uma turma. Para cada aluno, 
calcule a média aritmética. O programa deverá ler as notas, e informar qual foi a média final 
de cada aluno.*/
main()
{
	int c,nota1,nota2,nota3;
	float total=0;
	for(c=1;c<=5;c++){
		total=0;
		printf("\nNotas do aluno %i\n",c);
		printf("Digite a nota 1:\n");
		scanf("%i",&nota1);
		printf("Digite a nota 2:\n");
		scanf("%i",&nota2);
		printf("Digite a nota 3:\n");
		scanf("%i",&nota3);
		total=nota1+nota2+nota3;
		printf("\nA media do aluno %i e: %.2f\n",c,total/3);
	}
}

