#include <stdio.h>

int main()
{
	int n, cnt=0, sum=0, k;
	
	scanf("%d", &n);
	// 2 3 4 5 6 
	// 1 2 3 4 5 6 7 8 9 
	
	while(n>sum)
	{
		cnt++;
		sum=sum+cnt;
	}
	
    cnt=cnt+1;
	
	if(cnt%2==0) //분모가 1
	{
		k=n-(sum-(cnt-1));
		
		printf("%d/%d", cnt-k, k);
		
	}
	
	else // 분자가 1
	{
		k=n-(sum-(cnt-1));
		
		printf("%d/%d",k, cnt-k);
		
	}
	
	return 0;
	
	
}