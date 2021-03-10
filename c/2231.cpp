#include <stdio.h>

int main()
{
	int n, i, j, cnt=0, start, sum=0, ans=0;
	
	scanf("%d", &n);
	
	for(i=n; i; i/=10)
	{
		cnt++;
	}

	start=n-9*cnt;
	
	if(start<0) start=0;
	
	for(i=start; i<=n; i++)
	{
		sum=0;
		for(j=i; j; j/=10)
		{
			sum=sum+j%10;
		}
		
		if(sum+i==n)
		{
			ans=i;
			break;
		}
	}
	
	printf("%d", ans);
	
	return 0;
	
}