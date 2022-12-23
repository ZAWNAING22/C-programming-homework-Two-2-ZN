#include <stdio.h>
int main()
{
	int i=1 ,sum=0;
	while(i<=50)
	{
		sum+=i;
		printf("sum = %d\n", sum);
		i++;
	}
	return 0;
}
