#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number:");
	scanf("%d", &a);
	if(a == 1)
		printf("1 is neither prime not composite");
	else
	{
		int b = 0;
		for(int i = 1; i <= a; i++)
		{
			if(a % i == 0)
			{
				b++;
			}
		}
		if(b == 2)
		{
			printf("%d is a prime number", a);
		}
		else
		{
			printf("%d is not a prime number", a);
		}
	}
}

