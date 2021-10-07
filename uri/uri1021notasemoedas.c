#include <stdio.h>
#include <stdlib.h>

main()
{
	double l;
    int a,b,c,d,e,f,g,h,i,j,k,n;
    scanf("%lf",&l);
    n=l*100;//isto é feito para que não trabalhemos com números decimais de zero, apenas com valores inteiros naturais
    a=n/10000;
    n=n%10000;//por serem dois inteiros o programa não divide o restante(ele para no primeiro zero embaixo da chave),portanto,sobra apenas o 100
    b=n/5000;
    n=n%5000;
    c=n/2000;
    n=n%2000;
    d=n/1000;
    n=n%1000;
    e=n/500;
    n=n%500;
    f=n/200;
    n=n%200;
    g=n/100;
    n=n%100;
    h=n/50;
    n=n%50;
    i=n/25;
    n=n%25;
    j=n/10;
    n=n%10;
    k=n/5;
    n=n%5;
    printf("NOTAS:\n");
	printf("%i nota(s) de R$ 100,00\n",a);
	printf("%i nota(s) de R$ 50,00\n",b);
	printf("%i nota(s) de R$ 20,00\n",c);
	printf("%i nota(s) de R$ 10,00\n",d);
	printf("%i nota(s) de R$ 5,00\n",e);
	printf("%i nota(s) de R$ 2,00\n",f);
	printf("MOEDAS:\n");
	printf("%i moeda(s) de R$ 1.00\n",g);
	printf("%i moeda(s) de R$ 0.50\n",h);
	printf("%i moeda(s) de R$ 0.25\n",i);
	printf("%i moeda(s) de R$ 0.10\n",j);
	printf("%i moeda(s) de R$ 0.05\n",k);
	printf("%i moeda(s) de R$ 0.01\n",n);
}

