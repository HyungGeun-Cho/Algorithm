#include <stdio.h>

int main()
{
	
	int n, i, j;
	
	scanf("%d", &n);
	
	int x[n], y[n], c[n], a[n][n];
	
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
		
		c[i]=1;
	}
	
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j]=0;
			a[j][i]=0;
		}		
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				a[i][j]=1;
				a[j][i]=1;
				continue;
			}
			
			if(a[i][j]==1 || a[j][i]==1) continue;
			else{
				a[i][j]=1;
				a[j][i]=1;
			}
			
			if(x[i]<x[j] && y[i]<y[j]) c[i]++;
			else if(x[i]>x[j] && y[i]>y[j]) c[j]++;
			
		}
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ", c[i]);
	}
	

	
	return 0;
	
}