#include <stdio.h>
#include <stdlib.h>

main()
{
	srand(time(NULL));
	int c,n,na=0,qr,mar=0,nr=0;
	for(c=1;c<=30;c++){
		n=rand()%5+1;//vai gerar os n�meros aleat�rios
		printf("%i  ",n);//o n�mero aleat�rio ser� "n"
		if(n!=na){//preciso comparar o n�mero anterior com o atual para saber se a sequ�ncia continua
			qr=1;//caso n�o continue deixo-a igual a 1
		}else{
			qr++;//caso contr�rio eu somo ao qr(quantidade de repeti��o)
		}
		if(qr>mar){//vejo se o qr que tenho at� agora � o maior da sequ�ncia
			mar=qr;//caso seja eu o transformo na sequ�ncia maior, da pr�xima vez a sequ�ncia ser� comparada com tal mr
			nr=n;//caso a seque�ncia seja a maior o nr guarda o n�mero atual do la�o, pois este n�mero que � o respons�vel por tal sequ�ncia
		}
		na=n;//transformo em n�mero anterior o n�mero atual para fazer o teste l�gico no come�o da pr�xima repeti��o
	}
	printf("\n\nNumero mais se repete:  %i",nr);
	printf("\n\nQuantidade de vezes:  %i",mar);
}

