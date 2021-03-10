#include <stdio.h>

int main()
{
	
	int n, i, j, k, key_x, key_y, cnt=1, temp, factor=0;
	
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
	
	temp=x[0];
	
	for(i=1; i<n; i++)
	{
		if(x[i]==temp)
		{
			cnt++;
		}
		
		if(x[i]!=temp || (x[i]==temp && i==n-1))
		{
			temp=x[i];
			
			
		
			if(cnt!=1){
				
				if(i==n-1)
				{
					cnt--;
					factor=1;
				}
			
				
				//printf("\n진입성공 i : %d cnt : %d\n", i, cnt);
				
				for(j=i-(cnt-1); j<i+factor; j++)
				{
					key_y=y[j];
					
					for(k=j-1; k>=i-(cnt-1)-1; k--)
					{
						//printf("y[k] : %d y[k+1] %d\n", y[j], key_y);				
						
						if(y[k]>key_y)
						{
							y[k+1]=y[k];
							y[k]=key_y;
						}
			
						else{
							y[k+1]=key_y;
							break;
						}
					}					
				}				
			}
			
			cnt=1;
			factor=0;
		}
			
	}
	
	
	
	for(i=0; i<n; i++)
	{
		printf("%d %d\n", x[i], y[i]);
	}
	
	return 0;
	
	
}