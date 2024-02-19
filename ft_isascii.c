#include "libft.h"

int ft_isascii(int c)
{
    if (c < 0 || c > 127)
    {
        return (0);
    }
    return (1);
}


#include <stdio.h>
int main()
{
    int ascii, ascii2;
    int a = 120;
    int b = 128;
    ascii = ft_isascii(a);
    ascii2 = ft_isascii(b);
    printf("%d\n", ascii);
    printf("%d\n", ascii2);
}
