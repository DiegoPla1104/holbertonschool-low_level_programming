#include "holberton.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int aapa, eepa, iipa, oopa, uupa;

	for (aapa = 0; aapa <= 9; aapa++)
	{
		for (eepa = 0; eepa <= 9; eepa++)
		{
			iipa = aapa * eepa;

			if (iipa > 9)
			{
				oopa = iipa % 10;
				uupa = (iipa - oopa) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(uupa + '0');
				_putchar(oopa + '0');
			}
			else
			{
				if (eepa != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(iipa + '0');
			}
		}

		_putchar('\n');
	}
}

