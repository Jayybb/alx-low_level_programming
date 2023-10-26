#include "main.h"

/**
 * flip_bits -  fxn that returns the number of bits you would need to flip
 * @n: first number of the bit
 * @m: second number of the bit
 *
 * Return: number of bits for change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
