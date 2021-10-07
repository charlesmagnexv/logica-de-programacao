#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	double a,b,c,transfe,bqua,cqua,transfe2;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b&&a>c&&b>c){
		a=a;
		b=b;
		c=c;
	}else if(a>b&&a>c&&c>b){
		a=a;
		transfe=b;
		b=c;
		c=transfe;
	}else if(b>a&&b>c&&a>c){
		transfe=b;
		b=a;
		a=transfe;
	}else if(b>a&&b>c&&c>a){
		transfe=b;
		transfe2=a;
		a=b;
		b=c;
		c=transfe2;
	}else if(c>a&&c>b&&a>b){
		transfe=b;
		transfe2=a;
		a=c;
		b=transfe2;
		c=transfe;
	}else if(c>a&&c>b&&b>a){
		transfe=a;
		a=c;
		c=transfe;
	}else if(a==b&b==a&&c>a&&c>b){
		transfe=c;
		transfe2=a;
		a=c;
		b=b;
		c=transfe2;
	}
	bqua=pow(b,2);
	cqua=pow(c,2);
	if(a>=(b+c)){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if((pow(a,2))==(bqua+cqua)){
		printf("TRIANGULO RETANGULO\n");
	}
	if((pow(a,2))>(bqua+cqua)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if((pow(a,2))<(bqua+cqua)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(a==b&&b==c&&a==c){
		printf("TRIANGULO EQUILATERO\n");
	}
	if(a==b&&b!=c&&a!=c){
		printf("TRIANGULO ISOSCELES\n");
	}
	if(a==c&&b!=c&&a!=b){
		printf("TRIANGULO ISOSCELES\n");
	}
	if(b==c&&b!=a&&c!=a){
		printf("TRIANGULO ISOSCELES\n");
	}
	}
	
}
/*if(a>b&&a>c&&b>c){
		a=a;
		b=b;
		c=c;
	}else if(a>b&&a>c&&c>b){
		a=a;
	}*/
