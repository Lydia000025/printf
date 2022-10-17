#include "main.h"
/**
 * print_hex_base - base function for printing hexadecimal numbers
 * @arg: argument list containing hexadecimal
 * @_case: a  in caps on lower
 * Return: number
 */
int print_hex_base(va_list arg, char _case)
{
	unsigned int num = va_arg(arg, unsigned int);
	int nbrCharacters;

	if (num == 0)
		return (_putchar('0'));
	nbrCharacters = print_unsignedIntToHex(num, _case);
	return (nbrCharacters);
}
/**
 * print_hex - prints a hexadecimal in lower case
 * @arg: list
 * Return: unmber
 */
int print_hex(va_list arg)
{
	return (print_hex_base(arg, 'a'));
}
/**
 * print_HEX - prints a hexadecimal in upper case
 * @arg: list
 * Return: number
 */
int print_HEX(va_list arg)
{
		return (print_hex_base(arg, 'A'));
}
