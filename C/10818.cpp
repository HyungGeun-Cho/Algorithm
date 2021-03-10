#include <stdio.h>

int main()
{
	int n, min, max, i, temp;
	
	scanf("%d", &n);
	
	//int a[n]={0,};
	
	scanf("%d", &temp);
	
	min=temp;
	max=temp;
	
	for(i=1; i<=n-1; i++)
	{
		scanf("%d", &temp);
		
		if(min>temp) min=temp;
		if(max<temp) max=temp;
	}
	
	printf("%d %d", min, max);
	
	return 0;
	
	
}