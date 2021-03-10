#include <stdio.h>


void bubble(int list[], int n)
{
	int i, j, temp;
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(list[j]>list[j+1])
			{
				temp=list[j+1];
				list[j+1]=list[j];
				list[j]=temp;
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
	
	bubble(a, n);
	
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
		
	
}