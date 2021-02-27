#include <stdio.h>

int main()
{
	
	int n, temp, i, j, t, ans, d;
	
	n=10000;
	bool a[n+1]={true,};
	
	for(i=2; i<=n; i++)
	{
		a[i]=true;
	}
	
	a[1]=false;
	
	for(i=2; i*i<=n; i++)
	{
		
		if(a[i]==false) continue; 
		
		for(j=i*i; j<=n; j++)
		{
			if(i==j) continue;
			
			if(j%i==0)
			{
				a[j]=false;
			}
		}
	}
	
	scanf("%d", &t);
	
	for(i=1; i<=t; i++)
	{
		scanf("%d", &temp);
		
		d=10000;
	
		for(j=2; j<=temp/2; j++)
		{
			if(a[j]==true)
			{
				if(a[temp-j]==true)
				{
					if(d>temp-j*2) ans=j;
				}
			}
		}
		
		printf("%d %d\n", ans, temp-ans);
	}
	
	
	return 0;
}