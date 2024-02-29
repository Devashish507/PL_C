#include<stdio.h>
#include<string.h>
int main()
{
	char dev[20];
	int i;
	printf("Enter the string : ");
	scanf("%s",dev);
	int len;
	len=strlen(dev);
	printf("Length of string is %d",len);
	char lamao[20];
	strcpy(lamao,dev);
	printf("\n %s",lamao);
	strrev(dev);
	printf("\n Reverse of string is %s",dev);
	printf("\n%c",dev[94]);
	return 0;
}

