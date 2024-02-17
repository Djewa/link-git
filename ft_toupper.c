#include <stdio.h>

int    ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return (c);
}

int main()
{
    int a = 'i';
    printf("%c\n", ft_toupper(a));
    return 0;
}