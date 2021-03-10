#include <stdio.h>
int main()
{
	
	int n, x, a[10000], i;
	
	scanf("%d %d", &n, &x);
	
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<=n; i++)
	{
		if(x>a[i])
		{
			printf("%d ", a[i]);
		}
		
	}
	
	return 0;
}