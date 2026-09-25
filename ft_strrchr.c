
#include <strings.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int size(const char *s)
{
    int count = 0;
    while (*s != '\0')
    {   
        count++;
        s++;
    }
    return (count);
}

char *ft_strrchr(const char *s, int c)
{
    char * ptr;
    int i;
    
    i = size(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
              return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}
 
int main()
{
    const char src[]="wellcome to 42amman";
    printf("%s",ft_strrchr(src,'a'));
    //printf("%s",strchr(src,'c'));
}
   
