#include "main.h"
/**
 * wildcmp - Compares two strings
 * @s1 : char
 * @s2 : char
 * Return: the integer length
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 == '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 , s2 + 1) || (*s2 != '\0' && wildcmp(s1 + 1 , s2)));
	return (0);
}
