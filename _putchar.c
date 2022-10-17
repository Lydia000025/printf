#include <unistd.h>
/**
 * _putchar - wtites char
 * @c: char
 * Return: 0
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
