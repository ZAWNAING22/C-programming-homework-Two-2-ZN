#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d, root1, root2;
	printf("enter a b c \n");
	scanf("%lf %lf %lf", &a, &b , &c);
	
	d = b*b - 4*a*c;
	 if (d<0)
	 printf("root are imaginary");
	 else
	 root1 = ( -b + sqrt(d) )/2*a;
	 root2 = ( -b - sqrt(d) )/2*a;
	 printf(" root1 = %lf\n root2 = %lf\n", root1, root2);
	 return 0;
}
