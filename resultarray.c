#include<stdio.h>
int main(){
int i;	
int arr1[5];
printf("enter your marks of five subjects");
for(i=0;i<=4;i++){
	scanf("%d",&arr1[i]);
}
int s;
s=(arr1[0]+arr1[1]+arr1[2]+arr1[3]+arr1[4]);
printf("your total marks are: %d\n",s);
int a;
a=s/5;
printf("your average marks are: %d\n ",a);
float p;
p=s*0.2;
printf("your percentage are: %f\n",p);
for(i=0;i<=4;i++)
	{
		printf("marks[%d]=%d\n",i,arr1[i]);
	}
{
	
	if(p>=75)
	
	{
	printf("you are passsed in exam with distinction grade");
}
   else if(75>p>=60)
	
	
	{
	printf("you are passed in exam with first class grade"); 
	}
	
    else if(60>p>=50)
	{printf("you are passed in exam with second class grade");
	}
	
    else if(50>p>=40)
	{printf("you are passed in exam with third class grade");
	}
	else 

    
		printf("you are fail");
		}

return 0;	
	
	
	
}
