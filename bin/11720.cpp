#include <stdio.h>

int main()
{
	int n, i, sum=0;
	
		
	scanf("%d", &n);
	
	char c[n];
	
	scanf("%s", c);
	
	
	// for(i=0; i<n; i++)
	// {
	// 	printf("%d : %d\n", i, c[i]);
	// }
	
	
	for(i=0; i<n; i++)
	{
		sum=sum+c[i]-48;
	}
	
	printf("%d", sum);
	
	return 0;
	
}