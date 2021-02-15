#include <stdio.h>
int main()
{
	
	int a[10], b[10]={0,}, i, r[42]={0,}, cnt=0;
	
	
	for(i=0; i<=9; i++)
	{
		scanf("%d", &a[i]);
		
		b[i]=a[i]%42;
		
		r[b[i]]++;
	}
	
	for(i=0; i<=41; i++)
	{
		if(r[i]!=0) cnt++;		
	}
	
	printf("%d", cnt);
	
	return 0;
	
}