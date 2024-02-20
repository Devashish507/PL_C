/*prime number*/
#include<stdio.h>
int main()
{
	int i,a;
	int flag=1 ;
	printf("Enter a number ");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Number is not prime nor composite ");
	}
	else
	{
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("Number is not prime ");
	}
	else
	{
		printf("Number is  prime ");
	}
	}
}
