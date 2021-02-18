#include <stdio.h>

int main()
{
	long long int n, k, sum=0, sum_1=0, i=0, ans;
	
	
	scanf("%lld", &n);
	
	if(n==1) printf("1");
	
	else{
		
	
		while(n-1>sum)
		{
			sum_1=sum_1+i;
			i++;
			sum=6*sum_1;
		}
	
		printf("%lld", i);

		
	}
	
	
	return 0;
}


// 65
	
// 	10
// 	1234
	
	
// 	n= 1+ 6*(1+2+3+4+5)
	
// 1	1          
// 2	~7
// 3	~19
// 4	~37
// 5	~61
// 6	~91
	