#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
    unsigned char *s1_1;
    unsigned char *s2_2;

    s1_1 = (unsigned char *)s1;
    s2_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_1[i] > s2_2[i] || s1_1[i] < s2_2[i])
			return ((unsigned) s1_1[i] - (unsigned) s2_2[i]);
		if (s1_1[i + 1] == '\0' && s2_2[i + 1] == '\0')
			return ((unsigned) 0);
		i++;
	}
	return ((unsigned) 0);
}

int main()
{
    const char src1[] = "wellcome 42 aman core student";
    const char src2[] = "wellcome 42 amman core student";
    printf("%d",ft_memcmp(src1,src2,29));
    return 0;
}