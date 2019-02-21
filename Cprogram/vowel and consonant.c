// Find Char is vowel or consonant 

#include <stdio.h>
main()
{
	char a;
	puts("Enter an Alphabet: ");
	a = getchar();
	fflush(stdin);
	switch(a)
	{
		case 'a':
			putchar(a);puts(" is a vowel");
		break;
		case 'o':
			putchar(a);puts(" is a vowel");
		break;
		case 'u':
			putchar(a);puts(" is a vowel");
		break;	
		case 'e':
			putchar(a);puts(" is a vowel");
		break;
		case 'i':
			putchar(a);puts(" is a vowel");
		break;
		default :
			putchar(a);puts(" is a consonant");
		break;
	}
	
}
