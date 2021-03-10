#include <iostream>
int main()
{
	
	int n, i, a, b, c[1000000];
	
	std::cin >> n;
	
	for(i=1; i<=n; i++)
	{
		std::cin>>a;
		std::cin>>b;
		c[i-1]=a+b;		
	}
	
	for(i=1; i<=n; i++)
	{
		printf("%d\n", c[i-1]);
	}
	
}