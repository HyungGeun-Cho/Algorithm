#include <stdio.h>

int main()
{
	int n, m, i, j, min, x, y, temp1=0, temp2=0;
	
	scanf("%d %d", &n, &m);
	
	min=n*m;
	
	char a[n][m];
	
	for(i=0; i<n; i++)
	{
		scanf("%s", a[i]);	
	}

	
	for(i=0; i<=n-8; i++)
	{
		for(j=0; j<=m-8; j++)
		{
			temp1=0; //시작이 W
			temp2=0; //시작이 B
			
			for(x=i; x<i+8; x++)
			{
				for(y=j; y<j+8; y++)
				{
					if((x+y)%2==0)
					{
						if(a[x][y]!='W') temp1++;
						if(a[x][y]!='B') temp2++;
					}
					else
					{
						if(a[x][y]!='B') temp1++;
						if(a[x][y]!='W') temp2++;
					}
				}		
			}

			
			if(min>temp1) min=temp1;
			if(min>temp2) min=temp2;
		}
	}
	
	printf("%d", min);
	
}