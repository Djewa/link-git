#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
 size_t i;
 unsigned char *str;

 i = 0;
 str = (unsigned char *)b;

 while(i < len)
 {
    str[i] = (unsigned char)c;
    i++;
 }

 return(b);
}

int main()
{
char b[10];

ft_memset(b, 'A', 10);
printf("%s\n", b);
}