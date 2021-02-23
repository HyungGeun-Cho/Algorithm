#include <stdio.h>

int main()
{
	int t, i, k;
	
	unsigned int k_square, d;
	
	scanf("%d", &t);
	
	int x[t], y[t], ans[t]={0,};
	
	for(i=0; i<t; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
		
		
		d=y[i]-x[i];
		
		// printf("i : %d x : %d y : %d d : %d\n", i, x[i], y[i], d);
		
		k=1;
		
		k_square=k*k;
		
		while(k_square<d)
		{
			k++;
			
			// printf("i : %d d : %u k : %d\n", i, d, k);
			
			// printf("%u\n", k_square);
			
			k_square = k*k;
			
		}
		
		if(k*k==d)
		{
			ans[i]=k*2-1;
		}
		
		else if((k-1)*(k-1)+(k-1)<d)
		{
			ans[i]=k*2-1;
		}
		
		else{
			ans[i]=(k-1)*2;
		}

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


// 5 1 2 1 1
// 1 4 : 1
// 2 2	: 2
// 1 1 
// 1 0
	
// 6
// 1 5
// 2 3
// 2 1
// 1 0
	
// 12 < 1 2 3 3 2 1 1 <= 16 4^2

// 9 < 1 2 3 2 2 1   <=12 = (3*3+3)
// 6 < 1 2 3 2 1     <= 9 ()
// 4 <               <=6 = 2*2+2
// 1 < 1 2 1 <=4 3
 	

