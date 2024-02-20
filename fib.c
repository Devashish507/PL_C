#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	int b= 0;
	printf("%d",b);
	
	int c=1;
	printf("%d",c);
	int m= b+c;
	printf("%d",m);
	for(i=3;i<=n;i++)
	{   
		int b=c;
		int m=c;
		m=b+c;
		printf("%d",m);
	}
	return 0;

}
	
