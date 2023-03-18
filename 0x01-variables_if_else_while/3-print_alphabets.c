#include <stdio.h>

int main ()
{
	char x;
	/*print lowercase alphabet*/
	for (x = 'a'; x <= 'z' ; x++)
	{
		putchar(x);
	}

	/*print uppercase alphabet*/
	for(x = 'A'; x <= 'Z' ; x++)
	{
		putchar(x);
	}

	/*print newline character*/
	putchar('\n');

	return 0;
}
