#include "main.h"
/**
 * main - a function that prints 10 times letters in lowercase
 *Return - always 0
	 */
int main(void)
{
		int i;
char m;

		i = 0;


		while (i < 10)
		{
			m = 'a';
			while (m <= 'z')
			{
				_putchar(m);
				m++;
			}
			_putchar('\n');
			i++;
		}
		return (0);
	}

