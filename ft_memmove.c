#include <strings.h>
#include <stdio.h>
#include <stddef.h>

//void ft_strlen()
//{}

void *ft_memmove(void *dest, const void *src, size_t n)
{

const unsigned char *sptr = (const unsigned char *) src;
unsigned char *ptr = (unsigned char *) dest;

if (!dest && !src)
    return (NULL);

if (n > strlen(sptr))
    return (NULL);

    while (n--)
        *ptr++ = *sptr++;

    return (ptr);
}

int main()
{
    char src[]="wellcome to 42amman";
    char dest[30]= "fares";


    printf("  %d  " , sizeof(dest));
    ft_memmove(dest,src,16);
    //memmove(dest,src,19);
    printf("dest after : %s",dest);

    return 0;
}