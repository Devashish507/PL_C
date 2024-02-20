/*area of rectangle as function*/
#include<stdio.h>
float area();
int main()
{
	area();
	return 0;
}
float area()
{
	float a,b,c;
	printf("Enter length of rectangle ");
	scanf("%f",&a);
	printf("Enter breadth of rectangle ");
	scanf("%f",&b);
	c=a*b;
	printf("Area of rectangle %f",c);
}

