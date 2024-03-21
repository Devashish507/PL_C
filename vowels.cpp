#include<stdio.h>
#include<string.h>

int main()
{
	char op[20],vowel[20];c[20];
	printf("Enter your string : ");
	scanf("%s",op);
	int i,len,j=0,k=0;
	len=strlen(op);
	for(i=0;i<=len;i++)
	{
		if(op[i]=="a"||op[i]=="e"||op[i]=="i"||op[i]=="o"||op[i]=="u")
		{
			vowel[j]=op[i];
			j++;
		}
		else
		{
			c[k]=op[i];
			k++
		}
	}
	printf("Vowels : ");
	for(i=0;i<strlen(vowel);i++)
	{
		printf(vowel[i]);
	}
	printf("\nConsonants : ")
	for(i=0;i<strlen(c);i++)
	{
		printf(c[i]);
	}


}

