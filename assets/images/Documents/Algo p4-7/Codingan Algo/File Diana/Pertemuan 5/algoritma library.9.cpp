#include <stdio.h>
#include <math.h>
main (){
	double f,g,h,i;
	f=89.584;
	h=23.505;
	i=f-h;
	g=trunc(i);
	printf("hasil pengurangan=%f\n",i);
	printf("hasil trunc(pembulatan)=%1f",g);
}
