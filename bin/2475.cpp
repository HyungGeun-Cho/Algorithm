#include <stdio.h>
int main()
{
	int i, sum=0, temp;
	
	for(i=1; i<=5; i++)
	{
		scanf("%d", &temp);
		sum+=temp*temp;
	}
	
	printf("%d", sum%10);
	
	return 0;
	
}