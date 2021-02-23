#include <stdio.h>
#include <string.h>


struct number {   // 구조체 정의
    int k[10010];        
    int cnt=0;             
};


struct number reverse(char str[])
{
	struct number temp;
	
	int index=0, i, box;
	
	for(i=strlen(str)-1; i>=0; i--)
	{
		box=int(str[i])-48;
		temp.k[index]=box;
		index++;
		temp.cnt++;
	}
	
	
	
	return temp;
}

int main()
{
	
	struct number a1;
	struct number b1;
	struct number c1;
	
	int i, index=0, cnt=0;
	char a[10010], b[10010], c[10010], factor=0;
		
	scanf("%s %s", a, b);
	
	a1=reverse(a);
	b1=reverse(b);
	
	
	if(b1.cnt>a1.cnt)
	{
		c1=a1;
		a1=b1;
		b1=c1;
	}
	
	//디버깅용
	// printf("\n");
	
	// for(i=a1.cnt-1; i>=0; i--)
	// {
	// 	printf("a : %d", a1.k[i]);		
	// }
	// printf("\na1_cnt : %d\n", a1.cnt);
	
	// printf("\n");	

	// for(i=b1.cnt-1; i>=0; i--)
	// {
	// 	printf("b : %d", b1.k[i]);		
	// }
	// printf("\nb1_cnt : %d\n", b1.cnt);
	// printf("\n");	
	
	
	//덧셈 프로세스	
	index=0;
	
	for(i=0; i<b1.cnt; i++)
	{
		
		//printf("%d + %d\n", a1.k[i],b1.k[i]);
		
		a1.k[i]=a1.k[i]+b1.k[i];
		
		a1.k[i+1]=a1.k[i+1]+a1.k[i]/10;
		
		a1.k[i]%=10;
	}
	

	
	//한번 더 자리 올림
	for(i=0; i<a1.cnt; i++)
	{
		a1.k[i+1]=a1.k[i+1]+a1.k[i]/10;
		a1.k[i]%=10;
	}
	
	
	if(a1.k[a1.cnt]!=0) a1.cnt=a1.cnt+1; 
	
	
	//결과 출력
	for(i=a1.cnt-1; i>=0; i--)
	{
		printf("%d", a1.k[i]);		
	}
	
	return 0;

}

