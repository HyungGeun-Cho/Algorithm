#include <stdio.h>
int main()
{
	int n, a[1000], b[1000], i, c[1000];
	scanf("%d", &n);
	
	
	
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &a[i-1], &b[i-1]);
		
		c[i-1]=a[i-1]+b[i-1];
		
		
	}
	
	for(i=1; i<=n; i++)
	{
		printf("Case #%d: %d + %d = %d\n",i, a[i-1],b[i-1],c[i-1]);		
		
	}
	
	return 0;
}