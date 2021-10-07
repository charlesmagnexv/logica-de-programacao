#include <stdio.h>
#include <stdlib.h>
/*20. Em uma lanchonete de uma pacata cidade, foi realizada uma pesquisa entre os consumidores 
do estabelecimento. As pessoas tinham que responder a duas perguntas: sexo (1 – Masculino e 
2 – Feminino) e sua opinião em relação ao cardápio da lanchonete (1 – Ótimo, 2 – Bom, 3 – 
Regular, 4 – Ruim). A pesquisa foi realizada com 40 pessoas. O programa deverá apresentar os 
seguintes dados: • % de ótimo e bom (agrupadas); • % de regular e ruim (agrupadas); • % do sexo 
masculino e feminino; • quantidade de pessoas do sexo masculino que responderam “Ótimo”*/
main()
{
	int c,opiniao;
	char se;
	float totalbom=0,totalruim=0,totalhomem=0,totalmulher=0,totalhomemotimo=0,total=0;
	for(c=1;c<=4;c++){
		printf("\nDigite teu sexo(m/h):");
		scanf(" %s",&se);
		printf("\nDigite tua opiniao(1-otimo,2-bom,3-regular,4-ruim):");
		scanf("%i",&opiniao);
		if(se=='h'||se=='H'){
			totalhomem++;
			if(opiniao==1){
				totalhomemotimo++;
			}
		}else if(se=='m'||se=='M'){
			totalmulher++;
		}
		
		if(opiniao==1||opiniao==2){
			totalbom++;
		}else if(opiniao==3||opiniao==4){
			totalruim++;
		}
		total++;
	}
	printf("\nTotal de bons e otimos:%.2f",(totalbom*100)/total);
	printf("\nTotal de regulares e ruins:%.2f",(totalruim*100)/total);
	printf("\nTotal do sexo masculino:%.2f",(totalhomem*100)/total);
	printf("\nTotal do sexo feminino:%.2f",(totalmulher*100)/total);
	printf("\nTotal de homens que responderam otimo:%.2f",(totalhomemotimo*100)/totalhomem);
}
