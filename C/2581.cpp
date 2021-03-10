#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, sum=0, min=0, i, j, factor=0;;
	
	scanf("%d %d", &m, &n);
	
	
	for(i=m; i<=n; i++)
	{
		if(i==1) continue;		
		
		factor=1;
		for(j=2; j<=sqrt(n); j++)
		{
			if(i==j) continue;
			
			if(i%j==0)
			{
				factor=0;
				break;
			}			
		}
		if(factor==1)
		{
			if(sum==0) min=i;
			sum=sum+i;			
		}
	}
	
	if(sum!=0)
	{
		printf("%d\n%d", sum, min);
	}
	else printf("-1");
	
	return 0;
	
}