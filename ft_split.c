/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:40:01 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:05:07 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcword(char const *s, char c)
{
	int	i;
	int	co;
	int	flag;

	flag = 0;
	co = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			co++;
		else if (co > 0)
		{
			flag++;
			co = 0;
		}
		i++;
	}
	if (co > 0)
		flag++;
	return (flag);
}

static void	free_split(char **arr, int count)
{
	while (count > 0)
		free(arr[--count]);
	free(arr);
}

static int	addrows(char **arr, char const *s, char c)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			arr[count] = ft_substr(s, start, i - start);
			if (!arr[count])
				return (free_split(arr, count), 0);
			count++;
		}
	}
	arr[count] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (calcword(s, c) + 1));
	if (!arr)
		return (NULL);
	if (!addrows(arr, s, c))
		return (NULL);
	return (arr);
}
// int main(void)
// {
// char s[] = "fares,,,moh,ammed";
// char **arr = ft_split(s, ',');

// int i = 0;
// printf("\n");
// while (arr[i] != NULL)
// {
// int j = 0;
// while (arr[i][j] != '\0')
// {
// printf("%c ", arr[i][j]);
// j++;
// }
// printf("\n");
// i++;
// }
// return (0);
// }
