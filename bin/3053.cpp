#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	double r;
	scanf("%lf", &r);
	
	printf("%.6lf\n",r*r*M_PI);
	printf("%.6lf", r*r*2);
	
	return 0;
}