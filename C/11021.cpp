#include <stdio.h>
int main()
{
	int n, a, b, i, c[1000];
	scanf("%d", &n);
	
	
	
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &a, &b);
		
		c[i-1]=a+b;
		
		
	}
	
	for(i=1; i<=n; i++)
	{
		printf("Case #%d: %d\n",i, c[i-1]);		
		
	}
	
	return 0;
}