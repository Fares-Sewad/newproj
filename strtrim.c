
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *)&s1[start], end - start + 1);
	return (ptr);
}

int main()
{
    char s1[] = "awdkjjadwgbawdawdwaww";
    char set[] = "wad";
    printf("\n%s\n",ft_strtrim(s1,set));
}