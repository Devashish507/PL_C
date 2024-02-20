#include<stdio.h>
main()
{
	int basic_pay,hra,ta,tax,gross_salary,total_salary;
	printf("enter your basic pay");
	scanf("%d",&basic_pay);
	hra=basic_pay/10;
	printf("house rent alliance=%d",hra);
	ta=basic_pay/20;
	printf("\nTax Amount =%d",ta);
	tax=2*basic_pay/100;
	printf("\nproffesional tax=%d",tax);
	gross_salary=basic_pay+hra+ta;
	printf("\ngross_salary =%d", gross_salary);
	total_salary=gross_salary-tax;
	printf("\ntotal salary =%d",total_salary);
	
	
}
	
