#include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    int neg;

    result = 0;
    neg = 1;

    while (*str == 32 || (*str >= 9 && *str <= 13)) //can start with an arbitray amount of white space (isspace (3)- has 32 and 9-13
    {
        str++;
    }
    while (*str == 45 || *str == 43)
    {
        if (*str == 45)
        {
            neg = neg * -1;
        }
        str++;
    }
    while(*str >= 48 && *str <= 57)
    {
        result = result * 10 + *str - '0'; //str[i] - '0' converts the character at position i to a numeric digit.
        str++;
    }
    return(result * neg);
}