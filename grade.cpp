#include<stdio.h>
int main()
{
	int a,b,c,d,e,total,per;
//	take input from users
	printf("Enter your english marks = ");
	scanf("%d",&a);
	printf("Enter your math marks = ");
	scanf("%d",&b);
	printf("Enter your science marks = ");
	scanf("%d",&c);
	printf("Enter your history marks = ");
	scanf("%d",&d);
	printf("Enter your marathi marks = ");
	scanf("%d",&e);
//    check wheater all of them are above 40	
	if(a>=40 &&b >=40&& c>=40 && d>=40 && e>=40)
	{
		printf("you are passed");
//	if pass then calculate total and percentage
	    total=(a+b+c+d+e);
	    per=total/5;
//	    allot grades
		if(per>75)
		{
		printf(" exam with distinction");
		}
		else if(per>60 && per<=75)
		{
		printf(" exam with first grade");
		}
		else if(per>50 && per<=60)
		{
		printf(" exam with second grade");
		}
		else if(per>40 && per<=50)
		{
		printf(" exam with third class");
		}
	}
//	else failed
	else
	{
		printf("you failed the exam");
	}
}                                                                                                                                                                                                                                                   
