#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    while(i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}

void *ft_calloc(size_t count, size_t size)
{
    int* ptr;
    if (count == 0 ||size == 0)
    {
        return(NULL);
    }
    ptr = malloc(count * size);
    if(ptr == NULL)
    {
        return (NULL);
    }
    ft_bzero(ptr, count * size);
    return(ptr);
}