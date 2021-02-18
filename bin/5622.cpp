#include <stdio.h>

int main()
{
	char str[16];
	
	int i, time=0;
	
	scanf("%s", str);
	
	for(i=0; str[i]; i++)
	{
		if(str[i]>='A' && str[i]<='R') time=time+int(str[i]-65)/3+3;
		
		
		else if(str[i]=='S') time=time+8;
		
		else if(str[i]=='Z') time=time+10;
		
		else{
			time=time+int(str[i]-1-65)/3+3;			
		}
		
	}
	
	printf("%d", time);
	
	return 0;	
}
