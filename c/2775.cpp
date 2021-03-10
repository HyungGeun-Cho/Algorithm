#include <stdio.h>

//파스칼 삼각형


unsigned long long int combination(int n, int r)
{
	int cnt_1, cnt_2;
	unsigned long long int ans=1;
	
	

	
	if(n-r>r) cnt_1=n-r;
	else cnt_1=r;
	
	cnt_2=n-cnt_1;
		
	while(cnt_1<n)
	{
		ans=ans*n;
		n--;
	}
	
	while(cnt_2>0)
	{
		ans=ans/cnt_2;
		cnt_2--;
	}
	
	return ans;
	
}


int main()
{
	int t, i, k, n, a, b;
	
	scanf("%d", &t);
	
	unsigned long long int ans[t]={0,};
	
	
	for(i=0; i<t; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		
		a=k+n;
		
		b=k+1;
		
		
		ans[i]=combination(a,b);
	}		
	
	
	for(i=0; i<t; i++)
	{
		printf("%llu\n", ans[i]);
	}
	
	return 0;
	
}


// // 10 = (1)+(1+2)+(1+2+3)

// // 11055 
// // 1 945
// // 1 836
// // 1 728
// // 1 62156
// // 1 5153570 
// // 1 410203556
// // 1 3 6101521283645 55 66
// // 1 2 3 4 5 6 7 8 9 10 11 12
// // 1 1 1 1 1 1 1 1 1 1 

// 8,2 -> 1, 10

// (0,3) -> 3C1
// (0,2) -> 2C1
// (8,3) -> 10C8

// (1,3) -> 4C2

// 8 1 10
// 7 1 9
// 6
// 5
// 4
// 3
// 2
// 1
// 0