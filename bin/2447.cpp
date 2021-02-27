#include <stdio.h>

void star(bool arr[2188][2188], int x, int y, int size)
{
	
	if(size==3)
	{
		arr[x][y]=true;
		arr[x+1][y]=true;
		arr[x+2][y]=true;
		
		arr[x][y+1]=true;
		arr[x+2][y+1]=true;
		
		arr[x][y+2]=true;
		arr[x+1][y+2]=true;
		arr[x+2][y+2]=true;
	}
	
	else
	{
		star(arr, x, y, size/3);
		star(arr, x+size/3, y, size/3);
		star(arr, x+size/3*2, y, size/3);
	
		star(arr, x, y+size/3, size/3);
		star(arr, x+size/3*2, y+size/3, size/3);
	
		star(arr, x, y+size/3*2, size/3);
		star(arr, x+size/3, y+size/3*2, size/3);
		star(arr, x+size/3*2, y+size/3*2, size/3);
	}
	
}


int main()
{
	int n, i, j;
	bool a[2188][2188]={false};
	
	scanf("%d", &n);
		
	
	star(a, 1, 1, n);
	
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(a[i][j]==true) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	return 0;
	
}