#include <strings.h>
#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);    
}

int main()
{
    printf("before call : A \nafter call : %c\n**********\n", tolower(65));
    printf("before call : A \nafter call : %c", ft_tolower(65));
}
   