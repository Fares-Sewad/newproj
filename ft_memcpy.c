#include <strings.h>
#include <stdio.h>
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src,size_t n)
{
    if (!dest && !src)
        return (NULL);

    unsigned char *ptr = dest;
    const unsigned char *sptr = (const unsigned char *) src;

    while (n--)
        *ptr++ = *sptr++;

    return (ptr);
}

int main()
{
    char src[] = "42 core student";
    char dest[20] = "0";

    ft_memcpy(dest,src,3);
    //memcpy(dest,src,3);
    printf("dest after = %s\n",dest);

}