#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
    size_t i;
   
    i = 0;
    if(((unsigned char *)s1)[i] == '\0' && ((unsigned char *)s2)[i] == '\0')
    {
        return (NULL);
    }
    while(i < n)
    {
        ((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
        i++;
    }
}

#include <stdio.h>
#include <string.h> 
int main()
{
    char    str[100] = "Learningisfun";
    char    *str1;
    char    *str2;
    str1 = str;
    str2 = str;

    printf("Original String = %s\n", str);
    ft_memmove(str1 + 8, str2, 10);
    printf("str: %s\n", str);

    return(0);

}