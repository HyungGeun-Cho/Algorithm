#include <stdio.h>


void insertion(int list[], int n)
{
	int i, j, key;
	
	for(i=1; i<n; i++)
	{
		key=list[i];
		
		for(j=i-1; j>=0; j--)
		{
			if(list[j]>key)
			{
				list[j+1]=list[j];
				list[j]=key;
			}			
			
			else
			{
				list[j+1]=key;
				break;
			}
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
	
	insertion(a, n);
	
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
		
	
}