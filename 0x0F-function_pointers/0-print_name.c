#include "function_pointers.h"

/**
*print_name - a function that prints name
*@name:character pointer for passing the string name
*@f:function pointer to pass a function as an argument
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f (name);
}
