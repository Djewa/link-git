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

char *ft_strdup(const char *s)
{
    char *str;
    size_t len;
    
    len = ft_strlen(s);
   
    str = (char *)malloc((len + 1) * sizeof(char));
    if(str[len] == '\0')
    {
        return(NULL);
    }

    while (len >= 0)
    {
        str[len] = s[len];
        len--;
    }
    str[len] = '\0';
    return(str);
}