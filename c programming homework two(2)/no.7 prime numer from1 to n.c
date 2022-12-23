#include <stdio.h>
void main()
{
	int i,n,x,count;
	printf("enter a numer:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		count=0;
		for(x=2; x<=i/2; x++)
		{
			if(i%x==0)
			{
			
			  count++;
			   break;
			}
		
			
		}
		if(count ==0 && i!=1)
		printf("%d\n",i);
		
	}
}
