#include <stdio.h>

int main()
{
	char str[103];
	
	int n, i, j, factor=0, ans=0;
	
	scanf("%d", &n);
	
	int a[n][26]={0,};
	
	for(i=0; i<n; i++)
	{
		scanf("%s", str);
		
		factor=0;
		
				
		a[i][int(str[0])-97]++;
		
		for(j=1; str[j]; j++)
		{
			if(a[i][int(str[j])-97]!=0 && str[j]!=str[j-1])
			{
				factor=-1;
				break;
			}
			
			a[i][int(str[j])-97]++;
		}
		
		if(factor==0) ans++;		
		
	}
	
	printf("%d", ans);
	
	
	return 0;
	
}