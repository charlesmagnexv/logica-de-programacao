#include <stdio.h>
#include <stdlib.h>

main()
{
	int tempo,vel;
    float distancia;
    scanf("%i",&tempo);
    scanf("%i",&vel);
    distancia=vel*tempo;
    printf("%.3f\n",distancia/12.0);
}

