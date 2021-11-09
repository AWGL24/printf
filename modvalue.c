#include "main.h"
/**
 * modvalue - function that returns 1 if there is any match
 * @mod: array
 * @idx: char to be compared
 * Return: 1 if match 0 if not
 */
int modvalue(char mod[], char idx)
{
	int i;

	for (i = 0; mod[i] != '\0'; i++)
	{
		if (mod[i] == idx)
			return (1);
	}
	return (0);
}
