#include <stdio.h>

int main()
{
	
	int m, n;
	long long int i, j, cnt=0;
	
	scanf("%d %d", &m, &n);
	
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
	
	for(i=m; i<=n; i++)
	{
		if(a[i]==true)
		{
			printf("%lld\n", i);
			cnt++;	
		}
	}
	
	return 0;
}