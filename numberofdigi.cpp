#include<stdio.h>
int main()
{
	int a,b=0;
	printf("Enter a number : ");
	scanf("%d",&a);
	if (a>0)
	{
		while(a!=0)
		{
			a=a/10;
			b++;
		}
	}
	else
	{
		printf("Entered number is not valid");
	}
	printf("number of digits : ");
	printf("%d",b);
	return 0;
}
