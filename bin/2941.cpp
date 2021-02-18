#include <stdio.h>

int main()
{
	char str[103], croatia[8][4]={"c=","c-","dz=","d-","lj","nj","s=","z="};
	
	int i, j, k, cnt=0, factor=0;
	
	scanf("%s", str);
	
	for(i=0; str[i]; i++) //주어진 문자열 탐색
	{
		//printf("i %d %c 시작\n", i, str[i]);
	
		for(j=0; j<8; j++) //주어진 문자열의 i번째 문자가 각 크로아티아 문자의 첫 번째 문자와 일치하는 확인
		{
			//printf("i %d %c j %d %s 시작\n", i, str[i], j, croatia[j]);
			
			factor=0;
			if(str[i]==croatia[j][0])
			{
				for(k=0; croatia[j][k]; k++)
				{
					
					//printf("i %d %c j %d %s k %d 시작\n", i, str[i], j, croatia[j], k);
					
					//printf("%c %c\n", str[i+k],croatia[j][k]);
					
					if(str[i+k]!=croatia[j][k])
					{
						factor=-1;
						
						//printf("i %d %c j %d %s k %d 일치 X\n", i, str[i], j, croatia[j], k);
						
						break;
					}
				}
				if(factor==0) break;
			}
			else factor=-1;
		}
		
		if(factor==0) 
		{
			//printf("i %d %c factor = %d\n", i, str[i], factor);
			i=i+(k-1);
		}
		
		cnt++;
		
		//printf("i %d 끝 cnt : %d\n", i, cnt);
			
	}
	
	printf("%d", cnt);
	
	return 0;
	
}