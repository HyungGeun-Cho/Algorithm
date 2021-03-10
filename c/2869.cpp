#include <stdio.h>

int main()
{
	long long int a, b, v, sum=0, t;
	
	
	scanf("%lld %lld %lld", &a, &b, &v);
	
	if(a>=v) printf("1");
	
		
	else
	{
		
		sum=sum+a;
	
		t=1;
		
		while(v>sum)
		{
			sum=sum+(a-b);
			t++;			
		}		
	}
	
	printf("%lld", t);
	
	return 0;
	
}