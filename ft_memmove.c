#include <stdio.h>

void *ft_memmove(void *s1, const void *s2, size_t len)
{
    unsigned char *dest;
    unsigned char *src;
    size_t i;

    i = 0;

    dest = (unsigned char *)s1;
    src = (unsigned char *)s2;

    if(dest[i] == '\0' && src[i] == '\0')
    {
        return(NULL);
    }
  /* checking if the address of the destination is greater than the
     * address of the source, if that's the case we'll copy from end to
     * start
     */ 

    if(dest > src)
    {
        while(len > 0)
        {
            dest[len] = src[len];
            len--;
        }
    }
    /* if the address of the destination is not greater than the address
     * of the source, we'll copy from start to end, like we're used to
     */
    else
    {
        while(i < len)
        {
            dest[i] = src[i];
            i++;
        }
    }
    return(dest);
}

#include <string.h> 
int main()
{
    char str1[] = "Hello World";
    char str2[20];

    ft_memmove(str2, str1, strlen(str1) + 1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return(0);

}