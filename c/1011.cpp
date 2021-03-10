#include <stdio.h>

int main()
{
	int t, i;
	
	unsigned int k, d;
	
	scanf("%d", &t);
	
	int x[t], y[t], ans[t]={0,};
	
	for(i=0; i<t; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
		
		
		d=y[i]-x[i];
		
		k=1;
		
		while((k*(k+1)/2)<d)
		{
			d=d-k;
			ans[i]++;
			
			// printf("i : %d k : %d d : %d ans : %d\n", i, k, d, ans[i]);
			
			if((k+1)*(k+2)/2>d) continue; //???? 대박
			else k++;
		}		
		
		//printf("for 탈출 i : %d k : %d d : %d ans : %d\n", i, k, d, ans[i]);
		
		//if((k-2)*(k-1)/2>d)
		
		ans[i]=ans[i]+k;
		
		// else
		// {
		// 	ans[i]=ans[i]+k-1;
		// }		  
	}
	
	for(i=0; i<t; i++)
	{
		printf("%d\n", ans[i]);
	}
			
	return 0;
		
}

// 3
// 1 2 : 1
// 2 2
// 1 1 : 2
// 1 0 : 3


// 4
// 1 3


// 5
// 1 4 : 1
// 2 2	: 2
// 1 1 
// 1 0
	
// 6
// 1 5
// 2 3
// 2 1
// 1 0
	
// 1 2 3 
	
