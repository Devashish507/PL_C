/*sum till n numbers*/
#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	int i=1;
	printf("Enter number till which you want sum :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n %d",i);
		sum=sum+i;
		i=i+1;
	}
	printf("\n %d sum of numbers is",sum);
	return 0;
}
