#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strrchr(char *s, int c)
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

#include <string.h>
int main()
{
   int len;
   const char str[] = "Hello World";
   const char c = 'a';
   char* ret = strrchr(str, c);
   
    if(ret != NULL)
    {
        printf("Looking for %c\n", *ret);
        printf("Found at position %d\n", ret - str);
        printf("String after |%c| is - |%s|\n", c, ret);
    }
    else
     {
        printf("Not found");
     }
   
   return(0);

}