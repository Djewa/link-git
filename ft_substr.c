#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int len_s = ft_strlen(s);
    len = ft_strlen(substr);
    start = 0;
    
    substr = (char *)malloc((len + 1) * sizeof(char));
    if(substr == '\0')
    {
        return (0);
    }

    while(start < len)
    {
        substr[start] = s[start];
        start++;
    }
    while(len + start < len_s || len > len_s)
    {
        
    }
    sub(start) == '\0';
    return (substr);
}