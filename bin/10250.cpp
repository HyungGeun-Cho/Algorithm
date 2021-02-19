#include <stdio.h>

int main()
{
	int t, h, w, n, i;
	
	scanf("%d", &t);
	
	int a[t], b[t];
	
	for(i=0; i<t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		
		a[i]=n/h;
		b[i]=n%h;
		
		if(b[i]==0)
		{
			a[i]=n/h;
			b[i]=h;
		}
		
		else
		{
			a[i]=n/h+1;
			b[i]=n%h;
		}
		
		
	}
	
	for(i=0; i<t; i++)
	{
		printf("%d%02d\n",b[i], a[i]);
	}
	
	return 0;
	
}