#include <stdio.h>

int main()
{
	int n, five_cnt=0, three_cnt=0, total_cnt, five_max, ans, factor=0;
	
	scanf("%d", &n);
	
	five_max=n/5;
	
	total_cnt=five_max+1;
	
	if(n%5==0) printf("%d", five_max);
	
	else
	{
		five_cnt=five_max;
		
		while(five_cnt>=-0)
		{
			three_cnt=0;
			
			
			while(five_cnt*5+three_cnt*3<n)
			{
				three_cnt++;
				
				if(five_cnt*5+three_cnt*3==n)
				{
					ans=five_cnt+three_cnt;
					factor=1;
					break;
				}				
			}
			if(factor==1) break;
			
			five_cnt--;
		}
		
		if(factor==1)
		{
			printf("%d", ans);
		}
	
		else printf("-1");		
		
	}	
	
	
	return 0;
}