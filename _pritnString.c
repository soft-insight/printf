/**
 * _printString - prints a string
 * @arguments: valist
 *
 * Return: the string copied to dest
 */


char *_printString(va_list arguments)
{
	char *str;
	char *dest;
	int len;

	str = va_arg(arguments, char *);
	if (str == NULL)
		str = "(null)";

	len = _strlen(str);

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	return (_strcpy(dest, str));
}

/**
* _strlen - returns length of a string
* @s: the string
*
* Return: the lenght
*/

int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;
	return (i);
}

/**
* _strcpy - copy an array pointed to by src to dest
* @dest: the dest
* @src: the source
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = src[i];
	return (dest);
}
