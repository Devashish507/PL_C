/*sum of matrices*/
#include<stdio.h>
int main()
{
	int dev[2][2];
	int i,j;
	printf("enter data :");
	for(j=0;j<=1;j++)
	{
		for(i=0;i<=1;i++)
		{
			scanf("%d",& dev[j][i]);
		}
	}
	printf("%d",dev[2][2]);
	return 0 ;
}
