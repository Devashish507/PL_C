#include<stdio.h>
float surfacearea();
float volumeofcy();
int main()
{
	surfacearea();
	volumeofcy();
	return 0;
}
float surfacearea()
{
	const float pi=3.14;
	float h,r,tsa;
	printf("Enter height of cylinder ");
	scanf("%f",&h);
	printf("Enter radius of cylinder ");
	scanf("%f",&r);
	tsa=2*pi*r*(r+h);
	printf("Total surface area of cylinder %f",tsa);
}
float volumeofcy()
{
	const float pi=3.14;
	float hh,rr,vol;
	printf("\n Enter height of cylinder ");
	scanf("%f",&hh);
	printf("Enter radius of cylinder ");
	scanf("%f",&rr);
	vol=pi*rr*rr*hh;
	printf("volume of cylinder %f",vol);
		
}

