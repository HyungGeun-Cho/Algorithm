// 1 = 1
// 1 2 3 4 5 10 7 8 9 = 10+8
// 1 2 3 4 5 100 7 8 9 \ 100+8




#include <stdio.h>

int devil(int a)
{
	int i, cnt=0, temp=6;
	
	for(i=a; i>0; i/=10)
	{
		if(temp==6 && i%10==6)
		{
			cnt++;
		}
		else cnt=0;
		
		if(cnt==3) break;
	}
	
	if(cnt==3) return 1;
	
	else return -1;	
}

int main()
{
	int n, ans=0, i;
	
	scanf("%d", &n);
	
	for(i=666; i<=7000000; i++)
	{
		if(devil(i)==1) ans++;
		
		if(ans==n) break;
	}
	
	printf("%d", i);
	
}

