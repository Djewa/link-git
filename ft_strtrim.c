#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    size_t  len;
    char    *str;

    i = 0;
    len = ft_strlen(s1) - 1;
    if (*s1 == '\0')
    {
        return(NULL);
    }
    if (*set == '\0')
    {
        return (s1);
    }

    str = (char *)malloc((len + 1) * sizeof(char));
}

int main()
{
    char a[] = "abcdabc";
    char b[] = "ab";

    printf("%s\n",ft_strtrim, a, b);
}