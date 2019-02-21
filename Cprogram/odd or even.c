// Program to find the number is odd or even

#include <stdio.h>
main()
{
	int a;
	printf("Enter A number: ");
	scanf("%d",&a);
	a%=2;
	switch(a)
	{
		case 0:
			puts("The number is Even");
		break;
		case 1:
			puts("The number is odd");
		break;
	}
}
