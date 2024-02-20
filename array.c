/*array*/
#include<stdio.h>
int main()
{
	int dev[5];
	int i=1;
	printf("enter data :");
	while(i<=5)
	{
		scanf("%d",& dev[i-1]);
		i=i+1;
	}
	int k=0;
	while(k<=5)
	{
		printf("%d \n",dev[k]);
		k++;
	
	}
	return 0 ;
}
