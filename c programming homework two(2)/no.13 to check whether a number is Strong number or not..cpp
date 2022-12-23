#include <stdio.h>
int main()
{
	int i,orgn,d,n,sum;
	long fact;
	printf("print a number:");
	scanf("%d", &n);
	sum=0;
	orgn =n;
	while(n>0)
	{
	  d = n%10;
	    fact =1;
	    for(i=1; i<=d; i++)
	    {
	    	  fact=fact*i;
	    }
	      
	      sum= sum+fact;
	      n=n/10;
	      
		    	
	}
	  if(sum==orgn)
	      {
	  	printf("%d is srtong numer",orgn); 
		  }
	  	else
	  	   {
	  		printf("%d is not strong number", orgn);
		  }
	  
	   return 0;
}
