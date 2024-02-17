#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    int i;

    i = 0;
    if(destsize == 0)
    {
        while(src[i] != '\0')
        {
            i++;
            return (i);
        }
    }
    while(src[i] != '\0' && i < destsize - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if(i < destsize)
    {
        dest[i] = '\0';
    }
    return (i);
}