#include <stdio.h>
int main()
{
	int a, b, c, n, i, d[10]={0,};
	
	char m[10];
	
	scanf("%d\n%d\n%d", &a, &b, &c);
	
	
	n=a*b*c;
	
	sprintf(m, "%d", n);	
	
	
	for(i=0; i<=9; i++)
	{
		d[m[i]-48]++;		
	}
	
	for(i=0; i<=9; i++)
	{
		printf("%d\n", d[i]);
	}
	
	
	
	
	return 0;	
	
}