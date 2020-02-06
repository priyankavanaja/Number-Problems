#include <stdio.h>
int number()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	return num;
}
int reverse_number(int num)
{
	int n=num;
	int rev=0,digit;
	while (n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("\nthe reverse of %d is %d\n",num,rev);
	return rev;
}

void palindrome()
{
	int rev;
	int num=number();
	rev=reverse_number(num);
	if (num==rev)
	{
	printf("\nthe input is a palimdrome\n");
	}
	else printf("\n not a palindrome\n");
}

int main(int argc, char *argv[])
{
	palindrome();
	
	return 0;
}
