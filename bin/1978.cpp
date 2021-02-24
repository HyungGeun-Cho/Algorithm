#include <stdio.h>

int main()
{
	int n, a[1001]={0,}, i, j, cnt=0, temp;
	
	a[1]=1;
	
	for(i=2; i<=100; i++)
	{
		for(j=2; j<=1000; j++)
		{
			if(i==j) continue;
			
			if(j%i==0) a[j]=1;
		}
	}
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &temp);
		
		if(a[temp]==0) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
	
}