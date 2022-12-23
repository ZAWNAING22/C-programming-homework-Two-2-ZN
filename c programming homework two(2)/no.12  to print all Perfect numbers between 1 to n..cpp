#include <stdio.h>
int main()
{
	int i,j,sum,n;
	printf("enter a number");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum=0;
		for(j=1; j<i; j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		
		if(sum==i)
		{
			printf("perfect numer= %d\n",i);
		}
	}
}
