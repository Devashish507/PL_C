#include<stdio.h>
int main()
{
	int n1,n2,ans,choice;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	printf("****Choices****");
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
	printf("\nEnter Your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		ans= n1+n2;
		printf("addition: %d",ans);
		break;
		case 2:
		ans= n1-n2;
		printf("subtraction:%d ",ans);
		break;
		case 3:
		ans= n1*n2;
		printf("multiplication:%d ",ans);
		break;
		case 4:
		ans= n1/n2;
		printf("division: %d",ans);
		break;
		
	
	}
	return 0;
	
}
