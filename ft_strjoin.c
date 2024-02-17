#include <stdlib.h>
#include <stdio.h>


size_t ft_strlen(const char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char *ft_strdup(const char *s)
{
    size_t len;
    char *str;
    len = ft_strlen(s);

    str = (char *)malloc((len + 1) * sizeof(char));
    if (str[len] == '\0')
    {
        return(NULL);
    }
    while(len >= 0)
    {
        str[len] = s[len];
        len--;
    }
    str[len] ='\0';
    return(str);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *str;
    int i, j;

    if(*s1 == '\0' || *s2 == '\0')
    {
        if(*s1 == '\0')
        {
            return(ft_strdup(s1)); // return NULL ?
        }       
        else if (*s2 == '\0')
        {
            return(ft_strdup(s2));
        }
        else
        {
            return(ft_strdup(""));
        }
    }

    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((len + 1) * sizeof(char)); // +1 for null
    if (str[i] == '\0')
    {
        return(str);
    }
    i = 0;
   
    while(s1[i] != '\0')
    {
        str[i] = s1[i];
        i++; 
    }
    j = 0;
    while(s2[j] != '\0')
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return(str);
}

int main()
{
   char *prefix = "abc";
   char *suffix = "defgh";
   printf("%s\n", ft_strjoin(prefix, suffix));
   return (0);
}