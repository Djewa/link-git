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

#include <stdio.h>
int main()
{
    int len;
    char a[] = "Miin Djewapat";
    len = ft_strlen(a);
    printf("%d\n", len);
}