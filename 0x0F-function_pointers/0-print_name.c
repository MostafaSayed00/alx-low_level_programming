#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f : the pointer print function
 * @name : the string name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
