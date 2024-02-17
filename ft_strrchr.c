#include "libft.h"

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);

    if(s[i] == '\0')
    {
        return (NULL);
    }

    while(i >= 0)
    {
        if(s[i] == c)
        {
            return(char *)(&s[i]);
        }
        i--;
    }
   
    if(c == '\0')
    {
        return(char *)(&s[i]);
    }
    return (NULL); 
}