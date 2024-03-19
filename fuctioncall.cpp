#include<stdio.h>
int add(int a,int b)
{
	printf("%d",a+b);
}
int main()
{
	int l=10,*ptr1,*ptr2;
	int m=20;
	ptr1=&l;
	ptr2=&m;
	add(*ptr1,*ptr2);
	return 0;

}

