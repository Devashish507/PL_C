#include<stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>=0){
		
		if(n%2==0){
			printf("%d is positive and even number",n);
		}
		else{
			printf("%d is positive and odd number",n);
		}
	}
	else{
		if(n%2==0){
			printf("%d is negative and even number",n);
		}
		else{
			printf("%d is negative and odd number",n);
		}
	}
	return 0;
}
