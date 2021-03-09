#include <stdio.h>

int main()
{
	long long unsigned int n, i;
	int a[11], cnt=0, key, j;
	
	scanf("%llu", &n);
	
	
	for(i=n; i>0; i/=10)
	{
		a[cnt]=i%10;
		cnt++;
	}
	
	
	for(i=1; i<cnt; i++)
	{
		key=a[i];
		
		for(j=i-1; j>=0; j--)
		{
			if(a[j]<key)
			{
				a[j+1]=a[j];
				a[j]=key;
			}
			
			else
			{
				a[j+1]=key;
				break;
			}
		}		
	}
	
	
	for(i=0; i<cnt; i++)
	{
		printf("%d", a[i]);
	}
	
	return 0;
	
}