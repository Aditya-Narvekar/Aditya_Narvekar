#include<stdio.h>
void main()
{
	int a, b = 0, i;
	printf("Enter any number:");
	scanf("%d", &a);
	if(a == 1)
		printf("1 is neither prime not composite");
	else
	{
	for(i = 1; i <= a; i++)
	{
		if(a % i == 0)
		{
			b++;
		}
	}
	if(b == 2)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
	}
}

