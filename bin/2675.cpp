#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, k;
	
	scanf("%d", &n);
	
	
	int r[n];
	
	char s[n][21];   //문자열 마지막 NULL값 주의!!!!!!
	
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &r[i]);
		
		scanf("%s", s[i]);
		
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<strlen(s[i]); j++)
		{
			for(k=1; k<=r[i]; k++)
			{
				printf("%c", s[i][j]);
			}
		}
		
		if(i!=n-1)	printf("\n");
	
	}
	
	return 0;
	
	
}