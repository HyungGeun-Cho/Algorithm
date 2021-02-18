#include <stdio.h>

int main()
{
	long long int a, b, v, t=0;
	
	
	scanf("%lld %lld %lld", &a, &b, &v);
	
	if(a>=v) printf("1");
	
	
	else
	{
		
		t=(v-a)/(a-b);
		
		if(t==0) printf("2");
		
		else if((v-a)%(a-b)==0)  printf("%lld", t+1);  
		
		
		else printf("%lld", t+2);  
		
	}
	
	return 0;
	
}

// 	cout << (v - b - 1) / (a - b) + 1;

