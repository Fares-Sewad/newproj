#include <strings.h>
#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);    
}

int main()
{
    printf("before call : E \nafter call : %c\n**********\n", toupper(33));
    printf("before call : f \nafter call : %c", ft_toupper(33));
}
   