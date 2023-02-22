#include <unistd.h>

/**
 * _putchar - i am writting the putchar now
 * @c: The letter to print
 * Return: On Success 1.
 * On error, -1 is returned and error is set
 */

int _putchar(char c)

{

	return (write(1, &c, 1));
}
