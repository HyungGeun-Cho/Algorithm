#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	
	int a[26]={0,}, i;
	
	scanf("%s", s);
	
	for(i=0; i<26; i++)
	{
		a[i]=-1;
	}
	
	for(i=0; i<strlen(s); i++)
	{
		if(a[int(s[i])-97]==-1) a[int(s[i])-97]=i;
	}
	
	for(i=0; i<26; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
	
}