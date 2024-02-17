#include "libft.h"

char *ft_strnstr(const char *str, const char *find, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if(find[0] == '\0')
    {
        return (str);
    }
    while(str[i] != '\0')
    {
        j = 0;
        while(str[i + j] == find[j] && (i + j) < len)
        {   
            if(find[j + 1] == '\0') 
            {   
             return (str + i); 
            }
            j++;
        }
        i++;
    }
    if(i > len)
    {
        return (0);
    }
    return (0);
}
