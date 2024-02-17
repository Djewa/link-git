#include "libft.h"

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *str;

    i = 0;
    str = (const unsigned char *)s;

    if(str[i] == '\0')
    {
        return (NULL);
    }

    while(str[i] != '\0' && i < n)
    {
        if(str[i] == (unsigned char)c)
        {
            return ((void *)str + i);
        }
        i++;
    }

    if((unsigned char)c == '\0')
    {
        return ((void *)str + i);
    }
    
     return (NULL);
}