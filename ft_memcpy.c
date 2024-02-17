#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
   
    i = 0;
    if(((unsigned char *)dest)[i] == '\0' && ((unsigned char *)src)[i] == '\0')
    {
        return (NULL);
    }
    while(i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
}

#include <string.h>

int main () {
   const char src[50] = "Hello World";
   char dest[50];
   strcpy(dest,"Heloo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}