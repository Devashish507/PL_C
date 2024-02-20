#include<stdio.h>
float volume();
int main()
{
	volume();
	return 0;
}
float volume()
{
	float a,s;
	printf("Enter side of cube ");
	scanf("%f",&a);
	s=a*a*a;
	printf("volume of cube %f",s);
}

