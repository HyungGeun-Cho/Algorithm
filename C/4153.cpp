#include <stdio.h>

int main()
{
	
	unsigned int a[3]={1,1,1}, temp, i;
	
	while(a[0]!=0 && a[1]!=0 && a[2]!=0)
	{
		scanf("%u %u %u", &a[0], &a[1], &a[2]);
		
		if(a[0]==0 && a[1]==0 && a[2]==0) break;
		
		for(i=1; i<=2; i++)
		{
			if(a[i-1]>a[i])
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		}
		
// 		printf("%u %u %u\n", a[0], a[1], a[2]);
		
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) printf("right\n");
		else printf("wrong\n");
	}
	
	return 0;
	
}