#include <stdio.h>

int main()
{
	int i, x[2]={0,0}, y[2]={0,0}, x_cnt[2]={1,0}, y_cnt[2]={1,0}, temp_x, temp_y, ans_x, ans_y;
	
	scanf("%d %d", &x[0], &y[0]);

	for(i=0; i<2; i++)
	{
		scanf("%d %d", &temp_x, &temp_y);
		
		if(temp_x!=x[0])
		{
			x[1]=temp_x;
			x_cnt[1]++;
		}
		else x_cnt[0]++;
		
		
		if(temp_y!=y[0])
		{
			y[1]=temp_y;
			y_cnt[1]++;
		}
		else y_cnt[0]++;
		
	}
	
	if(x_cnt[0]==2) ans_x=1;
	else ans_x=0;
		
	if(y_cnt[0]==2) ans_y=1;
	else ans_y=0;
	
	printf("%d %d", x[ans_x], y[ans_y]);
	
	return 0;	
	
}