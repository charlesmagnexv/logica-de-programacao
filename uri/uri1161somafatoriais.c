#include <stdio.h>
#include <stdlib.h>
/*Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e escreva a soma 
dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada, pois cálculo pode 
resultar em um valor com mais de 15 dígitos. */
main()
{
	long long int a,b,fatorialA,fatorialB;
	int cont_fato,cont_fatoB;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		fatorialA=1;
		fatorialB=1;
		for(cont_fato=a;cont_fato>0;cont_fato--){
		fatorialA=fatorialA*a;
		a--;
		}
		for(cont_fatoB=b;cont_fatoB>0;cont_fatoB--){
		fatorialB=fatorialB*b;
		b--;
		}
		printf("%lld\n",fatorialA+fatorialB);
	}
}

