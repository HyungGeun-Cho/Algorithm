#include <stdio.h>

int main()
{
	int t, x1, y1, r1, x2, y2, r2, i, max, min, dis;
	
	
	scanf("%d", &t);
	
	for(i=1; i<=t; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		
		if(r1>r2)
		{
			max=r1;
			min=r2;
		}
		else
		{
			max=r2;
			min=r1;
		}
		
		
		dis=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		
		if(x1==x2 && y1==y2 && r1==r2) printf("-1\n");
		
		else if(dis > max*max)
		{
			if(dis > (r1+r2)*(r1+r2)) printf("0\n");
		
			else if(dis == (r1+r2)*(r1+r2)) printf("1\n");
		
			else printf("2\n");   
		}
				 
		//else if (dis==max*max) printf("2\n"); //실수;;; 입력 안 해도 됨.
		
		else 
		{
			if(dis > (max-min)*(max-min)) printf("2\n");
				
			else if(dis==(max-min)*(max-min)) printf("1\n");
			
			else printf("0\n");  
		
		}		
	}
	
	 return 0;
	
}