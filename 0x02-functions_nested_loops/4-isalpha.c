#include "main.h"
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returning 1 function to print
 * Return: 1 if lowercase and upprtcase and 0 if a letter.
 */
int _isalpha(int c)
{
	char lower, upper;
	int ischar = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				ischar = 1;
		}
	}
	return (ischar);
}
