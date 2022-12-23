/*to check whether a number is Armstrong number or not*/
#include <stdio.h>
#include <math.h>
int main()
{
	int orgn,n,d,ld,sum;
	//orgn for original number, n for numer, d digit numer, ld for last digit;
	printf("enter a numer:");
	scanf("%d", &n);
	orgn =n;
	sum=0;
	d = (int)log10 (n)+1;
	
	while (n>0)
	{
		ld = n%10;
		sum = sum +  pow(ld,d) ;
		n=n/10;
	}
	  		if(orgn ==sum)
	  		
	  		printf("%d is  a armstrong number", orgn);
	  		else
	  		  
			printf("%d is NOT an armstron number", orgn);
	
	
	return 0;
}

