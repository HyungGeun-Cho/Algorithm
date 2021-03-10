#include <stdio.h>

int main()
{
	int n, m, i, j, k, dif=3000000, sum, ans;
	
	scanf("%d %d", &n, &m);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	
	for(i=0; i<n-2; i++)
	{
		for(j=1; j<n-1; j++)
		{
			if(i==j) continue;
			
			for(k=2; k<n; k++)
			{
				if(i==k || j==k) continue;				
				
				sum=a[i]+a[j]+a[k];
				
				if(m-sum<0) continue;
				
				//printf("%d %d %d = %d\n", a[i], a[j], a[k], sum);
				
				if(m-sum<dif)
				{
					dif=m-sum;
					ans=sum;
					//printf("발견!\n");
				}
			}
		}
	}
	
	printf("%d", ans);
	
	return 0;
	
	
}