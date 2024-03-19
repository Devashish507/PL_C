#include<stdio.h>

int main()
{
	int* pta;
	int* ptb;
	int a,b;
	scanf("&d",&a)
	pta=&a;
	ptb=&b;
	printf("\n%d",pta);
	printf("\n%d",pta+1);
	printf("\n%d",pta+2);
	printf("\nAddition of a and b is %d",a+b);
	printf("\nAddition of a and b is %d",*pta + *ptb);
	return 0;

}

