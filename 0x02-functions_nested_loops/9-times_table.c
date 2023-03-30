#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 */
void times_table(void)
{
    int i, j, res;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            res = i * j;

            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (res < 10)
            {
                _putchar(' ');
            }
            else
            {
                _putchar((res / 10) + '0');
            }

            _putchar((res % 10) + '0');

            if (j == 9)
            {
                _putchar('\n');
            }
        }
    }
}
