#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *dest;
    const unsigned char *src;
    size_t i;

    i = 0;
    dest = (unsigned char *)s1;
    src = (const unsigned char *)s2;

    while(src[i] != '\0' && dest[i] != '\0' &&  i < n)
    {
        if (dest[i] != src[i])
        {
            return (dest[i] - src[i]);
        }
        i++;
    }
    return (0);
}