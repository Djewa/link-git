#include "libft.h"

int ft_isalpha(int c)
{
    if ((c < 'a' || c > 'z') && (c > 'Z' || c < 'A'))
        {
            return (0);
        }
        return (1);
}


#include <stdio.h>
int main()
{
 int alpha, alpha2, alpha3;
    int a = 'E';
    int b = 'a';
    int c = '1';
    alpha = ft_isalpha(a);
    alpha2 = ft_isalpha(b);
    alpha3 = ft_isalpha(c);
    printf("%d\n", alpha);
    printf("%d\n", alpha2);
    printf("%d\n", alpha3);
}
