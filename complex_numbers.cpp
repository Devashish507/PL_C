#include<stdio.h>
struct no
{
	int real[10];
	int ima[10];
}t[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter real part of %dth number : ",i+1);
		scanf("%d",t[i].real[i]);
		printf("Enter imaginary part of %dth number : ",i+1);
		scanf("%d",t[i].ima[i]);
	}
	printf("The first complex number is %d+%di",t[0].real[0],t[0].ima[0]);
	printf("The second complex number is %d+%di",t[1].real[1],t[1].ima[1]);
	int io;
	int op;
	io=t[0].real[0]+t[1].real[1];
	op=t[0].ima[0]+t[1].ima[1];
	printf("The addition of complex numbers is %d+%di",io,op);
	return 0;
}


