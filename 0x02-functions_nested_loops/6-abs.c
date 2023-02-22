#include "main.h"
/**
 * _abs - this function computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
