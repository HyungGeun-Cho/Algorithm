#include <stdio.h>
int main()
{
	int n, i, j, c[4]={0,}, cnt=0, factor=0, ans=0;
	
	scanf("%d", &n);
	
//	int a[n+1]={0,};
	
	
	for(i=1; i<=n; i++)
	{
		
		//printf("%d\n", i);
		
		if(i<100)
		{
			ans++;			
		}
		
		else
		{
			c[4]={0,};
			
			cnt=0;
			factor=0;
			
			for(j=i; j>0; j=j/10)
			{
				c[cnt]=j%10;
				cnt=cnt+1;
				
			}
			
			
		
			for(j=0; j<cnt-2; j++) 
			{
				if( (c[j]-c[j+1]) != (c[j+1]-c[j+2]) )
				{
					factor=1;
				}
				
				//printf("%d : %d %d\n", j, c[j]-c[j+1], c[j+1]-c[j+2]);
				
			}
			

			
			if(factor==0) ans++;
			
		}		
		
	}
	
	
	printf("%d", ans);
	
	return 0;
	
}