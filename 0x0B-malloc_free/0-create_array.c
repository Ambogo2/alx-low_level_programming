#include "main.h"
#include <stdlib.h>

/** create_array - a function that prints the array oc characters
 * @size: size of the character
 * @c: initial value
 * Return : a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size , char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	
	array = (char *)malloc(size * sizeof(char));
		if (array == NULL)
			return ("Memory allocation failed");
	
	for (i = 0 ; i <size ; i++)
		array[i] = c;
	return (array);
}
