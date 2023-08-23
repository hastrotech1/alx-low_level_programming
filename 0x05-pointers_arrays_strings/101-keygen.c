#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random valid passwords
 *
 * Return: gives 0 as output
 */
int main(void)
{
	int joe[100];
	int ffs, tf, mf;

	tf = 0;
	srand(time(NULL));
	for (ffs = 0; ffs < 100; ffs++)
	{
		joe[ffs] = rand() % 78;
		tf += (joe[ffs] + '0');
		putchar(joe[ffs] + '0');
		if ((2772 - tf) - '0' < 78)
		{
			mf = 2772 - tf - '0';
			tf += mf;
			putchar(mf + '0');
			break;
		}
	}
	return (0);
}
