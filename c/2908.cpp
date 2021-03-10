#include <stdio.h>
#include <math.h>

int main()
{
	char a[4], b[4];
	
	int i, a_num=0, b_num=0;
	
	scanf("%s %s", a, b);
	
	for(i=0; i<=2; i++)
	{
		a_num=a_num+(int(a[i])-48)*pow(10,i);
		b_num=b_num+(int(b[i])-48)*pow(10,i);
	}
	
	if(a_num >= b_num) printf("%d", a_num);
	else printf("%d", b_num);
	
	//0 = 33
	
}