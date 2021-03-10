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
	int a[100000]={0,}, i, temp; //한계초과로 100,000으로 그냥 크게 잡음
	
		for(i=1; i<=10000; i++)
	{
		temp=i;
		
		while(temp<=10000)
		{
			temp=d(temp);
						
			a[temp]=a[temp]+1;
		}
	}	
	
			
	
	for(i=1; i<=10000; i++)
	{
		if(a[i]==0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
	
}