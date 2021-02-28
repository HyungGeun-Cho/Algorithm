#include <stdio.h>


int hanoi_cnt(int k)
{
	if(k==1) return 1;
	else return hanoi_cnt(k-1)*2+1;
}

void hanoi_process(int k, int p1, int p2, int p3)
{
	if(k==1)
	{		
		printf("%d %d\n", p1, p3);
	}
	
	else
	{
		hanoi_process(k-1,p1,p3,p2);    
		hanoi_process(1,p1,p2,p3);     
		hanoi_process(k-1,p2,p1,p3);    
	}
}


int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", hanoi_cnt(n));
	
	hanoi_process(n, 1, 2, 3);
	
	
	return 0;
}

//1
//1 3

//2
//3
//1 2
//1 3
//2 3 (1을 목적지로)

//3
// 1 3 //2: 1에서 2로
// 1 2
// 3 2
// 1 3 3 옮김
// 2 1 (1을 목적지 반대로) 2: 2에서 3으로 (1:2에서 1로)
// 2 3
// 1 3

//4
//1 2 //3:1에서 2로 (2:1에서 3으로)
//1 3
//2 3
//1 2 3 옮김
//3 1
//3 2
//1 2
//1 3 4 옮김
//2 3 //3:2에서 3으로 (2:2에서 1로) (1:2에서 3으로)
//2 1
//3 1
//2 3 // 3옮김
//1 2
//1 3
//2 3
