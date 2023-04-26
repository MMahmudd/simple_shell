#include "shell.h"

/**
 * bfree - free a pointers and NULL the addresses
 * @ptr: address of the pointers to frees
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
