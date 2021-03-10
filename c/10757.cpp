#include <stdio.h>
#include <string.h>


int main()
{
	
	int i, index=0, box, temp_a[10010], temp_b[10010], cnt_a=0, cnt_b=0;
	char a[10010];
	char b[10010];
	char c[10010];
	
	char* a1=a;
	char* b1=b;
	char* c1=c;
	
	scanf("%s %s", a, b);
	
	
	//큰 수가 a, 작은 수가 b
	if(strlen(b)>strlen(a))
	{
		c1=a1;
		a1=b1;
		b1=c1;
	}
	
		
			
	//a를 temp에 순서 거꾸로 입력 + 배열 포인터 공부필요!!!
	for(i=strlen(a1)-1; i>=0; i--)
	{
		box=int(a1[i])-48;
		temp_a[index]=box;
		index++;
		cnt_a++;
	}	
	
	index=0;
	
	//b를 temp에 순서 거꾸로 입력 + 배열 포인터 공부필요!!!
	for(i=strlen(b1)-1; i>=0; i--)
	{
		box=int(b1[i])-48;
		temp_b[index]=box;
		index++;
		cnt_b++;
	}	

	//덧셈 프로세스	
	index=0;
	
	for(i=0; i<cnt_b; i++)
	{
			
		temp_a[i]=temp_a[i]+temp_b[i];
	
				
		temp_a[i+1]=temp_a[i+1]+temp_a[i]/10;
		
		temp_a[i]%=10;
		
	}	

	
	//한번 더 자리 올림
	for(i=0; i<cnt_a; i++)
	{
		temp_a[i+1]=temp_a[i+1]+temp_a[i]/10;
		
		temp_a[i]%=10;
	}
	
	
	if(temp_a[cnt_a]!=0) cnt_a=cnt_a+1;   // 문제 겁나 틀린 원흉임~!!!!! cnt 배열 0,1 index 차이.
	
	
	//결과 출력
	for(i=cnt_a-1; i>=0; i--)
	{
		printf("%d", temp_a[i]);		
	}
	
	return 0;

}

