#include "libft.h"

size_t ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t ft_strlcat(char *dest, const char *src, size_t destsize) 
{
    unsigned int i;
    unsigned int j;
    int dest_len;
    int result;

    i = 0;
    j = 0;
    dest_len = ft_strlen(dest);

    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[i] != '\0' && j < destsize - dest_len - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (i+j);
}