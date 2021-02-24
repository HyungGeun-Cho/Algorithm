#include <stdio.h>

int main()
{
	int x, y, w, h, x_dis, y_dis;
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	if(x>w-x) x_dis=w-x;
	else x_dis =x;
	
	if(y>h-y) y_dis=h-y;
	else y_dis =y;
	
	if(x_dis>y_dis) printf("%d", y_dis);	
	else printf("%d", x_dis);
	
	return 0;
	
}