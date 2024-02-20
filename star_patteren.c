#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=4;i++)
	{
		int j;
		for(j=0;j<=i;j++)
		{
		printf("* ",j);	
		}
		printf("\n");
	}
	
	return 0;
}
