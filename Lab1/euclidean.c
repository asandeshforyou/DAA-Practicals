#include <stdio.h>
#include<stdbool.h>
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int main()
{
	int a, b,wish=1;
	//while(wish==1)
	//{
	//printf("*********************************************\n");
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("GCD is: %d",gcd(a,b));
	//printf("\n*********************************************\n");
	//printf("Press 1 to continue or 0 to exit: ");
	//scanf("%d",&wish);
	//}
	return 0;
}

