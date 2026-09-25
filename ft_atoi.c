/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:15:59 by fsewad            #+#    #+#             */
/*   Updated: 2026/06/16 10:17:25 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
*/
int	trak(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[i] <= '0')
	{
		if (str[i] == '-')
			c++;
		i++;
	}
	return (c);
}

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	fi;

	x = 0;
	i = 0;
	fi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
		|| str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		x = str[i] - 48;
		if (fi == 0)
			fi = x;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			fi = (fi * 10) + (str[i + 1] - 48);
		else
			break ;
		i++;
	}
	if (trak(str) % 2 == 0)
		return (fi);
	return (fi * -1);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi(" 	 	 ---+-1341/"));
} //	cc -Wall -Wextra -Werror */
