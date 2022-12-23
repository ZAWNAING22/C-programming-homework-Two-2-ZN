#include <stdio.h>
#include <math.h>
void main()
{
    int  n,ld,d,a,i,sum;
    printf("enter a number:");
    scanf("%d", &n);
    
    
    for(i=1; i<=n; i++)
    {
        sum=0; 
        a=i;
        d= (int) log10(a)+1;
        while(a>0)
            {
                ld = a%10;
                sum = sum + pow( ld, d);
                a= a/10;
            }
              if (i == sum)
             { printf("armstron number =%d\n", i );}
    }
}
