#include <stdio.h>

 /**
  * main - Entry point
  * Description: prints alphabets in lower case.
  * Return: Always (0)
  */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
