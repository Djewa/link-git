#include <stdlib.h>
#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len;
    char    *str;
    int i;

    if (*s1 == '\0' || *s2 == '\0')
    {
        return (NULL);
    }
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((len + 1) * sizeof(char)); // +1 for null
    if (str[i] == '\0')
    {
        return (str);
    }
    i = 0;
    while (*s1 != '\0')
    {
        str[i++] = *s1++;
    }
    while (*s2 != '\0')
    {
        str[i++] = *s2++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
   char *prefix = "abc";
   char *suffix = "defgh";
   printf("%s\n", ft_strjoin(prefix, suffix));
   return (0);
}