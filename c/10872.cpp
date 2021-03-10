#include <stdio.h>


int factorial(int a)
{
	if(a==1 || a==0) return 1;
	else return a*factorial(a-1);
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d", factorial(n));
	
	return 0;
}