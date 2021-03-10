#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	
	int i, cnt=0;
	
	scanf("%[^\n]", str);

	
	for(i=1; i<=strlen(str); i++)
	{
		if(int(str[i-1])!=32 && (int(str[i])==32||str[i]=='\0')) cnt++;
		
		//printf("%c %d\n", str[i], cnt);
	}
	
	
	printf("%d", cnt); 
	
	return 0;
	
}