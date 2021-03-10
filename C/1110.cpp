#include <stdio.h>

int main()
{
	
	int n, a, b, c, temp1, temp2, ans, cnt=0;
	
	scanf("%d", &n);
	
	ans=n;
	
	do
	{
		temp1=ans%10;
		temp2=ans/10+ans%10;	
		
		ans=temp1*10+temp2;
		
		cnt++;
		
		
	}while(ans==n);
	
	printf("%d", cnt);
	
	return 0;
	
}