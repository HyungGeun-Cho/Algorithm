#include <stdio.h>

int main()
{
	
	int n, i, j, k, key_x, key_y, temp;
	
	scanf("%d", &n);
	
	int x[n], y[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for(i=1; i<n; i++)
	{
		key_x=x[i];
		key_y=y[i];
		
		for(j=i-1; j>=0; j--)
		{
			if(x[j]>key_x)
			{
				x[j+1]=x[j];
				x[j]=key_x;
				
				y[j+1]=y[j];
				y[j]=key_y;
			}
			
			else{
				x[j+1]=key_x;
				y[j+1]=key_y;
				break;
			}
		}		
	}
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(x[j]==x[j+1])
			{
				if(y[j]>y[j+1])
				{
					temp=y[j];
					y[j]=y[j+1];
					y[j+1]=temp;
				}
			}
			
		}		
	}
	
	
	
	for(i=0; i<n; i++)
	{
		printf("%d %d\n", x[i], y[i]);
	}
	
	return 0;
	
	
}