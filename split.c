#include "libft.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char **ft_split(char const *s, char c)
{

    char **arr;
    int len;
    int count;
    int i;

    i = 0;
    len = ft_strlen((char *)s);
    printf("%d",len);
    while (s[i] != '\0')
    {
        count = 0;
        if (strchr(&s[i],c))
            count++;
        printf("#c %d  i = %d , %c\n",count,i,s[19]);  
        if (count > 0)
        {
            char **arr = (char **)malloc(count + 1);
            if (!arr)
                return (NULL);
        }
        i++;    
    }
}

int main()
{
    //char **arr;
    char s[]="fares,,,mohammed,sewad";
    printf("%s\n",ft_split(s,','));
    //char **arr = (char **)malloc(7 + 1);
   // arr[0]= "fares";
    //printf("%s\n",arr[0]);

}