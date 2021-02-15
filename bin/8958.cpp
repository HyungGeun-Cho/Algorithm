#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, cnt=0;
	
	char c[80];
	
	scanf("%d", &n);
	
	int a[n]={0,};
	
	for(i=0; i<n; i++)
	{
		scanf("%s", c);
		
		for(j=0; j<strlen(c); j++)
		{
			if(c[j]=='O') cnt=cnt+1;
			else cnt=0;
			
			a[i]=a[i]+cnt;
			
		}
		
		cnt=0;
		
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
	
}