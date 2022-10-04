#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space in memory
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated after s1
 * Return: A pointer to the newly allocated memory, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	chr *concat_str;
	int index, concat_index = 0, len = 0;

	if (as1 == NULL)
		as1 = "";

	if (as2 == NULL)
		as2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);

}
