int check_seperators(char c);

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (k == 0 && (s[k] >= 'a' && s[k] <= 'z'))
			s[k] -= 32;

		if (check_seperators(s[k]) && (s[k + 1] >= 'a' && s[k + 1] <= 'z'))
			s[k + 1] -= 32;
		k++;
	}

	return (s);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int k = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; k < 13; k++)
	{
		if (c == seperators[k])
			return (1);
	}
	return (0);
}
