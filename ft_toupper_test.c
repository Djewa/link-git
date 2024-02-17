#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	p;
 
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] = str[p] - 32;
		}
		p++;
	}
	return (str);
}

int main() {
    char a[] = "Hello wor1d";
    printf("%s ", ft_strupcase(a));

    return 0;
}
