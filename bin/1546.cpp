#include <stdio.h>

int main()
{
	int n, i, max=0;
	float sum=0;
	
	scanf("%d", &n);
	
	float a[n]={0,};
	
	
	for(i=1; i<=n; i++)
	{
		scanf("%f", &a[i]);
		
		if(a[i]>max) max=a[i];
	}
	
	for(i=1; i<=n; i++)
	{
		sum=sum+a[i]/max*100;		
		//printf("%f\n", sum);
	}
	
	printf("%f", float(sum)/float(n));
	
	return 0;
	
	
}