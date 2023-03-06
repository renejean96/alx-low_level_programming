#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: double pointer to a string
 * @to: pinter to the string to set s to
 * Return: Description of the return value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
