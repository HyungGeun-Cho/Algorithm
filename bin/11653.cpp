#include <stdio.h>

int main()
{
	int n, ans, cnt=2;
	
	scanf("%d", &n);
	
	ans=n;
	
	while(ans!=1)
	{
		if(ans%cnt==0)
		{
			ans=ans/=cnt;
			printf("%d\n", cnt);
		}
		
		else cnt++;			  
	}

		  
	return 0;
		  
}