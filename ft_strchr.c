#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if(s[i] == '\0')
    {
        return (NULL);
    }
    
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            return(char *)(&s[i]);
        }
        i++;
    }
    if(c == '\0')
    {
        return(char *)(&s[i]);
    }
    return (NULL);
}

int main()
{
    char str[] = "Hello Wolrd";
    char c = 'a';
    char* p = ft_strchr(str, c);
     
     if(p != NULL)
     {
        printf("Looking for %c\n", *p);
        printf("Found at position %d\n", p - str);
        printf("String after |%c| is - |%s|\n", c, p);
     }
     else
     {
        printf("Not found");
     }

    return 0;
}