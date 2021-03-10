#include <stdio.h>

int main()
{
	int n, i, j, min=4000, max=-4000, temp, a[8002]={0,}, median=0, med_cnt=0, mode=0, mod_cnt=0, mod_ans=0;
	
	double sum=0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &temp);
		
		a[temp+4000]++;
		
		sum=sum+temp;
		
		if(min>temp) min=temp;
		if(max<temp) max=temp;
	}
	
	//짝수도 받는다면
	// if(n%2==0)
	// {
	// 	for(i=0; i<8002; i++)
	// 	{
	// 		for(j=1; j<=a[i]; j++)
	// 		{
	// 			med_cnt++;
	// 			if(med_cnt==n/2) median=median+i-4000;
	// 			if(med_cnt==n/2+1) median=median+i-4000;
	// 		}
	// 	}
		
	// 	median=median/2;		
	// }
	

	for(i=min+4000; i<=max+4000; i++)
	{

		med_cnt=med_cnt+a[i];

		if(med_cnt>=n/2+1)
		{
			median=i-4000;
			break;
		}
		
	}

	
	for(i=min+4000; i<=max+4000; i++)
	{
			
		if(a[i]>mode)
		{
			mod_cnt=1;
			mode=a[i];
			mod_ans=i-4000;
		}
		else if(a[i]==mode && mod_cnt==1)
		{
			mod_ans=i-4000;
			mod_cnt++;			
		}
	}
		
	
	
	printf("%.0f\n", double(sum)/double(n));
	
	printf("%d\n", median);
	
	printf("%d\n", mod_ans);
	

	printf("%d", max-min);
	
	
	
}