#include <stdio.h>
int main()
{
	
	int a[1000]={1,}, b[1000]={1,}, cnt=-1, i;
	
	do
	{
		cnt++;
		
		scanf("%d %d", &a[cnt], &b[cnt]);
		
				
	}while(a[cnt]!=0 && b[cnt]!=0);
	
	
	for(i=1; i<=cnt; i++)
	{
		printf("%d\n", a[i-1]+b[i-1]);
	}
	
	
	return 0;
}