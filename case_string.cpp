#include<stdio.h>
#include<string.h>

int main()
{
	int n,len1,len2;
	char s1[10],s2[10],s3[10];

	printf("Enter the string :");
	scanf("%s",s1);
	printf("Enter the string :");
	scanf("%s",s2);
	printf("\n Enter case 1 for copy string");
	printf("\n Enter case 2 for reverse string");
	printf("\n Enter case 3 for length string");
	printf("\n Enter case 4 for concatination string");
	printf("\nEnter the case : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Copy one string to another :");
			strcpy(s3,s1);
			printf("Now string 2 is %s",s2);
			break;
		
		case 2:
			printf("Reverse string : ");
			strrev(s1);
			printf("%s",s1);
			strrev(s2);
			printf("%s",s2);
			break;
			
		case 3:
			printf("Length of string is : ");
			len1=strlen(s1);
			len2=strlen(s2);
			printf("\nThe lengths are l1=%d",len1);
			printf("\nThe lengths are l1=%d",len2);
			break;
		
		case 4:
			strcat(s1,s2);
			printf("\ns1=%s",s1);
			printf("\ns2=%s",s2);
			break;
			
	}
	return 0;


}

