#include <stdio.h>
#include <math.h>

int main()
{
	int t, i, d, r;
	
	double root;
	
	scanf("%d", &t);
	
	int x[t], y[t], ans[t]={0,};
	
	for(i=0; i<t; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
		
		
		d=y[i]-x[i];
		
		// printf("i : %d x : %d y : %d d : %d\n", i, x[i], y[i], d);
		

		root=sqrt(double(d));
		
		r=int(root);
		
		// printf("d : %d, root : %f r : %d\n", d, root, r);
			
		if(r*r==d)
		{
			ans[i]=r*2-1;
		}
		
		else if(r*r+r<d)
		{
			ans[i]=(r+1)*2-1;
		}
			
		else{
			ans[i]=r*2;
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
 	

