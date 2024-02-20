#include <stdio.h>
int main()
{
	int a,b ;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	printf("Before swapping \n");
	printf("%d \n ",a);
	printf("%d \n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" after swapping \n");
	printf(" %d \n",a);
	printf(" %d \n",b);
	return 0 ;
	
	
}
