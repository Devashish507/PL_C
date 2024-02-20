#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of terms you want to enter : ");
	scanf("%d",& n);
	int dev[10],sumofeven=0,sumofodd=0;
	printf("Enter  numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",& dev[i]);
	}
	for(j=0;j<n;j++)
	{
		if(dev[j]%2==0)
		{
			sumofeven=sumofeven+dev[j];
		}
		else
		{
			sumofodd= sumofodd+dev[j];
		}
	}
	printf("Sum of even : %d",sumofeven);
	printf("\n Sum of odd : %d",sumofodd);
	return 0 ;
}
