#include <stdio.h>

int main()
{
	int a[8], asc[8]={1,2,3,4,5,6,7,8}, dsc[8]={8,7,6,5,4,3,2,1}, i, factor=1;
	
	for(i=0; i<8; i++)
	{
		scanf("%d", &a[i]);
	}
		
	for(i=0; i<8; i++)
	{	
		if(a[i]!=asc[i])
		{
			factor=0;
			break;
		}
	}
	
	if(factor==1) printf("ascending");
	
	else
	{
		factor=-1;
		
		for(i=0; i<8; i++)
		{	
			if(a[i]!=dsc[i])
			{
				factor=0;
				break;
			}
		}			
	
		if(factor!=-1) printf("mixed");
		else printf("descending");	
		
	}	

	
	return 0;	
}