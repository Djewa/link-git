#include <stdio.h>

char *ft_strnstr(char *str, char *find, size_t len)
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
        while(str[i + j] == find[j] && (i + j) < len) // i + j ex. when find the first char in to_find if it is str[5] and to_fing[0] it's 5 and the second char it will be str[5] + to_find[1] so it will be position [6] until the end 
        {   
            if(find[j + 1] == '\0') // j + 1 to find '\0' -- + 1 to find when str is '\0' 
            {   
             return (str + i); // (char *)(&str[i]) == (str + i)
            }
            j++;
        }
        i++; // loop array str until find the first char that the same as loop j and then loop j to see that it all same and  j + 1 found '\0' then it will ended the loop.
    }
    if(i > len)
    {
        return (0);
    }
    return (0);
}

int main()
{
    char a[] = "Hello Wolrd";
    char b[] = "Wolrd";
    int c = 20;
    int d = 10;
    printf("%s\n", ft_strnstr(a, b, c));
    printf("%s", ft_strnstr(a, b, d));
}
