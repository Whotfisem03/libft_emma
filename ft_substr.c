#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int z;
    char *dest;

    dest = NULL;
    z = 0;
    i = 0;
    if (!s)
        return (NULL);
    while (i < start)
        i++;
    dest = malloc(sizeof(char) * len + 1);
    if (!dest)
        return (NULL);
    while (s[i] && start <= ft_strlen(s))
    {
        if (i >= start)
        {
            dest[z] = s[i];
            z++;
        }
        i++;
    }
    dest[len] = '\0';
    return (dest);
}
