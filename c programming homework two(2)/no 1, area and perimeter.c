#include <stdio.h>

int main()
{
	float a, b, area, perimeter;
	printf("enter two sides of rectangle ,%d\n %d\n",a,b );
	
	scanf("%f %f", &a, &b);
	
	 
	 area = a*b;
	 
	 
	 perimeter = 2* (a + b);
	 
	 printf(" area = %f\n and perimeter = %f", area, perimeter);
	 
	 return 0;
	 
}
