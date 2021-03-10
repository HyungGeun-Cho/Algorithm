#include <stdio.h>

int d(int k)
{
		int i,sum=0, selfnumber;
	
	for(i=k; i>0; i=i/10)
	{
		sum=sum+i%10;
	}
	
	selfnumber=k+sum;
	
	return selfnumber;
}

int main()
{
	printf("%d", d(100));
	
	return 0;
	
}