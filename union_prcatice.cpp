#include<stdio.h>
union employee
{
	char name[100];
	char designation[100];
	int bpay;
};
union employee u;
int main()
{
	printf("Enter your name : ");
	scanf("%s",& u.name);
	printf("Enter your designation : ");
	scanf("%s",& u.designation);
	printf("Now , Enter your basic pay : ");
	scanf("%d",& u.bpay);
	float ta,da,total;
	ta = u.bpay/20;
	da = u.bpay/50;
	total = ta + da + u.bpay;
	printf("You recieved a gross salary of %f",total);
	printf("%d",sizeof(employee));
	return 0;


}

