#include <stdio.h>
struct no
{
	int real[10];
	int ima[10];
}t[2];
int main()
{
	int n,i;
	printf("\n Enter case 1 for reading complex number");
	printf("\n Enter case 2 for addition of complex numbers");
	printf("\n Enter case 3 for substraction of complex numbers");
	printf("\n Enter case 4 for multiplication of complex on");
	printf("\nEnter the case : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			for(i=0;i<2;i++)
			{
				printf("Enter real part of %dth number : ",i+1);
				scanf("%d",&t[i].real[i]);
				printf("Enter imaginary part of %dth number : ",i+1);
				scanf("%d",&t[i].ima[i]);
			}
			printf("\nThe first complex number is %d+%di",t[0].real[0],t[0].ima[0]);
			printf("\nThe second complex number is %d+%di",t[1].real[1],t[1].ima[1]);
			break;
		case 2:
			for(i=0;i<2;i++)
			{
				printf("Enter real part of %dth number : ",i+1);
				scanf("%d",&t[i].real[i]);
				printf("Enter imaginary part of %dth number : ",i+1);
				scanf("%d",&t[i].ima[i]);
			}
			printf("\nThe first complex number is %d+%di",t[0].real[0],t[0].ima[0]);
			printf("\nThe second complex number is %d+%di",t[1].real[1],t[1].ima[1]);
			int io;
			int op;
			io=t[0].real[0]+t[1].real[1];
			op=t[0].ima[0]+t[1].ima[1];
			printf("\nThe addition of complex numbers is %d+%di",io,op);
			break;
		case 3:
			for(i=0;i<2;i++)
			{
				printf("Enter real part of %dth number : ",i+1);
				scanf("%d",&t[i].real[i]);
				
				printf("Enter imaginary part of %dth number : ",i+1);
				scanf("%d",&t[i].ima[i]);
			}
			printf("\nThe first complex number is %d+%di",t[0].real[0],t[0].ima[0]);
			printf("\nThe second complex number is %d+%di",t[1].real[1],t[1].ima[1]);
			int co;
			int lo;
			co=t[0].real[0]-t[1].real[1];
			lo=t[0].ima[0]-t[1].ima[1];
			printf("\nThe substraction of complex numbers is %d+%di",co,lo);
			break;
		case 4:
			for(i=0;i<2;i++)
			{
				printf("Enter real part of %dth number : ",i+1);
				scanf("%d",&t[i].real[i]);
				printf("Enter imaginary part of %dth number : ",i+1);
				scanf("%d",&t[i].ima[i]);
			}
			printf("\nThe first complex number is %d+%di",t[0].real[0],t[0].ima[0]);
			printf("\nThe second complex number is %d+%di",t[1].real[1],t[1].ima[1]);
			int m1,m2;
			m1=(t[0].real[0]*t[1].real[1])-(t[0].ima[0]*t[1].ima[1]);
			m2=(t[0].real[0]*t[1].ima[1])+(t[0].ima[0]*t[1].real[1]);
			printf("\nThe multiplication of complex numbers is %d+%di",m1,m2);
			break;
	}
	return 0;
}
