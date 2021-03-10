#include <stdio.h>


long long sum(int *a, int n)
{
	int i;
	long long ans=0;
	
	for(i=1; i<=n; i++)
	{
		ans=ans+a[i];
	}
	
	return ans;
		
}


int main()
{
	int n, i;
	scanf("%d", &n);
	
	int a[n]={0,};
	
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("%lld", sum(a, n));
	
	return 0;
	
	
}

// C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
// a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
// n: 합을 구해야 하는 정수의 개수
// 리턴값: a에 포함되어 있는 정수 n개의 합