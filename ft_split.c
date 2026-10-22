/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:09:26 by username          #+#    #+#             */
/*   Updated: 2026/10/22 16:54:08 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calcword(char const *s, char c)
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

char	**free_all(char **arr, int count)
{
	while (count >= 0)
	{
		free(arr[count]);
		count--;
	}
	free(arr);
	return (NULL);
}

char	**addrows(char **arr, char const *s, char c)
{
	int	i;
	int	co;
	int	flag;

	flag = 0;
	co = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c)
			co++;
		else if (co > 0)
		{
			arr[flag] = ft_substr(s, i - co, co);
			if (!arr[flag])
				return (free_all(arr, flag - 1));
			flag++;
			co = 0;
		}
	}
	if (co > 0)
		arr[flag++] = ft_substr(s, i - co, co);
	arr[flag] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;

	if (!s)
		return (NULL);
	len = calcword(s, c);
	arr = (char **) malloc((len + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (addrows(arr, s, c));
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
