#include <stdio.h>

int main()
{
	int c, n, i, j, sum=0, cnt=0;
	
		
	scanf("%d", &c);
	
	float average=0, b[c];
	
	for(i=1; i<=c; i++)
	{
		
		scanf("%d", &n);
		
		int a[n]={0,};
		
		for(j=1; j<=n; j++)
		{
			scanf("%d", &a[j]);
			
			sum=sum+a[j];
		}
		
		average=float(sum)/float(n);
		
		for(j=1; j<=n; j++)
		{
			if(a[j]>average) cnt++;
		}
		
		b[i]=float(cnt)/float(n)*100;
		
		sum=0;
		cnt=0;		
		
	}
	
	for(i=1; i<=c; i++)
	{
		printf("%.3f%%\n", b[i]);
	}
	
	return 0;
	
	
}