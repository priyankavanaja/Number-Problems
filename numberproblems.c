#include <stdio.h>
#include<stdlib.h>
#include<math.h>


void divisors()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	for (int i=1;i<=num ;i++ )
	{
		if (num%i==0)
		{
			printf("%d\t",i);
		}
	}
}

void factorial()
{
	int num,fact=1;
	printf("enter the number\n");
	scanf("%d",&num);
	if (num>0)
	{
		for (int i=1;i<=num ;i++ )
		{
			fact=fact*i;
		}
		printf("the factorial is %d\n",fact);
	}
	else printf("invalid input\n");
}
	
void frequencycount()
{
	int num,digit,count=0,res=0;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the digit to count\n");
	scanf("%d",&digit);
	while(num>0)
	{
	res=num%10;
	
	if (res==digit)
	{
		count++;
	}
	num=num/10;
	}

	printf("the count is %d\n",count);
}

void sumofdigits()
{
	int num,digit,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	int i=num;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("the sum of digts of %d is %d\n",i,sum);
}

void onedigitsum()
{
	int num,digit,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	int i=num;
	while (sum>9)
	{
		while(num>0)
		{
			digit=num%10;
			sum=sum+digit;
			num=num/10;
		}
	}
	printf("the sum of digts of %d is %d\n",i,sum);
}

void number_of_digits_of_number()
{
	int num,n,count=0;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num;
	while (n>0)
	{
		n=n/10;
		count++;
	}
	printf(".number of digits of number in %d is %d\n",num,count);
}

void reverse_number()
{
	int num,n,digit;
	int rev;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num;
	rev=0;
	while (n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("\nthe reverse of %d is %d\n",num,rev);
}

void palindrome()
{
	int num,n,digit,rev;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num;
	rev=0;
	while (n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("\nthe reverse of %d is %d\n",num,rev);
	if (num==rev)
	{
	printf("\nthe input is a palimdrome\n");
	}
	else printf("\n not a palindrome\n");
}

void gcd()
{
	int a,b,gcd;

	printf("\nenter the two numbers\n");
	scanf("%d %d",&a,&b);

	if (a==0&& b==0)
	{
		printf("\ninvalid number ");
	}
	while (b!=a)
	{
		if (b>a)
		{
			b=b-a;
		}
		else a=a-b;
	}
	gcd=b;
	printf("\n the Gcd is %d\n",gcd);

}

void lcm()
{
	int a,b,m,n,gcd,lcm;

	printf("\nenter the two numbers\n");
	scanf("%d %d",&a,&b);
	m=a;
	n=b;
	while (n!=m)
	{
		if (n>m)
		{
			n=n-m;
		}
		else m=m-n;
	}
	gcd=n;
	lcm=(a*b)/gcd;
	printf("\n the lcm is %d\n",lcm);
}
void armstrong()
{
	int num,n,digit,sum=0;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num;
	while (num!=0)
	{
		digit=num%10;
		sum=sum+(digit*digit*digit);
		num=num/10;
	}
	if (n==sum)
	{
		printf("the number is a armstrong\n");
	}
	else printf("the number is not a armstrong\n");
}
void check_prime_number()
{
	int num,n;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num;
	 for (int i=2;i<=num/2 ;i++ )
	 {
		 if (num%i==0)
		 {
			 printf("Not a prime number\n");
			 exit(0);
		 }
	 }
	printf("%d a prime number",n);
}

void prime_number()
{
	/*int m,n;
	printf("\nenter the range to display prime number\n");
	scanf("%d %d",&m,&n);

		for (int i=m;i<n ;i++ )
		{
			int k=(int )sqrt(m);

			for (int j=2;j<=k;j++ )
			{
				if (m%j==0)
				{
					flag=0;
				}
			}
		}*/
}


int main(int argc, char *argv[])
{
	int choice;
	int res;
	while (1)
	{
		printf("Menu \n1.all divisors of given nummber\n2.factorial\n3.frequency count of a digit in a number\n4.sum of digits\n5.sum of digits until the result is a one digit number\n6.number of digits of number\n7.reverse a number\n8.number palindrome\n9.GCD\n10.LCM\n11.Armstrong\n12.check for prime number\n13 N prime numbers\n");
		printf("14.\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: divisors();
			break;
			case 2: factorial();
			break;
			case 3: frequencycount();
			break;
			case 4: sumofdigits();
			break;
			case 5: onedigitsum();
			break;
			case 6: number_of_digits_of_number();
			break;
			case 7: reverse_number();
			break;
			case 8: palindrome();
			break;
			case 9: gcd();
			break;
			case 10:lcm();
			break;
			case 11:armstrong();
			break;
			case 12:check_prime_number();
			break;
			case 13:prime_number();
			break;

			default:exit(0);
		}
	}
	return 0;
}
