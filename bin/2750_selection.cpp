#include <stdio.h>
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )


void selection(int list[], int n)
{
	int i, j, min, temp;
	
	for(i=0; i<n-1; i++)
	{
		min=i;
		
		for(j=i; j<n; j++)
		{
			if(list[min]>list[j])
			{
				min=j;
			}			
		}
		
		if(min!=i)
		{
			SWAP(list[i], list[min], temp);
		}
	}
}


int main()
{
	
	int n, i;
	
	scanf("%d\n", &n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	selection(a, n);
	
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
		
	
}