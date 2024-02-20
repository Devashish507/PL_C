#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",& num);
	int a,k,sum = 0;
	a=num;
	while(num !=0)
	{
		k=num%10;
		num=num/10;
		sum = sum*10 + k;
		n=n-1;
	}
	if(a==sum)
	{
		printf("The number is palandrome");
	}
	else
	{
		printf("The number is not palandorme");
	}
	return 0;
}
