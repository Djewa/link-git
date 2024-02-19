#include "libft.h"

void *ft_memcpy(void *s1, const void *s2, size_t n)
{
    unsigned char *dest;
    unsigned char *src;
    size_t i;

    i = 0;

    dest = (unsigned char *)s1;
    src = (unsigned char *)s2;

    if (dest[i] == '\0' && src[i] == '\0')
    {
        return(NULL);
    }
   /*
   if (dest < src)
    {
        while(n > 0)
        {
            dest[i] = src[i];
            i++;
        }
    }
    */
    if (dest > src)
    {
        while(i < n)
        {
            dest[n - 1] = src[n -1];
            n--;
        }
    }
   /*
    else
    {
        while(i < n)
        {
            dest[i] = src[i];
            i++;
        }
    }*/
    return(dest);
}


#include <stdio.h>
#include <string.h>

int main () 
{
   char src[50] = "Learningisfun";
   char *dest;
   dest = src;
   printf("Before memcpy dest = %s\n", src);
   //ft_memcpy(dest, src, strlen(src)+1);
   
   ft_memcpy(dest +8, dest, 10);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}