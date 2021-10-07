#include <stdio.h>
#include <stdlib.h>
/*
Dados como entrada a capacidade C da cabine e o n�umero total A de alunos, voc�e deve escrever
um programa para calcular o n�umero m�inimo de viagens do telef�erico.
Se voc�e estiver com muita pregui�ca hoje, n�ao se preocupe: virando a p�agina voc�e encontra solu�c�oes
para este problema.
Entrada
A primeira linha da entrada cont�em um inteiro C, representando a capacidade da cabine (2 = C =
100). A segunda linha da entrada cont�em um inteiro A, representando o n�umero total de alunos na
turma (1 = A = 1000).
Sa�da
Seu programa deve produzir uma �unica linha com um n�umero inteiro representando o n�umero
m�inimo de viagens do telef�erico para levar todos os alunos at�e o pico da montanha.*/
main(){
	int capacidade,alunos,capacidade2,viagem=0;
	scanf("%i",&capacidade);
	scanf("%i",&alunos);//leitura das entradas
	capacidade--;//preciso tirar o espa�o reservado ao monitor
	if(alunos<=capacidade){//se houverem menos alunos do que a capacidade, ser� uma viagem e se alunos e capacidade forem iguais, tamb�m, uma viagem
		viagem++;
	}else{
		while(alunos>0){
			alunos -=capacidade;//vai subtraindo os alunos at� que sejam menores ou iguais a zero
			viagem++;
		}
	}

	printf("%i\n",viagem);
}

