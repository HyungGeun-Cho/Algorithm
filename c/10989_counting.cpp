#include <stdio.h>

int main()
{
	
	int n, i, j, max=0, temp;
	
	scanf("%d\n", &n);

		int c[10001]={0,};
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &temp);
		if(max<temp) max=temp;
		c[temp]++;
	}
	

	for(i=1; i<=max; i++)
	{
		for(j=1; j<=c[i]; j++)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
	
}