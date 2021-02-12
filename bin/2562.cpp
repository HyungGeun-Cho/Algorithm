#include <stdio.h>

int main()
{
	int n, max, max_num=1, i, temp;
	
	
	scanf("%d", &temp);
	
	max=temp;
	
	for(i=2; i<=9; i++)
	{
		scanf("%d", &temp);
		
		//printf("i : %d temp : %d max : %d max_num : %d\n", i, temp, max, max_num);
		
		
		if(max<temp)
		{
			max=temp;
			max_num=i;
		}
		
	}
	
	printf("%d %d", max, max_num);
	
	return 0;
	
	
}