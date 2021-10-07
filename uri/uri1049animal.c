#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char nome1[20],nome2[20],nome3[20],n1,n2,n3,n4;
	scanf("%s",&nome1);
	scanf("%s",&nome2);
	scanf("%s",&nome3);
	n1=nome1[0];
	n2=nome2[0];
	n3=nome3[0];
	n4=nome3[2];
	if(n1=='v'){
		if(n2=='a'){
			if(n3=='c'){
				printf("aguia\n");
			}else if(n3=='o'){
				printf("pomba\n");
			}
		}else if(n2=='m'){
			if(n3=='o'){
				printf("homem\n");
			}else if(n3=='h'){
				printf("vaca\n");
			}
		}
	}else if(n1=='i'){
		if(n2=='i'){
			if(n4=='m'){
				printf("pulga\n");
			}else if(n4=='r'){
				printf("lagarta\n");
			}
		}else if(n2=='a'){
			if(n3=='h'){
				printf("sanguessuga\n");
			}else if(n3=='o'){
				printf("minhoca\n");
			}
		}
	}
}

