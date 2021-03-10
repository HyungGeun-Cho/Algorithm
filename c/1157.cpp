#include <stdio.h>

int main()
{
	char str[1000001], ans;
	
	int a[26]={0,}, i, max=0, max_num=-1, cnt=0;
	
	scanf("%s", str);
	
	
	for(i=0; str[i]; i++)
	{
		if(int(str[i])>=97 && int(str[i])<=122)
		{
			a[int(str[i])-97]++;
		}
		
		else
		{
			a[int(str[i])-65]++;
		}
	}
	
	for(i=0; i<26; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			max_num=i;
		}
		
	}
	
	for(i=0; i<26; i++)
	{
		if(a[i]==max) cnt++;
	}
	
	if(cnt==1) printf("%c", max_num+65);
	else printf("?");
	
	return 0;	
	
}