#include<stdio.h>
float rev(int num);
int main()
{
	int num,var,a;
	printf("Enter a number : ");
	scanf("%d",& num);
	if(num !=0)
	{
		rev(num);
	}
	return 0 ;
}
float rev(int num)
{
	int var;
	var=num%10;
	num=num/10;
	printf("%d",var);
	if(num !=0)
	{
		rev(num);
	}
}
