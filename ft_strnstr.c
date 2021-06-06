#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t    i;
	size_t    j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if ((i + j) > len)
			return (NULL);
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		if (haystack[i + j] == needle[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
