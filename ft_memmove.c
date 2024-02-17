#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t len)
{
    unsigned char *dest;
    unsigned char *src;
    size_t i;

    i = 0;

    dest = (unsigned char *)s1;
    src = (unsigned char *)s2;

    if(dest[i] == '\0' && src[i] == '\0')
    {
        return(NULL);
    }

    if(dest > src)
    {
        while(len > 0)
        {
            dest[len] = src[len];
            len--;
        }
    }
    else
    {
        while(i < len)
        {
            dest[i] = src[i];
            i++;
        }
    }
    return(dest);
}


#include <stdio.h>
#include <string.h> 
int main()
{
    char str1[] = "Hello World";
    char str2[20];

    ft_memmove(str2, str1, strlen(str1) + 1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return(0);

}