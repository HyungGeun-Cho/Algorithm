#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d\n%d", &a, &b);
	printf("%d\n%d\n%d\n%d",(b%10)*a,(b%100-b%10)*a/10,(b-b%100)*a/100,a*b);
	return 0;
}