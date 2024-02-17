#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i, j;
    size_t len;
    char *str;
    i= 0;
    len = strlen(s1);
    if(*s1 == '\0')
    {
        return(0);
    }
    str = (char *)malloc((len + 1) * sizeof(char));

    j = 0;
    while(s1[i] == set[j])
    {
        i++;
        j++;
         return (NULL);
    }
    while(str[i] != set[j])
    {
        str[i] = *s1++;
        i++;
    }
    return(str);
}

int main()
{
    char a[] = "I am Miin";
    char b[] = "am";

    printf("%s\n",ft_strtrim, a, b);
}