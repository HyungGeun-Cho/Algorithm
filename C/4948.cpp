#include <stdio.h>

int main()
{
	
	int n, temp=1, i, j, cnt=0;
	
	n=123456*2;
	bool a[n+1]={true,};
	
	for(i=2; i<=n; i++)
	{
		a[i]=true;
	}
	
	a[1]=false;
	
	for(i=2; i*i<=n; i++)
	{
		
		if(a[i]==false) continue; 
		
		for(j=i*i; j<=n; j++)
		{
			if(i==j) continue;
			
			if(j%i==0)
			{
				a[j]=false;
			}
		}
	}

	while(temp!=0)
	{
		
		cnt=0;
		scanf("%d", &temp);
		
		if(temp==0) break;
		
		for(i=temp+1; i<=temp*2; i++)
		{
			if(a[i]==true) cnt++;
		}
		
		printf("%d\n", cnt);
		
	}
	
	
	return 0;
}