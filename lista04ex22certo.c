#include <stdio.h>
#include <stdlib.h>

main()
{
	srand(time(NULL));
	int c,n,na=0,qr,mar=0,nr=0;
	for(c=1;c<=30;c++){
		n=rand()%5+1;//vai gerar os números aleatórios
		printf("%i  ",n);//o número aleatório será "n"
		if(n!=na){//preciso comparar o número anterior com o atual para saber se a sequência continua
			qr=1;//caso não continue deixo-a igual a 1
		}else{
			qr++;//caso contrário eu somo ao qr(quantidade de repetição)
		}
		if(qr>mar){//vejo se o qr que tenho até agora é o maior da sequência
			mar=qr;//caso seja eu o transformo na sequência maior, da próxima vez a sequência será comparada com tal mr
			nr=n;//caso a sequeência seja a maior o nr guarda o número atual do laço, pois este número que é o responsável por tal sequência
		}
		na=n;//transformo em número anterior o número atual para fazer o teste lógico no começo da próxima repetição
	}
	printf("\n\nNumero mais se repete:  %i",nr);
	printf("\n\nQuantidade de vezes:  %i",mar);
}

