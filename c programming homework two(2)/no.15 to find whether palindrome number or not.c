#include <stdio.h>
int main()
{
	int n, org, rem, rev=0;
	printf("enter a number \t");
	scanf("%d", &n);
	org =n;
	while(n!=0)
	{
		rem = n%10;
		rev= rev*10+rem;
		n= n/10;
		
	}
	if (rev==org)
	printf(" n is palindrome");
	else
	printf(" n is not plaindrome");
	return 0;
}
