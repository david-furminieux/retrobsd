/*
 * Copy s2 to s1, truncating or null-padding to always copy n bytes
 * return s1
 */
#include <string.h>

char *
strncpy(s1, s2, n)
	register char *s1;
	register const char *s2;
	size_t n;
{
	register int i;
	register char *os1;

	os1 = s1;
	for (i = 0; i < n; i++)
		if ((*s1++ = *s2++) == '\0') {
			while (++i < n)
				*s1++ = '\0';
			return(os1);
		}
	return(os1);
}
