#include <stdio.h>

void *ft_bzero(void *s, size_t n)
{
   // unsigned char c = '\0';
    size_t i;
    i = 0;
    while(i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}

int main()
  {
    char c[100] = "abcdefghisdklsdsfg";

    ft_bzero(c, 10);
  }