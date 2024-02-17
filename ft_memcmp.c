#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *dest;
    const unsigned char *src;
    size_t i;

    i = 0;
    dest = (unsigned char *)s1;
    src = (const unsigned char *)s2;

    while(src[i] != '\0' && dest[i] != '\0' &&  i < n)
    {
        if (dest[i] != src[i])
        {
            return (dest[i] - src[i]);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
int main()
{
   char str1[6] = "ABCDEF";
   char str2[6] = "abcdef";
   int ret;

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) 
   {
      printf("str2 is less than str1");
   } 
   else if(ret < 0) 
   {
      printf("str1 is less than str2");
   } 
   else 
   {
      printf("str1 is equal to str2");
   }
   
   return(0);
}