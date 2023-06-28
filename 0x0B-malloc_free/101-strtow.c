#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int count = 0, i = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (str[i] && str[i] == ' ')
			i++;

		if (str[i])
		{
			count++;

			while (str[i] && str[i] != ' ')
				i++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i = 0;
	int len, word_len, j, k;
	i = 0;
	j = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	while (i < len && j < word_count)
	{

		while (str[i] && str[i] == ' ')
			i++;

		if (str[i])
		{
			word_len = 0;


			while (str[i + word_len] && str[i + word_len] != ' ')
				word_len++;

			words[j] = malloc((word_len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}


			for (k = 0; k < word_len; k++)
			{
				words[j][k] = str[i + k];
			}
			words[j][word_len] = '\0';

			j++;
			i += word_len;
		}
	}

	words[j] = NULL;

	return (words);
}
