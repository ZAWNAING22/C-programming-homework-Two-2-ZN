#include <stdio.h>
int main ()
{
    int i,n , sum=0;
    printf("enter a number:");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum= sum+i;
            
          
        }
      
    }
     puts("result below\t");
                if(n==sum)
               printf("%d is the pertect number",n);
               else
               printf("%d is !NOT perfect number",n);
    
    return 0;
}
