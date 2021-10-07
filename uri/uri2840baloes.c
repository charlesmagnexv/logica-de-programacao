#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int r,l;
	double volume,volume2,a;
	scanf("%i %i",&r,&l);
	volume=(1.333333333)*(3.1415*(pow((double)r,3)));
	volume2=floor(volume);
	a=(double)l/volume2;
	printf("%.0lf\n",floor(a));
}

