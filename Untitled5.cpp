#include<stdio.h>
float nov();
int main()
{
	int a,bb,b,c;
	c=a;
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		bb=(a%10);
		a=a/10;	
	}
	return 0;
}
float nov(int a,int b)
{
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		b++;
	}
	
}
