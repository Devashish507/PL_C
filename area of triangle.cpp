/*area of triangle with semiperimeter as function*/
float area();
int main()
{
	area();
	return 0;
}
float area()
{
	float a,b,c,s,a1;
	printf("Enter first side of triangle ");
	scanf("%f",&a);
	printf("Enter second side of triangle ");
	scanf("%f",&b);
	printf("Enter third side of triangle ");
	scanf("%f",&c);
	s=(a+b+c)/3;
	a1=sqrt{(s*(s-a)*(s-b)*(s-c))} ;
	printf("Area of triangle %f",a1);
}
