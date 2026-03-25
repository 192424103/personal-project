//series 1+1/2+1/3+...+1/n and its sum

#include<stdio.h>

int main()

{
	int sum=0,n,i;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++);
	{
	   printf("1/%d",i);
	}
	if(i<n)
	{
	printf("+");
	}
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("\n sum=1/%d\n",sum);
	
}
