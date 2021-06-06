#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t    i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	if (!dest && !src)
		return (0);
	if (size == 0)
		return (0);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
