#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of terms you want to enter : ");
	scanf("%d",& n);
	int dev[100],large=0;
	printf("Enter  numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",& dev[i]);
	}
	for(j=0;j<n;j++)
	{
		if(dev[j]>dev[j+1])
		{
			if(large<dev[j])
			{
				large=dev[j];
			}
		}
		
	}
	printf("The largest number is : %d",large);
	return 0;
	
	
}
